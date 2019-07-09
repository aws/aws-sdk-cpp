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

#include <aws/ec2/model/ReservedInstancesListing.h>
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

ReservedInstancesListing::ReservedInstancesListing() : 
    m_clientTokenHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_instanceCountsHasBeenSet(false),
    m_priceSchedulesHasBeenSet(false),
    m_reservedInstancesIdHasBeenSet(false),
    m_reservedInstancesListingIdHasBeenSet(false),
    m_status(ListingStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_updateDateHasBeenSet(false)
{
}

ReservedInstancesListing::ReservedInstancesListing(const XmlNode& xmlNode) : 
    m_clientTokenHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_instanceCountsHasBeenSet(false),
    m_priceSchedulesHasBeenSet(false),
    m_reservedInstancesIdHasBeenSet(false),
    m_reservedInstancesListingIdHasBeenSet(false),
    m_status(ListingStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_updateDateHasBeenSet(false)
{
  *this = xmlNode;
}

ReservedInstancesListing& ReservedInstancesListing::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode clientTokenNode = resultNode.FirstChild("clientToken");
    if(!clientTokenNode.IsNull())
    {
      m_clientToken = clientTokenNode.GetText();
      m_clientTokenHasBeenSet = true;
    }
    XmlNode createDateNode = resultNode.FirstChild("createDate");
    if(!createDateNode.IsNull())
    {
      m_createDate = DateTime(StringUtils::Trim(createDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_createDateHasBeenSet = true;
    }
    XmlNode instanceCountsNode = resultNode.FirstChild("instanceCounts");
    if(!instanceCountsNode.IsNull())
    {
      XmlNode instanceCountsMember = instanceCountsNode.FirstChild("item");
      while(!instanceCountsMember.IsNull())
      {
        m_instanceCounts.push_back(instanceCountsMember);
        instanceCountsMember = instanceCountsMember.NextNode("item");
      }

      m_instanceCountsHasBeenSet = true;
    }
    XmlNode priceSchedulesNode = resultNode.FirstChild("priceSchedules");
    if(!priceSchedulesNode.IsNull())
    {
      XmlNode priceSchedulesMember = priceSchedulesNode.FirstChild("item");
      while(!priceSchedulesMember.IsNull())
      {
        m_priceSchedules.push_back(priceSchedulesMember);
        priceSchedulesMember = priceSchedulesMember.NextNode("item");
      }

      m_priceSchedulesHasBeenSet = true;
    }
    XmlNode reservedInstancesIdNode = resultNode.FirstChild("reservedInstancesId");
    if(!reservedInstancesIdNode.IsNull())
    {
      m_reservedInstancesId = reservedInstancesIdNode.GetText();
      m_reservedInstancesIdHasBeenSet = true;
    }
    XmlNode reservedInstancesListingIdNode = resultNode.FirstChild("reservedInstancesListingId");
    if(!reservedInstancesListingIdNode.IsNull())
    {
      m_reservedInstancesListingId = reservedInstancesListingIdNode.GetText();
      m_reservedInstancesListingIdHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = ListingStatusMapper::GetListingStatusForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode statusMessageNode = resultNode.FirstChild("statusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = statusMessageNode.GetText();
      m_statusMessageHasBeenSet = true;
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
    XmlNode updateDateNode = resultNode.FirstChild("updateDate");
    if(!updateDateNode.IsNull())
    {
      m_updateDate = DateTime(StringUtils::Trim(updateDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_updateDateHasBeenSet = true;
    }
  }

  return *this;
}

void ReservedInstancesListing::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_clientTokenHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_createDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateDate=" << StringUtils::URLEncode(m_createDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_instanceCountsHasBeenSet)
  {
      unsigned instanceCountsIdx = 1;
      for(auto& item : m_instanceCounts)
      {
        Aws::StringStream instanceCountsSs;
        instanceCountsSs << location << index << locationValue << ".InstanceCounts." << instanceCountsIdx++;
        item.OutputToStream(oStream, instanceCountsSs.str().c_str());
      }
  }

  if(m_priceSchedulesHasBeenSet)
  {
      unsigned priceSchedulesIdx = 1;
      for(auto& item : m_priceSchedules)
      {
        Aws::StringStream priceSchedulesSs;
        priceSchedulesSs << location << index << locationValue << ".PriceSchedules." << priceSchedulesIdx++;
        item.OutputToStream(oStream, priceSchedulesSs.str().c_str());
      }
  }

  if(m_reservedInstancesIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReservedInstancesId=" << StringUtils::URLEncode(m_reservedInstancesId.c_str()) << "&";
  }

  if(m_reservedInstancesListingIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReservedInstancesListingId=" << StringUtils::URLEncode(m_reservedInstancesListingId.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << ListingStatusMapper::GetNameForListingStatus(m_status) << "&";
  }

  if(m_statusMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
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

  if(m_updateDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpdateDate=" << StringUtils::URLEncode(m_updateDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

}

void ReservedInstancesListing::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_clientTokenHasBeenSet)
  {
      oStream << location << ".ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }
  if(m_createDateHasBeenSet)
  {
      oStream << location << ".CreateDate=" << StringUtils::URLEncode(m_createDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_instanceCountsHasBeenSet)
  {
      unsigned instanceCountsIdx = 1;
      for(auto& item : m_instanceCounts)
      {
        Aws::StringStream instanceCountsSs;
        instanceCountsSs << location <<  ".InstanceCounts." << instanceCountsIdx++;
        item.OutputToStream(oStream, instanceCountsSs.str().c_str());
      }
  }
  if(m_priceSchedulesHasBeenSet)
  {
      unsigned priceSchedulesIdx = 1;
      for(auto& item : m_priceSchedules)
      {
        Aws::StringStream priceSchedulesSs;
        priceSchedulesSs << location <<  ".PriceSchedules." << priceSchedulesIdx++;
        item.OutputToStream(oStream, priceSchedulesSs.str().c_str());
      }
  }
  if(m_reservedInstancesIdHasBeenSet)
  {
      oStream << location << ".ReservedInstancesId=" << StringUtils::URLEncode(m_reservedInstancesId.c_str()) << "&";
  }
  if(m_reservedInstancesListingIdHasBeenSet)
  {
      oStream << location << ".ReservedInstancesListingId=" << StringUtils::URLEncode(m_reservedInstancesListingId.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << ListingStatusMapper::GetNameForListingStatus(m_status) << "&";
  }
  if(m_statusMessageHasBeenSet)
  {
      oStream << location << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
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
  if(m_updateDateHasBeenSet)
  {
      oStream << location << ".UpdateDate=" << StringUtils::URLEncode(m_updateDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
