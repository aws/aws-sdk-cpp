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

#include <aws/ec2/model/ReservedInstancesModification.h>
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

ReservedInstancesModification::ReservedInstancesModification() : 
    m_clientTokenHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_effectiveDateHasBeenSet(false),
    m_modificationResultsHasBeenSet(false),
    m_reservedInstancesIdsHasBeenSet(false),
    m_reservedInstancesModificationIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_updateDateHasBeenSet(false)
{
}

ReservedInstancesModification::ReservedInstancesModification(const XmlNode& xmlNode) : 
    m_clientTokenHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_effectiveDateHasBeenSet(false),
    m_modificationResultsHasBeenSet(false),
    m_reservedInstancesIdsHasBeenSet(false),
    m_reservedInstancesModificationIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_updateDateHasBeenSet(false)
{
  *this = xmlNode;
}

ReservedInstancesModification& ReservedInstancesModification::operator =(const XmlNode& xmlNode)
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
    XmlNode effectiveDateNode = resultNode.FirstChild("effectiveDate");
    if(!effectiveDateNode.IsNull())
    {
      m_effectiveDate = DateTime(StringUtils::Trim(effectiveDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_effectiveDateHasBeenSet = true;
    }
    XmlNode modificationResultsNode = resultNode.FirstChild("modificationResultSet");
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
    XmlNode reservedInstancesIdsNode = resultNode.FirstChild("reservedInstancesSet");
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
    XmlNode reservedInstancesModificationIdNode = resultNode.FirstChild("reservedInstancesModificationId");
    if(!reservedInstancesModificationIdNode.IsNull())
    {
      m_reservedInstancesModificationId = reservedInstancesModificationIdNode.GetText();
      m_reservedInstancesModificationIdHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode.GetText();
      m_statusHasBeenSet = true;
    }
    XmlNode statusMessageNode = resultNode.FirstChild("statusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = statusMessageNode.GetText();
      m_statusMessageHasBeenSet = true;
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

void ReservedInstancesModification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_clientTokenHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_createDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateDate=" << StringUtils::URLEncode(m_createDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_effectiveDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".EffectiveDate=" << StringUtils::URLEncode(m_effectiveDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_modificationResultsHasBeenSet)
  {
      unsigned modificationResultsIdx = 1;
      for(auto& item : m_modificationResults)
      {
        Aws::StringStream modificationResultsSs;
        modificationResultsSs << location << index << locationValue << ".ModificationResultSet." << modificationResultsIdx++;
        item.OutputToStream(oStream, modificationResultsSs.str().c_str());
      }
  }

  if(m_reservedInstancesIdsHasBeenSet)
  {
      unsigned reservedInstancesIdsIdx = 1;
      for(auto& item : m_reservedInstancesIds)
      {
        Aws::StringStream reservedInstancesIdsSs;
        reservedInstancesIdsSs << location << index << locationValue << ".ReservedInstancesSet." << reservedInstancesIdsIdx++;
        item.OutputToStream(oStream, reservedInstancesIdsSs.str().c_str());
      }
  }

  if(m_reservedInstancesModificationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReservedInstancesModificationId=" << StringUtils::URLEncode(m_reservedInstancesModificationId.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_statusMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }

  if(m_updateDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpdateDate=" << StringUtils::URLEncode(m_updateDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

}

void ReservedInstancesModification::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_clientTokenHasBeenSet)
  {
      oStream << location << ".ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }
  if(m_createDateHasBeenSet)
  {
      oStream << location << ".CreateDate=" << StringUtils::URLEncode(m_createDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_effectiveDateHasBeenSet)
  {
      oStream << location << ".EffectiveDate=" << StringUtils::URLEncode(m_effectiveDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_modificationResultsHasBeenSet)
  {
      unsigned modificationResultsIdx = 1;
      for(auto& item : m_modificationResults)
      {
        Aws::StringStream modificationResultsSs;
        modificationResultsSs << location <<  ".ModificationResultSet." << modificationResultsIdx++;
        item.OutputToStream(oStream, modificationResultsSs.str().c_str());
      }
  }
  if(m_reservedInstancesIdsHasBeenSet)
  {
      unsigned reservedInstancesIdsIdx = 1;
      for(auto& item : m_reservedInstancesIds)
      {
        Aws::StringStream reservedInstancesIdsSs;
        reservedInstancesIdsSs << location <<  ".ReservedInstancesSet." << reservedInstancesIdsIdx++;
        item.OutputToStream(oStream, reservedInstancesIdsSs.str().c_str());
      }
  }
  if(m_reservedInstancesModificationIdHasBeenSet)
  {
      oStream << location << ".ReservedInstancesModificationId=" << StringUtils::URLEncode(m_reservedInstancesModificationId.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_statusMessageHasBeenSet)
  {
      oStream << location << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }
  if(m_updateDateHasBeenSet)
  {
      oStream << location << ".UpdateDate=" << StringUtils::URLEncode(m_updateDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
