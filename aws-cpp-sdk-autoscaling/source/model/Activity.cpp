/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

Activity::Activity() : 
    m_activityIdHasBeenSet(false),
    m_autoScalingGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_causeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusCode(ScalingActivityStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_progress(0),
    m_progressHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

Activity::Activity(const XmlNode& xmlNode) : 
    m_activityIdHasBeenSet(false),
    m_autoScalingGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_causeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusCode(ScalingActivityStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
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
    if(!activityIdNode.IsNull())
    {
      m_activityId = activityIdNode.GetText();
      m_activityIdHasBeenSet = true;
    }
    XmlNode autoScalingGroupNameNode = resultNode.FirstChild("AutoScalingGroupName");
    if(!autoScalingGroupNameNode.IsNull())
    {
      m_autoScalingGroupName = autoScalingGroupNameNode.GetText();
      m_autoScalingGroupNameHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode causeNode = resultNode.FirstChild("Cause");
    if(!causeNode.IsNull())
    {
      m_cause = causeNode.GetText();
      m_causeHasBeenSet = true;
    }
    XmlNode startTimeNode = resultNode.FirstChild("StartTime");
    if(!startTimeNode.IsNull())
    {
      m_startTime = DateTime(StringUtils::Trim(startTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_startTimeHasBeenSet = true;
    }
    XmlNode endTimeNode = resultNode.FirstChild("EndTime");
    if(!endTimeNode.IsNull())
    {
      m_endTime = DateTime(StringUtils::Trim(endTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_endTimeHasBeenSet = true;
    }
    XmlNode statusCodeNode = resultNode.FirstChild("StatusCode");
    if(!statusCodeNode.IsNull())
    {
      m_statusCode = ScalingActivityStatusCodeMapper::GetScalingActivityStatusCodeForName(StringUtils::Trim(statusCodeNode.GetText().c_str()).c_str());
      m_statusCodeHasBeenSet = true;
    }
    XmlNode statusMessageNode = resultNode.FirstChild("StatusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = statusMessageNode.GetText();
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
      m_details = detailsNode.GetText();
      m_detailsHasBeenSet = true;
    }
  }

  return *this;
}

void Activity::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_activityIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActivityId=" << StringUtils::URLEncode(m_activityId.c_str()) << "&";
  }

  if(m_autoScalingGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_causeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Cause=" << StringUtils::URLEncode(m_cause.c_str()) << "&";
  }

  if(m_startTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_statusCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusCode=" << ScalingActivityStatusCodeMapper::GetNameForScalingActivityStatusCode(m_statusCode) << "&";
  }

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
  if(m_activityIdHasBeenSet)
  {
      oStream << location << ".ActivityId=" << StringUtils::URLEncode(m_activityId.c_str()) << "&";
  }
  if(m_autoScalingGroupNameHasBeenSet)
  {
      oStream << location << ".AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_causeHasBeenSet)
  {
      oStream << location << ".Cause=" << StringUtils::URLEncode(m_cause.c_str()) << "&";
  }
  if(m_startTimeHasBeenSet)
  {
      oStream << location << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_endTimeHasBeenSet)
  {
      oStream << location << ".EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_statusCodeHasBeenSet)
  {
      oStream << location << ".StatusCode=" << ScalingActivityStatusCodeMapper::GetNameForScalingActivityStatusCode(m_statusCode) << "&";
  }
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

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
