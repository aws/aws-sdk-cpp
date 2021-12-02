/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DisableIpamOrganizationAdminAccountResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DisableIpamOrganizationAdminAccountResponse::DisableIpamOrganizationAdminAccountResponse() : 
    m_success(false)
{
}

DisableIpamOrganizationAdminAccountResponse::DisableIpamOrganizationAdminAccountResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_success(false)
{
  *this = result;
}

DisableIpamOrganizationAdminAccountResponse& DisableIpamOrganizationAdminAccountResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DisableIpamOrganizationAdminAccountResponse"))
  {
    resultNode = rootNode.FirstChild("DisableIpamOrganizationAdminAccountResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode successNode = resultNode.FirstChild("success");
    if(!successNode.IsNull())
    {
      m_success = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(successNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DisableIpamOrganizationAdminAccountResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
