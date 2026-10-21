/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DescribeAccountSettingsResult.h>
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

DescribeAccountSettingsResult::DescribeAccountSettingsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

DescribeAccountSettingsResult& DescribeAccountSettingsResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeAccountSettingsResult")) {
    resultNode = rootNode.FirstChild("DescribeAccountSettingsResult");
  }

  if (!resultNode.IsNull()) {
    XmlNode settingsNode = resultNode.FirstChild("Settings");
    if (!settingsNode.IsNull()) {
      XmlNode settingsMember = settingsNode.FirstChild("member");
      m_settingsHasBeenSet = !settingsMember.IsNull();
      while (!settingsMember.IsNull()) {
        m_settings.push_back(settingsMember);
        settingsMember = settingsMember.NextNode("member");
      }

      m_settingsHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if (!nextTokenNode.IsNull()) {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::AutoScaling::Model::DescribeAccountSettingsResult",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
