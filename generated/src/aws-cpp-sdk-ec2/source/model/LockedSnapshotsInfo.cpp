/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LockedSnapshotsInfo.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

LockedSnapshotsInfo::LockedSnapshotsInfo() : 
    m_ownerIdHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_lockState(LockState::NOT_SET),
    m_lockStateHasBeenSet(false),
    m_lockDuration(0),
    m_lockDurationHasBeenSet(false),
    m_coolOffPeriod(0),
    m_coolOffPeriodHasBeenSet(false),
    m_coolOffPeriodExpiresOnHasBeenSet(false),
    m_lockCreatedOnHasBeenSet(false),
    m_lockDurationStartTimeHasBeenSet(false),
    m_lockExpiresOnHasBeenSet(false)
{
}

LockedSnapshotsInfo::LockedSnapshotsInfo(const XmlNode& xmlNode) : 
    m_ownerIdHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_lockState(LockState::NOT_SET),
    m_lockStateHasBeenSet(false),
    m_lockDuration(0),
    m_lockDurationHasBeenSet(false),
    m_coolOffPeriod(0),
    m_coolOffPeriodHasBeenSet(false),
    m_coolOffPeriodExpiresOnHasBeenSet(false),
    m_lockCreatedOnHasBeenSet(false),
    m_lockDurationStartTimeHasBeenSet(false),
    m_lockExpiresOnHasBeenSet(false)
{
  *this = xmlNode;
}

LockedSnapshotsInfo& LockedSnapshotsInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode snapshotIdNode = resultNode.FirstChild("snapshotId");
    if(!snapshotIdNode.IsNull())
    {
      m_snapshotId = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotIdNode.GetText());
      m_snapshotIdHasBeenSet = true;
    }
    XmlNode lockStateNode = resultNode.FirstChild("lockState");
    if(!lockStateNode.IsNull())
    {
      m_lockState = LockStateMapper::GetLockStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lockStateNode.GetText()).c_str()).c_str());
      m_lockStateHasBeenSet = true;
    }
    XmlNode lockDurationNode = resultNode.FirstChild("lockDuration");
    if(!lockDurationNode.IsNull())
    {
      m_lockDuration = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lockDurationNode.GetText()).c_str()).c_str());
      m_lockDurationHasBeenSet = true;
    }
    XmlNode coolOffPeriodNode = resultNode.FirstChild("coolOffPeriod");
    if(!coolOffPeriodNode.IsNull())
    {
      m_coolOffPeriod = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(coolOffPeriodNode.GetText()).c_str()).c_str());
      m_coolOffPeriodHasBeenSet = true;
    }
    XmlNode coolOffPeriodExpiresOnNode = resultNode.FirstChild("coolOffPeriodExpiresOn");
    if(!coolOffPeriodExpiresOnNode.IsNull())
    {
      m_coolOffPeriodExpiresOn = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(coolOffPeriodExpiresOnNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_coolOffPeriodExpiresOnHasBeenSet = true;
    }
    XmlNode lockCreatedOnNode = resultNode.FirstChild("lockCreatedOn");
    if(!lockCreatedOnNode.IsNull())
    {
      m_lockCreatedOn = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lockCreatedOnNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lockCreatedOnHasBeenSet = true;
    }
    XmlNode lockDurationStartTimeNode = resultNode.FirstChild("lockDurationStartTime");
    if(!lockDurationStartTimeNode.IsNull())
    {
      m_lockDurationStartTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lockDurationStartTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lockDurationStartTimeHasBeenSet = true;
    }
    XmlNode lockExpiresOnNode = resultNode.FirstChild("lockExpiresOn");
    if(!lockExpiresOnNode.IsNull())
    {
      m_lockExpiresOn = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lockExpiresOnNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lockExpiresOnHasBeenSet = true;
    }
  }

  return *this;
}

void LockedSnapshotsInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_snapshotIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }

  if(m_lockStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".LockState=" << LockStateMapper::GetNameForLockState(m_lockState) << "&";
  }

  if(m_lockDurationHasBeenSet)
  {
      oStream << location << index << locationValue << ".LockDuration=" << m_lockDuration << "&";
  }

  if(m_coolOffPeriodHasBeenSet)
  {
      oStream << location << index << locationValue << ".CoolOffPeriod=" << m_coolOffPeriod << "&";
  }

  if(m_coolOffPeriodExpiresOnHasBeenSet)
  {
      oStream << location << index << locationValue << ".CoolOffPeriodExpiresOn=" << StringUtils::URLEncode(m_coolOffPeriodExpiresOn.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_lockCreatedOnHasBeenSet)
  {
      oStream << location << index << locationValue << ".LockCreatedOn=" << StringUtils::URLEncode(m_lockCreatedOn.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_lockDurationStartTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LockDurationStartTime=" << StringUtils::URLEncode(m_lockDurationStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_lockExpiresOnHasBeenSet)
  {
      oStream << location << index << locationValue << ".LockExpiresOn=" << StringUtils::URLEncode(m_lockExpiresOn.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void LockedSnapshotsInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_snapshotIdHasBeenSet)
  {
      oStream << location << ".SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }
  if(m_lockStateHasBeenSet)
  {
      oStream << location << ".LockState=" << LockStateMapper::GetNameForLockState(m_lockState) << "&";
  }
  if(m_lockDurationHasBeenSet)
  {
      oStream << location << ".LockDuration=" << m_lockDuration << "&";
  }
  if(m_coolOffPeriodHasBeenSet)
  {
      oStream << location << ".CoolOffPeriod=" << m_coolOffPeriod << "&";
  }
  if(m_coolOffPeriodExpiresOnHasBeenSet)
  {
      oStream << location << ".CoolOffPeriodExpiresOn=" << StringUtils::URLEncode(m_coolOffPeriodExpiresOn.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_lockCreatedOnHasBeenSet)
  {
      oStream << location << ".LockCreatedOn=" << StringUtils::URLEncode(m_lockCreatedOn.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_lockDurationStartTimeHasBeenSet)
  {
      oStream << location << ".LockDurationStartTime=" << StringUtils::URLEncode(m_lockDurationStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_lockExpiresOnHasBeenSet)
  {
      oStream << location << ".LockExpiresOn=" << StringUtils::URLEncode(m_lockExpiresOn.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
