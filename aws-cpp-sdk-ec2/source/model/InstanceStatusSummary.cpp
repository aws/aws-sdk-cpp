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
#include <aws/ec2/model/InstanceStatusSummary.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

InstanceStatusSummary::InstanceStatusSummary() : 
    m_statusHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

InstanceStatusSummary::InstanceStatusSummary(const XmlNode& xmlNode) : 
    m_statusHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceStatusSummary& InstanceStatusSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = SummaryStatusMapper::GetSummaryStatusForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode detailsNode = resultNode.FirstChild("Details");
    if(!detailsNode.IsNull())
    {
      XmlNode detailsMember = detailsNode.FirstChild("item");
      while(!detailsMember.IsNull())
      {
        m_details.push_back(detailsMember);
        detailsMember = detailsMember.NextNode("item");
      }

      m_detailsHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceStatusSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << SummaryStatusMapper::GetNameForSummaryStatus(m_status) << "&";
  }
  if(m_detailsHasBeenSet)
  {
      for(auto& item : m_details)
      {
        Aws::StringStream detailsSs;
        detailsSs << location << index << locationValue << ".item";
        item.OutputToStream(oStream, detailsSs.str().c_str());
      }
  }
}

void InstanceStatusSummary::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << SummaryStatusMapper::GetNameForSummaryStatus(m_status) << "&";
  }
  if(m_detailsHasBeenSet)
  {
      for(auto& item : m_details)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".item";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
}
