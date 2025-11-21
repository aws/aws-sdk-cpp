/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/GetEnabledIpamPolicyResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetEnabledIpamPolicyResponse::GetEnabledIpamPolicyResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

GetEnabledIpamPolicyResponse& GetEnabledIpamPolicyResponse::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetEnabledIpamPolicyResponse")) {
    resultNode = rootNode.FirstChild("GetEnabledIpamPolicyResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode ipamPolicyEnabledNode = resultNode.FirstChild("ipamPolicyEnabled");
    if (!ipamPolicyEnabledNode.IsNull()) {
      m_ipamPolicyEnabled = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipamPolicyEnabledNode.GetText()).c_str()).c_str());
      m_ipamPolicyEnabledHasBeenSet = true;
    }
    XmlNode ipamPolicyIdNode = resultNode.FirstChild("ipamPolicyId");
    if (!ipamPolicyIdNode.IsNull()) {
      m_ipamPolicyId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamPolicyIdNode.GetText());
      m_ipamPolicyIdHasBeenSet = true;
    }
    XmlNode managedByNode = resultNode.FirstChild("managedBy");
    if (!managedByNode.IsNull()) {
      m_managedBy = IpamPolicyManagedByMapper::GetIpamPolicyManagedByForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(managedByNode.GetText()).c_str()));
      m_managedByHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetEnabledIpamPolicyResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
