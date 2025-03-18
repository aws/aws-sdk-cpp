/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/EnableOrganizationsRootSessionsResult.h>
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

EnableOrganizationsRootSessionsResult::EnableOrganizationsRootSessionsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

EnableOrganizationsRootSessionsResult& EnableOrganizationsRootSessionsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "EnableOrganizationsRootSessionsResult"))
  {
    resultNode = rootNode.FirstChild("EnableOrganizationsRootSessionsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode organizationIdNode = resultNode.FirstChild("OrganizationId");
    if(!organizationIdNode.IsNull())
    {
      m_organizationId = Aws::Utils::Xml::DecodeEscapedXmlText(organizationIdNode.GetText());
      m_organizationIdHasBeenSet = true;
    }
    XmlNode enabledFeaturesNode = resultNode.FirstChild("EnabledFeatures");
    if(!enabledFeaturesNode.IsNull())
    {
      XmlNode enabledFeaturesMember = enabledFeaturesNode.FirstChild("member");
      m_enabledFeaturesHasBeenSet = !enabledFeaturesMember.IsNull();
      while(!enabledFeaturesMember.IsNull())
      {
        m_enabledFeatures.push_back(FeatureTypeMapper::GetFeatureTypeForName(StringUtils::Trim(enabledFeaturesMember.GetText().c_str())));
        enabledFeaturesMember = enabledFeaturesMember.NextNode("member");
      }

      m_enabledFeaturesHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::IAM::Model::EnableOrganizationsRootSessionsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
