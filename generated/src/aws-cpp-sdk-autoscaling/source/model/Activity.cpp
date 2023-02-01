/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_detailsHasBeenSet(false),
    m_autoScalingGroupStateHasBeenSet(false),
    m_autoScalingGroupARNHasBeenSet(false)
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
    m_detailsHasBeenSet(false),
    m_autoScalingGroupStateHasBeenSet(false),
    m_autoScalingGroupARNHasBeenSet(false)
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
      m_activityId = Aws::Utils::Xml::DecodeEscapedXmlText(activityIdNode.GetText());
      m_activityIdHasBeenSet = true;
    }
    XmlNode autoScalingGroupNameNode = resultNode.FirstChild("AutoScalingGroupName");
    if(!autoScalingGroupNameNode.IsNull())
    {
      m_autoScalingGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(autoScalingGroupNameNode.GetText());
      m_autoScalingGroupNameHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode causeNode = resultNode.FirstChild("Cause");
    if(!causeNode.IsNull())
    {
      m_cause = Aws::Utils::Xml::DecodeEscapedXmlText(causeNode.GetText());
      m_causeHasBeenSet = true;
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
    XmlNode statusCodeNode = resultNode.FirstChild("StatusCode");
    if(!statusCodeNode.IsNull())
    {
      m_statusCode = ScalingActivityStatusCodeMapper::GetScalingActivityStatusCodeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusCodeNode.GetText()).c_str()).c_str());
      m_statusCodeHasBeenSet = true;
    }
    XmlNode statusMessageNode = resultNode.FirstChild("StatusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = Aws::Utils::Xml::DecodeEscapedXmlText(statusMessageNode.GetText());
      m_statusMessageHasBeenSet = true;
    }
    XmlNode progressNode = resultNode.FirstChild("Progress");
    if(!progressNode.IsNull())
    {
      m_progress = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(progressNode.GetText()).c_str()).c_str());
      m_progressHasBeenSet = true;
    }
    XmlNode detailsNode = resultNode.FirstChild("Details");
    if(!detailsNode.IsNull())
    {
      m_details = Aws::Utils::Xml::DecodeEscapedXmlText(detailsNode.GetText());
      m_detailsHasBeenSet = true;
    }
    XmlNode autoScalingGroupStateNode = resultNode.FirstChild("AutoScalingGroupState");
    if(!autoScalingGroupStateNode.IsNull())
    {
      m_autoScalingGroupState = Aws::Utils::Xml::DecodeEscapedXmlText(autoScalingGroupStateNode.GetText());
      m_autoScalingGroupStateHasBeenSet = true;
    }
    XmlNode autoScalingGroupARNNode = resultNode.FirstChild("AutoScalingGroupARN");
    if(!autoScalingGroupARNNode.IsNull())
    {
      m_autoScalingGroupARN = Aws::Utils::Xml::DecodeEscapedXmlText(autoScalingGroupARNNode.GetText());
      m_autoScalingGroupARNHasBeenSet = true;
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
      oStream << location << index << locationValue << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
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

  if(m_autoScalingGroupStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoScalingGroupState=" << StringUtils::URLEncode(m_autoScalingGroupState.c_str()) << "&";
  }

  if(m_autoScalingGroupARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoScalingGroupARN=" << StringUtils::URLEncode(m_autoScalingGroupARN.c_str()) << "&";
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
      oStream << location << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_endTimeHasBeenSet)
  {
      oStream << location << ".EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
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
  if(m_autoScalingGroupStateHasBeenSet)
  {
      oStream << location << ".AutoScalingGroupState=" << StringUtils::URLEncode(m_autoScalingGroupState.c_str()) << "&";
  }
  if(m_autoScalingGroupARNHasBeenSet)
  {
      oStream << location << ".AutoScalingGroupARN=" << StringUtils::URLEncode(m_autoScalingGroupARN.c_str()) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
