/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/autoscaling/model/Activity.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Activity::Activity() : 
    m_descriptionHasBeenSet(false),
    m_startTime(0.0),
    m_endTime(0.0),
    m_endTimeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_progress(0),
    m_progressHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

Activity::Activity(const XmlNode& xmlNode) : 
    m_descriptionHasBeenSet(false),
    m_startTime(0.0),
    m_endTime(0.0),
    m_endTimeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_progress(0),
    m_progressHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
  *this = xmlNode;
}

Activity& Activity::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode activityIdNode = resultNode.FirstChild("ActivityId");
    m_activityId = StringUtils::Trim(activityIdNode.GetText().c_str());
    XmlNode autoScalingGroupNameNode = resultNode.FirstChild("AutoScalingGroupName");
    m_autoScalingGroupName = StringUtils::Trim(autoScalingGroupNameNode.GetText().c_str());
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = StringUtils::Trim(descriptionNode.GetText().c_str());
      m_descriptionHasBeenSet = true;
    }
    XmlNode causeNode = resultNode.FirstChild("Cause");
    m_cause = StringUtils::Trim(causeNode.GetText().c_str());
    XmlNode startTimeNode = resultNode.FirstChild("StartTime");
    m_startTime = StringUtils::ConvertToDouble(StringUtils::Trim(startTimeNode.GetText().c_str()).c_str());
    XmlNode endTimeNode = resultNode.FirstChild("EndTime");
    if(!endTimeNode.IsNull())
    {
      m_endTime = StringUtils::ConvertToDouble(StringUtils::Trim(endTimeNode.GetText().c_str()).c_str());
      m_endTimeHasBeenSet = true;
    }
    XmlNode statusCodeNode = resultNode.FirstChild("StatusCode");
    m_statusCode = ScalingActivityStatusCodeMapper::GetScalingActivityStatusCodeForName(StringUtils::Trim(statusCodeNode.GetText().c_str()).c_str());
    XmlNode statusMessageNode = resultNode.FirstChild("StatusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = StringUtils::Trim(statusMessageNode.GetText().c_str());
      m_statusMessageHasBeenSet = true;
    }
    XmlNode progressNode = resultNode.FirstChild("Progress");
    if(!progressNode.IsNull())
    {
      m_progress = StringUtils::ConvertToInt32(StringUtils::Trim(progressNode.GetText().c_str()).c_str());
      m_progressHasBeenSet = true;
    }
    XmlNode detailsNode = resultNode.FirstChild("Details");
    if(!detailsNode.IsNull())
    {
      m_details = StringUtils::Trim(detailsNode.GetText().c_str());
      m_detailsHasBeenSet = true;
    }
  }

  return *this;
}

void Activity::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  oStream << location << index << locationValue << ".ActivityId=" << StringUtils::URLEncode(m_activityId.c_str()) << "&";
  oStream << location << index << locationValue << ".AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  oStream << location << index << locationValue << ".Cause=" << StringUtils::URLEncode(m_cause.c_str()) << "&";
  oStream << location << index << locationValue << ".StartTime=" << m_startTime << "&";
  if(m_endTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndTime=" << m_endTime << "&";
  }
  oStream << location << index << locationValue << ".StatusCode=" << ScalingActivityStatusCodeMapper::GetNameForScalingActivityStatusCode(m_statusCode) << "&";
  if(m_statusMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }
  if(m_progressHasBeenSet)
  {
      oStream << location << index << locationValue << ".Progress=" << m_progress << "&";
  }
  if(m_detailsHasBeenSet)
  {
      oStream << location << index << locationValue << ".Details=" << StringUtils::URLEncode(m_details.c_str()) << "&";
  }
}

void Activity::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  oStream << location << ".ActivityId=" << StringUtils::URLEncode(m_activityId.c_str()) << "&";
  oStream << location << ".AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  oStream << location << ".Cause=" << StringUtils::URLEncode(m_cause.c_str()) << "&";
  oStream << location << ".StartTime=" << m_startTime << "&";
  if(m_endTimeHasBeenSet)
  {
      oStream << location << ".EndTime=" << m_endTime << "&";
  }
  oStream << location << ".StatusCode=" << ScalingActivityStatusCodeMapper::GetNameForScalingActivityStatusCode(m_statusCode) << "&";
  if(m_statusMessageHasBeenSet)
  {
      oStream << location << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }
  if(m_progressHasBeenSet)
  {
      oStream << location << ".Progress=" << m_progress << "&";
  }
  if(m_detailsHasBeenSet)
  {
      oStream << location << ".Details=" << StringUtils::URLEncode(m_details.c_str()) << "&";
  }
}
