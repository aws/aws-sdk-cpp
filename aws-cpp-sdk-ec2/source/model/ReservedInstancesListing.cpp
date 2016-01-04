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
#include <aws/ec2/model/ReservedInstancesListing.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

ReservedInstancesListing::ReservedInstancesListing() : 
    m_reservedInstancesListingIdHasBeenSet(false),
    m_reservedInstancesIdHasBeenSet(false),
    m_createDate(0.0),
    m_createDateHasBeenSet(false),
    m_updateDate(0.0),
    m_updateDateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_instanceCountsHasBeenSet(false),
    m_priceSchedulesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

ReservedInstancesListing::ReservedInstancesListing(const XmlNode& xmlNode) : 
    m_reservedInstancesListingIdHasBeenSet(false),
    m_reservedInstancesIdHasBeenSet(false),
    m_createDate(0.0),
    m_createDateHasBeenSet(false),
    m_updateDate(0.0),
    m_updateDateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_instanceCountsHasBeenSet(false),
    m_priceSchedulesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
  *this = xmlNode;
}

ReservedInstancesListing& ReservedInstancesListing::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode reservedInstancesListingIdNode = resultNode.FirstChild("reservedInstancesListingId");
    if(!reservedInstancesListingIdNode.IsNull())
    {
      m_reservedInstancesListingId = StringUtils::Trim(reservedInstancesListingIdNode.GetText().c_str());
      m_reservedInstancesListingIdHasBeenSet = true;
    }
    XmlNode reservedInstancesIdNode = resultNode.FirstChild("reservedInstancesId");
    if(!reservedInstancesIdNode.IsNull())
    {
      m_reservedInstancesId = StringUtils::Trim(reservedInstancesIdNode.GetText().c_str());
      m_reservedInstancesIdHasBeenSet = true;
    }
    XmlNode createDateNode = resultNode.FirstChild("createDate");
    if(!createDateNode.IsNull())
    {
      m_createDate = StringUtils::ConvertToDouble(StringUtils::Trim(createDateNode.GetText().c_str()).c_str());
      m_createDateHasBeenSet = true;
    }
    XmlNode updateDateNode = resultNode.FirstChild("updateDate");
    if(!updateDateNode.IsNull())
    {
      m_updateDate = StringUtils::ConvertToDouble(StringUtils::Trim(updateDateNode.GetText().c_str()).c_str());
      m_updateDateHasBeenSet = true;
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
      m_statusMessage = StringUtils::Trim(statusMessageNode.GetText().c_str());
      m_statusMessageHasBeenSet = true;
    }
    XmlNode instanceCountsNode = resultNode.FirstChild("InstanceCounts");
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
    XmlNode priceSchedulesNode = resultNode.FirstChild("PriceSchedules");
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
    XmlNode tagsNode = resultNode.FirstChild("Tags");
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
    XmlNode clientTokenNode = resultNode.FirstChild("clientToken");
    if(!clientTokenNode.IsNull())
    {
      m_clientToken = StringUtils::Trim(clientTokenNode.GetText().c_str());
      m_clientTokenHasBeenSet = true;
    }
  }

  return *this;
}

void ReservedInstancesListing::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_reservedInstancesListingIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReservedInstancesListingId=" << StringUtils::URLEncode(m_reservedInstancesListingId.c_str()) << "&";
  }
  if(m_reservedInstancesIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReservedInstancesId=" << StringUtils::URLEncode(m_reservedInstancesId.c_str()) << "&";
  }
  if(m_createDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateDate=" << m_createDate << "&";
  }
  if(m_updateDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpdateDate=" << m_updateDate << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << ListingStatusMapper::GetNameForListingStatus(m_status) << "&";
  }
  if(m_statusMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }
  if(m_instanceCountsHasBeenSet)
  {
      for(auto& item : m_instanceCounts)
      {
        Aws::StringStream instanceCountsSs;
        instanceCountsSs << location << index << locationValue << ".item";
        item.OutputToStream(oStream, instanceCountsSs.str().c_str());
      }
  }
  if(m_priceSchedulesHasBeenSet)
  {
      for(auto& item : m_priceSchedules)
      {
        Aws::StringStream priceSchedulesSs;
        priceSchedulesSs << location << index << locationValue << ".item";
        item.OutputToStream(oStream, priceSchedulesSs.str().c_str());
      }
  }
  if(m_tagsHasBeenSet)
  {
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".item";
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_clientTokenHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }
}

void ReservedInstancesListing::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_reservedInstancesListingIdHasBeenSet)
  {
      oStream << location << ".ReservedInstancesListingId=" << StringUtils::URLEncode(m_reservedInstancesListingId.c_str()) << "&";
  }
  if(m_reservedInstancesIdHasBeenSet)
  {
      oStream << location << ".ReservedInstancesId=" << StringUtils::URLEncode(m_reservedInstancesId.c_str()) << "&";
  }
  if(m_createDateHasBeenSet)
  {
      oStream << location << ".CreateDate=" << m_createDate << "&";
  }
  if(m_updateDateHasBeenSet)
  {
      oStream << location << ".UpdateDate=" << m_updateDate << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << ListingStatusMapper::GetNameForListingStatus(m_status) << "&";
  }
  if(m_statusMessageHasBeenSet)
  {
      oStream << location << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }
  if(m_instanceCountsHasBeenSet)
  {
      for(auto& item : m_instanceCounts)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".item";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_priceSchedulesHasBeenSet)
  {
      for(auto& item : m_priceSchedules)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".item";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_tagsHasBeenSet)
  {
      for(auto& item : m_tags)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".item";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_clientTokenHasBeenSet)
  {
      oStream << location << ".ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }
}
