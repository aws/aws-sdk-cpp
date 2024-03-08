/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LockSnapshotResponse.h>
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

LockSnapshotResponse::LockSnapshotResponse() : 
    m_lockState(LockState::NOT_SET),
    m_lockDuration(0),
    m_coolOffPeriod(0)
{
}

LockSnapshotResponse::LockSnapshotResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_lockState(LockState::NOT_SET),
    m_lockDuration(0),
    m_coolOffPeriod(0)
{
  *this = result;
}

LockSnapshotResponse& LockSnapshotResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "LockSnapshotResponse"))
  {
    resultNode = rootNode.FirstChild("LockSnapshotResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode snapshotIdNode = resultNode.FirstChild("snapshotId");
    if(!snapshotIdNode.IsNull())
    {
      m_snapshotId = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotIdNode.GetText());
    }
    XmlNode lockStateNode = resultNode.FirstChild("lockState");
    if(!lockStateNode.IsNull())
    {
      m_lockState = LockStateMapper::GetLockStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lockStateNode.GetText()).c_str()).c_str());
    }
    XmlNode lockDurationNode = resultNode.FirstChild("lockDuration");
    if(!lockDurationNode.IsNull())
    {
      m_lockDuration = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lockDurationNode.GetText()).c_str()).c_str());
    }
    XmlNode coolOffPeriodNode = resultNode.FirstChild("coolOffPeriod");
    if(!coolOffPeriodNode.IsNull())
    {
      m_coolOffPeriod = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(coolOffPeriodNode.GetText()).c_str()).c_str());
    }
    XmlNode coolOffPeriodExpiresOnNode = resultNode.FirstChild("coolOffPeriodExpiresOn");
    if(!coolOffPeriodExpiresOnNode.IsNull())
    {
      m_coolOffPeriodExpiresOn = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(coolOffPeriodExpiresOnNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode lockCreatedOnNode = resultNode.FirstChild("lockCreatedOn");
    if(!lockCreatedOnNode.IsNull())
    {
      m_lockCreatedOn = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lockCreatedOnNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode lockExpiresOnNode = resultNode.FirstChild("lockExpiresOn");
    if(!lockExpiresOnNode.IsNull())
    {
      m_lockExpiresOn = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lockExpiresOnNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode lockDurationStartTimeNode = resultNode.FirstChild("lockDurationStartTime");
    if(!lockDurationStartTimeNode.IsNull())
    {
      m_lockDurationStartTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lockDurationStartTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::LockSnapshotResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
