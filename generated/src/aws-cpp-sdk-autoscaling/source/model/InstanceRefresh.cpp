/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/InstanceRefresh.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

InstanceRefresh::InstanceRefresh() : 
    m_instanceRefreshIdHasBeenSet(false),
    m_autoScalingGroupNameHasBeenSet(false),
    m_status(InstanceRefreshStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_percentageComplete(0),
    m_percentageCompleteHasBeenSet(false),
    m_instancesToUpdate(0),
    m_instancesToUpdateHasBeenSet(false),
    m_progressDetailsHasBeenSet(false),
    m_preferencesHasBeenSet(false),
    m_desiredConfigurationHasBeenSet(false)
{
}

InstanceRefresh::InstanceRefresh(const XmlNode& xmlNode) : 
    m_instanceRefreshIdHasBeenSet(false),
    m_autoScalingGroupNameHasBeenSet(false),
    m_status(InstanceRefreshStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_percentageComplete(0),
    m_percentageCompleteHasBeenSet(false),
    m_instancesToUpdate(0),
    m_instancesToUpdateHasBeenSet(false),
    m_progressDetailsHasBeenSet(false),
    m_preferencesHasBeenSet(false),
    m_desiredConfigurationHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceRefresh& InstanceRefresh::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceRefreshIdNode = resultNode.FirstChild("InstanceRefreshId");
    if(!instanceRefreshIdNode.IsNull())
    {
      m_instanceRefreshId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceRefreshIdNode.GetText());
      m_instanceRefreshIdHasBeenSet = true;
    }
    XmlNode autoScalingGroupNameNode = resultNode.FirstChild("AutoScalingGroupName");
    if(!autoScalingGroupNameNode.IsNull())
    {
      m_autoScalingGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(autoScalingGroupNameNode.GetText());
      m_autoScalingGroupNameHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = InstanceRefreshStatusMapper::GetInstanceRefreshStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode statusReasonNode = resultNode.FirstChild("StatusReason");
    if(!statusReasonNode.IsNull())
    {
      m_statusReason = Aws::Utils::Xml::DecodeEscapedXmlText(statusReasonNode.GetText());
      m_statusReasonHasBeenSet = true;
    }
    XmlNode startTimeNode = resultNode.FirstChild("StartTime");
    if(!startTimeNode.IsNull())
    {
      m_startTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_startTimeHasBeenSet = true;
    }
    XmlNode endTimeNode = resultNode.FirstChild("EndTime");
    if(!endTimeNode.IsNull())
    {
      m_endTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_endTimeHasBeenSet = true;
    }
    XmlNode percentageCompleteNode = resultNode.FirstChild("PercentageComplete");
    if(!percentageCompleteNode.IsNull())
    {
      m_percentageComplete = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(percentageCompleteNode.GetText()).c_str()).c_str());
      m_percentageCompleteHasBeenSet = true;
    }
    XmlNode instancesToUpdateNode = resultNode.FirstChild("InstancesToUpdate");
    if(!instancesToUpdateNode.IsNull())
    {
      m_instancesToUpdate = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instancesToUpdateNode.GetText()).c_str()).c_str());
      m_instancesToUpdateHasBeenSet = true;
    }
    XmlNode progressDetailsNode = resultNode.FirstChild("ProgressDetails");
    if(!progressDetailsNode.IsNull())
    {
      m_progressDetails = progressDetailsNode;
      m_progressDetailsHasBeenSet = true;
    }
    XmlNode preferencesNode = resultNode.FirstChild("Preferences");
    if(!preferencesNode.IsNull())
    {
      m_preferences = preferencesNode;
      m_preferencesHasBeenSet = true;
    }
    XmlNode desiredConfigurationNode = resultNode.FirstChild("DesiredConfiguration");
    if(!desiredConfigurationNode.IsNull())
    {
      m_desiredConfiguration = desiredConfigurationNode;
      m_desiredConfigurationHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceRefresh::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceRefreshIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceRefreshId=" << StringUtils::URLEncode(m_instanceRefreshId.c_str()) << "&";
  }

  if(m_autoScalingGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << InstanceRefreshStatusMapper::GetNameForInstanceRefreshStatus(m_status) << "&";
  }

  if(m_statusReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusReason=" << StringUtils::URLEncode(m_statusReason.c_str()) << "&";
  }

  if(m_startTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_percentageCompleteHasBeenSet)
  {
      oStream << location << index << locationValue << ".PercentageComplete=" << m_percentageComplete << "&";
  }

  if(m_instancesToUpdateHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstancesToUpdate=" << m_instancesToUpdate << "&";
  }

  if(m_progressDetailsHasBeenSet)
  {
      Aws::StringStream progressDetailsLocationAndMemberSs;
      progressDetailsLocationAndMemberSs << location << index << locationValue << ".ProgressDetails";
      m_progressDetails.OutputToStream(oStream, progressDetailsLocationAndMemberSs.str().c_str());
  }

  if(m_preferencesHasBeenSet)
  {
      Aws::StringStream preferencesLocationAndMemberSs;
      preferencesLocationAndMemberSs << location << index << locationValue << ".Preferences";
      m_preferences.OutputToStream(oStream, preferencesLocationAndMemberSs.str().c_str());
  }

  if(m_desiredConfigurationHasBeenSet)
  {
      Aws::StringStream desiredConfigurationLocationAndMemberSs;
      desiredConfigurationLocationAndMemberSs << location << index << locationValue << ".DesiredConfiguration";
      m_desiredConfiguration.OutputToStream(oStream, desiredConfigurationLocationAndMemberSs.str().c_str());
  }

}

void InstanceRefresh::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceRefreshIdHasBeenSet)
  {
      oStream << location << ".InstanceRefreshId=" << StringUtils::URLEncode(m_instanceRefreshId.c_str()) << "&";
  }
  if(m_autoScalingGroupNameHasBeenSet)
  {
      oStream << location << ".AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << InstanceRefreshStatusMapper::GetNameForInstanceRefreshStatus(m_status) << "&";
  }
  if(m_statusReasonHasBeenSet)
  {
      oStream << location << ".StatusReason=" << StringUtils::URLEncode(m_statusReason.c_str()) << "&";
  }
  if(m_startTimeHasBeenSet)
  {
      oStream << location << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_endTimeHasBeenSet)
  {
      oStream << location << ".EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_percentageCompleteHasBeenSet)
  {
      oStream << location << ".PercentageComplete=" << m_percentageComplete << "&";
  }
  if(m_instancesToUpdateHasBeenSet)
  {
      oStream << location << ".InstancesToUpdate=" << m_instancesToUpdate << "&";
  }
  if(m_progressDetailsHasBeenSet)
  {
      Aws::String progressDetailsLocationAndMember(location);
      progressDetailsLocationAndMember += ".ProgressDetails";
      m_progressDetails.OutputToStream(oStream, progressDetailsLocationAndMember.c_str());
  }
  if(m_preferencesHasBeenSet)
  {
      Aws::String preferencesLocationAndMember(location);
      preferencesLocationAndMember += ".Preferences";
      m_preferences.OutputToStream(oStream, preferencesLocationAndMember.c_str());
  }
  if(m_desiredConfigurationHasBeenSet)
  {
      Aws::String desiredConfigurationLocationAndMember(location);
      desiredConfigurationLocationAndMember += ".DesiredConfiguration";
      m_desiredConfiguration.OutputToStream(oStream, desiredConfigurationLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
