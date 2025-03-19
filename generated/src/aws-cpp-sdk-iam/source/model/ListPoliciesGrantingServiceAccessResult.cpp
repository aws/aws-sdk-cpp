/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/ListPoliciesGrantingServiceAccessResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ListPoliciesGrantingServiceAccessResult::ListPoliciesGrantingServiceAccessResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListPoliciesGrantingServiceAccessResult& ListPoliciesGrantingServiceAccessResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListPoliciesGrantingServiceAccessResult"))
  {
    resultNode = rootNode.FirstChild("ListPoliciesGrantingServiceAccessResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode policiesGrantingServiceAccessNode = resultNode.FirstChild("PoliciesGrantingServiceAccess");
    if(!policiesGrantingServiceAccessNode.IsNull())
    {
      XmlNode policiesGrantingServiceAccessMember = policiesGrantingServiceAccessNode.FirstChild("member");
      m_policiesGrantingServiceAccessHasBeenSet = !policiesGrantingServiceAccessMember.IsNull();
      while(!policiesGrantingServiceAccessMember.IsNull())
      {
        m_policiesGrantingServiceAccess.push_back(policiesGrantingServiceAccessMember);
        policiesGrantingServiceAccessMember = policiesGrantingServiceAccessMember.NextNode("member");
      }

      m_policiesGrantingServiceAccessHasBeenSet = true;
    }
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isTruncatedNode.GetText()).c_str()).c_str());
      m_isTruncatedHasBeenSet = true;
    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
      m_markerHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::IAM::Model::ListPoliciesGrantingServiceAccessResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
