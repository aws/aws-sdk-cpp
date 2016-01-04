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
#include <aws/ec2/model/ReservedInstancesModification.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

ReservedInstancesModification::ReservedInstancesModification() : 
    m_reservedInstancesModificationIdHasBeenSet(false),
    m_reservedInstancesIdsHasBeenSet(false),
    m_modificationResultsHasBeenSet(false),
    m_createDate(0.0),
    m_createDateHasBeenSet(false),
    m_updateDate(0.0),
    m_updateDateHasBeenSet(false),
    m_effectiveDate(0.0),
    m_effectiveDateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

ReservedInstancesModification::ReservedInstancesModification(const XmlNode& xmlNode) : 
    m_reservedInstancesModificationIdHasBeenSet(false),
    m_reservedInstancesIdsHasBeenSet(false),
    m_modificationResultsHasBeenSet(false),
    m_createDate(0.0),
    m_createDateHasBeenSet(false),
    m_updateDate(0.0),
    m_updateDateHasBeenSet(false),
    m_effectiveDate(0.0),
    m_effectiveDateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
  *this = xmlNode;
}

ReservedInstancesModification& ReservedInstancesModification::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode reservedInstancesModificationIdNode = resultNode.FirstChild("reservedInstancesModificationId");
    if(!reservedInstancesModificationIdNode.IsNull())
    {
      m_reservedInstancesModificationId = StringUtils::Trim(reservedInstancesModificationIdNode.GetText().c_str());
      m_reservedInstancesModificationIdHasBeenSet = true;
    }
    XmlNode reservedInstancesIdsNode = resultNode.FirstChild("ReservedInstancesIds");
    if(!reservedInstancesIdsNode.IsNull())
    {
      XmlNode reservedInstancesIdsMember = reservedInstancesIdsNode.FirstChild("item");
      while(!reservedInstancesIdsMember.IsNull())
      {
        m_reservedInstancesIds.push_back(reservedInstancesIdsMember);
        reservedInstancesIdsMember = reservedInstancesIdsMember.NextNode("item");
      }

      m_reservedInstancesIdsHasBeenSet = true;
    }
    XmlNode modificationResultsNode = resultNode.FirstChild("ModificationResults");
    if(!modificationResultsNode.IsNull())
    {
      XmlNode modificationResultsMember = modificationResultsNode.FirstChild("item");
      while(!modificationResultsMember.IsNull())
      {
        m_modificationResults.push_back(modificationResultsMember);
        modificationResultsMember = modificationResultsMember.NextNode("item");
      }

      m_modificationResultsHasBeenSet = true;
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
    XmlNode effectiveDateNode = resultNode.FirstChild("effectiveDate");
    if(!effectiveDateNode.IsNull())
    {
      m_effectiveDate = StringUtils::ConvertToDouble(StringUtils::Trim(effectiveDateNode.GetText().c_str()).c_str());
      m_effectiveDateHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = StringUtils::Trim(statusNode.GetText().c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode statusMessageNode = resultNode.FirstChild("statusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = StringUtils::Trim(statusMessageNode.GetText().c_str());
      m_statusMessageHasBeenSet = true;
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

void ReservedInstancesModification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_reservedInstancesModificationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReservedInstancesModificationId=" << StringUtils::URLEncode(m_reservedInstancesModificationId.c_str()) << "&";
  }
  if(m_reservedInstancesIdsHasBeenSet)
  {
      for(auto& item : m_reservedInstancesIds)
      {
        Aws::StringStream reservedInstancesIdsSs;
        reservedInstancesIdsSs << location << index << locationValue << ".item";
        item.OutputToStream(oStream, reservedInstancesIdsSs.str().c_str());
      }
  }
  if(m_modificationResultsHasBeenSet)
  {
      for(auto& item : m_modificationResults)
      {
        Aws::StringStream modificationResultsSs;
        modificationResultsSs << location << index << locationValue << ".item";
        item.OutputToStream(oStream, modificationResultsSs.str().c_str());
      }
  }
  if(m_createDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateDate=" << m_createDate << "&";
  }
  if(m_updateDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpdateDate=" << m_updateDate << "&";
  }
  if(m_effectiveDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".EffectiveDate=" << m_effectiveDate << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_statusMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }
  if(m_clientTokenHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }
}

void ReservedInstancesModification::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_reservedInstancesModificationIdHasBeenSet)
  {
      oStream << location << ".ReservedInstancesModificationId=" << StringUtils::URLEncode(m_reservedInstancesModificationId.c_str()) << "&";
  }
  if(m_reservedInstancesIdsHasBeenSet)
  {
      for(auto& item : m_reservedInstancesIds)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".item";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_modificationResultsHasBeenSet)
  {
      for(auto& item : m_modificationResults)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".item";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_createDateHasBeenSet)
  {
      oStream << location << ".CreateDate=" << m_createDate << "&";
  }
  if(m_updateDateHasBeenSet)
  {
      oStream << location << ".UpdateDate=" << m_updateDate << "&";
  }
  if(m_effectiveDateHasBeenSet)
  {
      oStream << location << ".EffectiveDate=" << m_effectiveDate << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_statusMessageHasBeenSet)
  {
      oStream << location << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }
  if(m_clientTokenHasBeenSet)
  {
      oStream << location << ".ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }
}
