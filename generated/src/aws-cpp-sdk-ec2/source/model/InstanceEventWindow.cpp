/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceEventWindow.h>
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

InstanceEventWindow::InstanceEventWindow() : 
    m_instanceEventWindowIdHasBeenSet(false),
    m_timeRangesHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_cronExpressionHasBeenSet(false),
    m_associationTargetHasBeenSet(false),
    m_state(InstanceEventWindowState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

InstanceEventWindow::InstanceEventWindow(const XmlNode& xmlNode) : 
    m_instanceEventWindowIdHasBeenSet(false),
    m_timeRangesHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_cronExpressionHasBeenSet(false),
    m_associationTargetHasBeenSet(false),
    m_state(InstanceEventWindowState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceEventWindow& InstanceEventWindow::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceEventWindowIdNode = resultNode.FirstChild("instanceEventWindowId");
    if(!instanceEventWindowIdNode.IsNull())
    {
      m_instanceEventWindowId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceEventWindowIdNode.GetText());
      m_instanceEventWindowIdHasBeenSet = true;
    }
    XmlNode timeRangesNode = resultNode.FirstChild("timeRangeSet");
    if(!timeRangesNode.IsNull())
    {
      XmlNode timeRangesMember = timeRangesNode.FirstChild("item");
      while(!timeRangesMember.IsNull())
      {
        m_timeRanges.push_back(timeRangesMember);
        timeRangesMember = timeRangesMember.NextNode("item");
      }

      m_timeRangesHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode cronExpressionNode = resultNode.FirstChild("cronExpression");
    if(!cronExpressionNode.IsNull())
    {
      m_cronExpression = Aws::Utils::Xml::DecodeEscapedXmlText(cronExpressionNode.GetText());
      m_cronExpressionHasBeenSet = true;
    }
    XmlNode associationTargetNode = resultNode.FirstChild("associationTarget");
    if(!associationTargetNode.IsNull())
    {
      m_associationTarget = associationTargetNode;
      m_associationTargetHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = InstanceEventWindowStateMapper::GetInstanceEventWindowStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceEventWindow::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceEventWindowIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceEventWindowId=" << StringUtils::URLEncode(m_instanceEventWindowId.c_str()) << "&";
  }

  if(m_timeRangesHasBeenSet)
  {
      unsigned timeRangesIdx = 1;
      for(auto& item : m_timeRanges)
      {
        Aws::StringStream timeRangesSs;
        timeRangesSs << location << index << locationValue << ".TimeRangeSet." << timeRangesIdx++;
        item.OutputToStream(oStream, timeRangesSs.str().c_str());
      }
  }

  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_cronExpressionHasBeenSet)
  {
      oStream << location << index << locationValue << ".CronExpression=" << StringUtils::URLEncode(m_cronExpression.c_str()) << "&";
  }

  if(m_associationTargetHasBeenSet)
  {
      Aws::StringStream associationTargetLocationAndMemberSs;
      associationTargetLocationAndMemberSs << location << index << locationValue << ".AssociationTarget";
      m_associationTarget.OutputToStream(oStream, associationTargetLocationAndMemberSs.str().c_str());
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << InstanceEventWindowStateMapper::GetNameForInstanceEventWindowState(m_state) << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

}

void InstanceEventWindow::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceEventWindowIdHasBeenSet)
  {
      oStream << location << ".InstanceEventWindowId=" << StringUtils::URLEncode(m_instanceEventWindowId.c_str()) << "&";
  }
  if(m_timeRangesHasBeenSet)
  {
      unsigned timeRangesIdx = 1;
      for(auto& item : m_timeRanges)
      {
        Aws::StringStream timeRangesSs;
        timeRangesSs << location <<  ".TimeRangeSet." << timeRangesIdx++;
        item.OutputToStream(oStream, timeRangesSs.str().c_str());
      }
  }
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_cronExpressionHasBeenSet)
  {
      oStream << location << ".CronExpression=" << StringUtils::URLEncode(m_cronExpression.c_str()) << "&";
  }
  if(m_associationTargetHasBeenSet)
  {
      Aws::String associationTargetLocationAndMember(location);
      associationTargetLocationAndMember += ".AssociationTarget";
      m_associationTarget.OutputToStream(oStream, associationTargetLocationAndMember.c_str());
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << InstanceEventWindowStateMapper::GetNameForInstanceEventWindowState(m_state) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
