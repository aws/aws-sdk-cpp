/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/iam/model/GetDelegationRequestResult.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetDelegationRequestResult::GetDelegationRequestResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

GetDelegationRequestResult& GetDelegationRequestResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetDelegationRequestResult")) {
    resultNode = rootNode.FirstChild("GetDelegationRequestResult");
  }

  if (!resultNode.IsNull()) {
    XmlNode delegationRequestNode = resultNode.FirstChild("DelegationRequest");
    if (!delegationRequestNode.IsNull()) {
      m_delegationRequest = delegationRequestNode;
      m_delegationRequestHasBeenSet = true;
    }
    XmlNode permissionCheckStatusNode = resultNode.FirstChild("PermissionCheckStatus");
    if (!permissionCheckStatusNode.IsNull()) {
      m_permissionCheckStatus = PermissionCheckStatusTypeMapper::GetPermissionCheckStatusTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(permissionCheckStatusNode.GetText()).c_str()));
      m_permissionCheckStatusHasBeenSet = true;
    }
    XmlNode permissionCheckResultNode = resultNode.FirstChild("PermissionCheckResult");
    if (!permissionCheckResultNode.IsNull()) {
      m_permissionCheckResult = PermissionCheckResultTypeMapper::GetPermissionCheckResultTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(permissionCheckResultNode.GetText()).c_str()));
      m_permissionCheckResultHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::IAM::Model::GetDelegationRequestResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
