/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/LaunchInstancesResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

LaunchInstancesResult::LaunchInstancesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

LaunchInstancesResult& LaunchInstancesResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "LaunchInstancesResult")) {
    resultNode = rootNode.FirstChild("LaunchInstancesResult");
  }

  if (!resultNode.IsNull()) {
    XmlNode autoScalingGroupNameNode = resultNode.FirstChild("AutoScalingGroupName");
    if (!autoScalingGroupNameNode.IsNull()) {
      m_autoScalingGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(autoScalingGroupNameNode.GetText());
      m_autoScalingGroupNameHasBeenSet = true;
    }
    XmlNode clientTokenNode = resultNode.FirstChild("ClientToken");
    if (!clientTokenNode.IsNull()) {
      m_clientToken = Aws::Utils::Xml::DecodeEscapedXmlText(clientTokenNode.GetText());
      m_clientTokenHasBeenSet = true;
    }
    XmlNode instancesNode = resultNode.FirstChild("Instances");
    if (!instancesNode.IsNull()) {
      XmlNode instancesMember = instancesNode.FirstChild("member");
      m_instancesHasBeenSet = !instancesMember.IsNull();
      while (!instancesMember.IsNull()) {
        m_instances.push_back(instancesMember);
        instancesMember = instancesMember.NextNode("member");
      }

      m_instancesHasBeenSet = true;
    }
    XmlNode errorsNode = resultNode.FirstChild("Errors");
    if (!errorsNode.IsNull()) {
      XmlNode errorsMember = errorsNode.FirstChild("member");
      m_errorsHasBeenSet = !errorsMember.IsNull();
      while (!errorsMember.IsNull()) {
        m_errors.push_back(errorsMember);
        errorsMember = errorsMember.NextNode("member");
      }

      m_errorsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::AutoScaling::Model::LaunchInstancesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
