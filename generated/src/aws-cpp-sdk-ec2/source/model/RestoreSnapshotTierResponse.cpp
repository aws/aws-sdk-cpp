/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RestoreSnapshotTierResponse.h>
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

RestoreSnapshotTierResponse::RestoreSnapshotTierResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

RestoreSnapshotTierResponse& RestoreSnapshotTierResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "RestoreSnapshotTierResponse"))
  {
    resultNode = rootNode.FirstChild("RestoreSnapshotTierResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode snapshotIdNode = resultNode.FirstChild("snapshotId");
    if(!snapshotIdNode.IsNull())
    {
      m_snapshotId = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotIdNode.GetText());
      m_snapshotIdHasBeenSet = true;
    }
    XmlNode restoreStartTimeNode = resultNode.FirstChild("restoreStartTime");
    if(!restoreStartTimeNode.IsNull())
    {
      m_restoreStartTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(restoreStartTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_restoreStartTimeHasBeenSet = true;
    }
    XmlNode restoreDurationNode = resultNode.FirstChild("restoreDuration");
    if(!restoreDurationNode.IsNull())
    {
      m_restoreDuration = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(restoreDurationNode.GetText()).c_str()).c_str());
      m_restoreDurationHasBeenSet = true;
    }
    XmlNode isPermanentRestoreNode = resultNode.FirstChild("isPermanentRestore");
    if(!isPermanentRestoreNode.IsNull())
    {
      m_isPermanentRestore = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isPermanentRestoreNode.GetText()).c_str()).c_str());
      m_isPermanentRestoreHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::RestoreSnapshotTierResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
