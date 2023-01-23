/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeFastSnapshotRestoreSuccessItem.h>
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

DescribeFastSnapshotRestoreSuccessItem::DescribeFastSnapshotRestoreSuccessItem() : 
    m_snapshotIdHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_state(FastSnapshotRestoreStateCode::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateTransitionReasonHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_ownerAliasHasBeenSet(false),
    m_enablingTimeHasBeenSet(false),
    m_optimizingTimeHasBeenSet(false),
    m_enabledTimeHasBeenSet(false),
    m_disablingTimeHasBeenSet(false),
    m_disabledTimeHasBeenSet(false)
{
}

DescribeFastSnapshotRestoreSuccessItem::DescribeFastSnapshotRestoreSuccessItem(const XmlNode& xmlNode) : 
    m_snapshotIdHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_state(FastSnapshotRestoreStateCode::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateTransitionReasonHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_ownerAliasHasBeenSet(false),
    m_enablingTimeHasBeenSet(false),
    m_optimizingTimeHasBeenSet(false),
    m_enabledTimeHasBeenSet(false),
    m_disablingTimeHasBeenSet(false),
    m_disabledTimeHasBeenSet(false)
{
  *this = xmlNode;
}

DescribeFastSnapshotRestoreSuccessItem& DescribeFastSnapshotRestoreSuccessItem::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode snapshotIdNode = resultNode.FirstChild("snapshotId");
    if(!snapshotIdNode.IsNull())
    {
      m_snapshotId = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotIdNode.GetText());
      m_snapshotIdHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = FastSnapshotRestoreStateCodeMapper::GetFastSnapshotRestoreStateCodeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode stateTransitionReasonNode = resultNode.FirstChild("stateTransitionReason");
    if(!stateTransitionReasonNode.IsNull())
    {
      m_stateTransitionReason = Aws::Utils::Xml::DecodeEscapedXmlText(stateTransitionReasonNode.GetText());
      m_stateTransitionReasonHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode ownerAliasNode = resultNode.FirstChild("ownerAlias");
    if(!ownerAliasNode.IsNull())
    {
      m_ownerAlias = Aws::Utils::Xml::DecodeEscapedXmlText(ownerAliasNode.GetText());
      m_ownerAliasHasBeenSet = true;
    }
    XmlNode enablingTimeNode = resultNode.FirstChild("enablingTime");
    if(!enablingTimeNode.IsNull())
    {
      m_enablingTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enablingTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_enablingTimeHasBeenSet = true;
    }
    XmlNode optimizingTimeNode = resultNode.FirstChild("optimizingTime");
    if(!optimizingTimeNode.IsNull())
    {
      m_optimizingTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(optimizingTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_optimizingTimeHasBeenSet = true;
    }
    XmlNode enabledTimeNode = resultNode.FirstChild("enabledTime");
    if(!enabledTimeNode.IsNull())
    {
      m_enabledTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_enabledTimeHasBeenSet = true;
    }
    XmlNode disablingTimeNode = resultNode.FirstChild("disablingTime");
    if(!disablingTimeNode.IsNull())
    {
      m_disablingTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(disablingTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_disablingTimeHasBeenSet = true;
    }
    XmlNode disabledTimeNode = resultNode.FirstChild("disabledTime");
    if(!disabledTimeNode.IsNull())
    {
      m_disabledTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(disabledTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_disabledTimeHasBeenSet = true;
    }
  }

  return *this;
}

void DescribeFastSnapshotRestoreSuccessItem::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_snapshotIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << FastSnapshotRestoreStateCodeMapper::GetNameForFastSnapshotRestoreStateCode(m_state) << "&";
  }

  if(m_stateTransitionReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".StateTransitionReason=" << StringUtils::URLEncode(m_stateTransitionReason.c_str()) << "&";
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_ownerAliasHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerAlias=" << StringUtils::URLEncode(m_ownerAlias.c_str()) << "&";
  }

  if(m_enablingTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EnablingTime=" << StringUtils::URLEncode(m_enablingTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_optimizingTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".OptimizingTime=" << StringUtils::URLEncode(m_optimizingTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_enabledTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EnabledTime=" << StringUtils::URLEncode(m_enabledTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_disablingTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DisablingTime=" << StringUtils::URLEncode(m_disablingTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_disabledTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DisabledTime=" << StringUtils::URLEncode(m_disabledTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void DescribeFastSnapshotRestoreSuccessItem::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_snapshotIdHasBeenSet)
  {
      oStream << location << ".SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << FastSnapshotRestoreStateCodeMapper::GetNameForFastSnapshotRestoreStateCode(m_state) << "&";
  }
  if(m_stateTransitionReasonHasBeenSet)
  {
      oStream << location << ".StateTransitionReason=" << StringUtils::URLEncode(m_stateTransitionReason.c_str()) << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_ownerAliasHasBeenSet)
  {
      oStream << location << ".OwnerAlias=" << StringUtils::URLEncode(m_ownerAlias.c_str()) << "&";
  }
  if(m_enablingTimeHasBeenSet)
  {
      oStream << location << ".EnablingTime=" << StringUtils::URLEncode(m_enablingTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_optimizingTimeHasBeenSet)
  {
      oStream << location << ".OptimizingTime=" << StringUtils::URLEncode(m_optimizingTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_enabledTimeHasBeenSet)
  {
      oStream << location << ".EnabledTime=" << StringUtils::URLEncode(m_enabledTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_disablingTimeHasBeenSet)
  {
      oStream << location << ".DisablingTime=" << StringUtils::URLEncode(m_disablingTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_disabledTimeHasBeenSet)
  {
      oStream << location << ".DisabledTime=" << StringUtils::URLEncode(m_disabledTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
