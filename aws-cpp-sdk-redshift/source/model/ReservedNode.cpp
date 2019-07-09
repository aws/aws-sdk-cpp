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

#include <aws/redshift/model/ReservedNode.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

ReservedNode::ReservedNode() : 
    m_reservedNodeIdHasBeenSet(false),
    m_reservedNodeOfferingIdHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_fixedPrice(0.0),
    m_fixedPriceHasBeenSet(false),
    m_usagePrice(0.0),
    m_usagePriceHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_nodeCount(0),
    m_nodeCountHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_offeringTypeHasBeenSet(false),
    m_recurringChargesHasBeenSet(false),
    m_reservedNodeOfferingType(ReservedNodeOfferingType::NOT_SET),
    m_reservedNodeOfferingTypeHasBeenSet(false)
{
}

ReservedNode::ReservedNode(const XmlNode& xmlNode) : 
    m_reservedNodeIdHasBeenSet(false),
    m_reservedNodeOfferingIdHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_fixedPrice(0.0),
    m_fixedPriceHasBeenSet(false),
    m_usagePrice(0.0),
    m_usagePriceHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_nodeCount(0),
    m_nodeCountHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_offeringTypeHasBeenSet(false),
    m_recurringChargesHasBeenSet(false),
    m_reservedNodeOfferingType(ReservedNodeOfferingType::NOT_SET),
    m_reservedNodeOfferingTypeHasBeenSet(false)
{
  *this = xmlNode;
}

ReservedNode& ReservedNode::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode reservedNodeIdNode = resultNode.FirstChild("ReservedNodeId");
    if(!reservedNodeIdNode.IsNull())
    {
      m_reservedNodeId = reservedNodeIdNode.GetText();
      m_reservedNodeIdHasBeenSet = true;
    }
    XmlNode reservedNodeOfferingIdNode = resultNode.FirstChild("ReservedNodeOfferingId");
    if(!reservedNodeOfferingIdNode.IsNull())
    {
      m_reservedNodeOfferingId = reservedNodeOfferingIdNode.GetText();
      m_reservedNodeOfferingIdHasBeenSet = true;
    }
    XmlNode nodeTypeNode = resultNode.FirstChild("NodeType");
    if(!nodeTypeNode.IsNull())
    {
      m_nodeType = nodeTypeNode.GetText();
      m_nodeTypeHasBeenSet = true;
    }
    XmlNode startTimeNode = resultNode.FirstChild("StartTime");
    if(!startTimeNode.IsNull())
    {
      m_startTime = DateTime(StringUtils::Trim(startTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_startTimeHasBeenSet = true;
    }
    XmlNode durationNode = resultNode.FirstChild("Duration");
    if(!durationNode.IsNull())
    {
      m_duration = StringUtils::ConvertToInt32(StringUtils::Trim(durationNode.GetText().c_str()).c_str());
      m_durationHasBeenSet = true;
    }
    XmlNode fixedPriceNode = resultNode.FirstChild("FixedPrice");
    if(!fixedPriceNode.IsNull())
    {
      m_fixedPrice = StringUtils::ConvertToDouble(StringUtils::Trim(fixedPriceNode.GetText().c_str()).c_str());
      m_fixedPriceHasBeenSet = true;
    }
    XmlNode usagePriceNode = resultNode.FirstChild("UsagePrice");
    if(!usagePriceNode.IsNull())
    {
      m_usagePrice = StringUtils::ConvertToDouble(StringUtils::Trim(usagePriceNode.GetText().c_str()).c_str());
      m_usagePriceHasBeenSet = true;
    }
    XmlNode currencyCodeNode = resultNode.FirstChild("CurrencyCode");
    if(!currencyCodeNode.IsNull())
    {
      m_currencyCode = currencyCodeNode.GetText();
      m_currencyCodeHasBeenSet = true;
    }
    XmlNode nodeCountNode = resultNode.FirstChild("NodeCount");
    if(!nodeCountNode.IsNull())
    {
      m_nodeCount = StringUtils::ConvertToInt32(StringUtils::Trim(nodeCountNode.GetText().c_str()).c_str());
      m_nodeCountHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("State");
    if(!stateNode.IsNull())
    {
      m_state = stateNode.GetText();
      m_stateHasBeenSet = true;
    }
    XmlNode offeringTypeNode = resultNode.FirstChild("OfferingType");
    if(!offeringTypeNode.IsNull())
    {
      m_offeringType = offeringTypeNode.GetText();
      m_offeringTypeHasBeenSet = true;
    }
    XmlNode recurringChargesNode = resultNode.FirstChild("RecurringCharges");
    if(!recurringChargesNode.IsNull())
    {
      XmlNode recurringChargesMember = recurringChargesNode.FirstChild("RecurringCharge");
      while(!recurringChargesMember.IsNull())
      {
        m_recurringCharges.push_back(recurringChargesMember);
        recurringChargesMember = recurringChargesMember.NextNode("RecurringCharge");
      }

      m_recurringChargesHasBeenSet = true;
    }
    XmlNode reservedNodeOfferingTypeNode = resultNode.FirstChild("ReservedNodeOfferingType");
    if(!reservedNodeOfferingTypeNode.IsNull())
    {
      m_reservedNodeOfferingType = ReservedNodeOfferingTypeMapper::GetReservedNodeOfferingTypeForName(StringUtils::Trim(reservedNodeOfferingTypeNode.GetText().c_str()).c_str());
      m_reservedNodeOfferingTypeHasBeenSet = true;
    }
  }

  return *this;
}

void ReservedNode::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_reservedNodeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReservedNodeId=" << StringUtils::URLEncode(m_reservedNodeId.c_str()) << "&";
  }

  if(m_reservedNodeOfferingIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReservedNodeOfferingId=" << StringUtils::URLEncode(m_reservedNodeOfferingId.c_str()) << "&";
  }

  if(m_nodeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeType=" << StringUtils::URLEncode(m_nodeType.c_str()) << "&";
  }

  if(m_startTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_durationHasBeenSet)
  {
      oStream << location << index << locationValue << ".Duration=" << m_duration << "&";
  }

  if(m_fixedPriceHasBeenSet)
  {
        oStream << location << index << locationValue << ".FixedPrice=" << StringUtils::URLEncode(m_fixedPrice) << "&";
  }

  if(m_usagePriceHasBeenSet)
  {
        oStream << location << index << locationValue << ".UsagePrice=" << StringUtils::URLEncode(m_usagePrice) << "&";
  }

  if(m_currencyCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CurrencyCode=" << StringUtils::URLEncode(m_currencyCode.c_str()) << "&";
  }

  if(m_nodeCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeCount=" << m_nodeCount << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }

  if(m_offeringTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".OfferingType=" << StringUtils::URLEncode(m_offeringType.c_str()) << "&";
  }

  if(m_recurringChargesHasBeenSet)
  {
      unsigned recurringChargesIdx = 1;
      for(auto& item : m_recurringCharges)
      {
        Aws::StringStream recurringChargesSs;
        recurringChargesSs << location << index << locationValue << ".RecurringCharge." << recurringChargesIdx++;
        item.OutputToStream(oStream, recurringChargesSs.str().c_str());
      }
  }

  if(m_reservedNodeOfferingTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReservedNodeOfferingType=" << ReservedNodeOfferingTypeMapper::GetNameForReservedNodeOfferingType(m_reservedNodeOfferingType) << "&";
  }

}

void ReservedNode::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_reservedNodeIdHasBeenSet)
  {
      oStream << location << ".ReservedNodeId=" << StringUtils::URLEncode(m_reservedNodeId.c_str()) << "&";
  }
  if(m_reservedNodeOfferingIdHasBeenSet)
  {
      oStream << location << ".ReservedNodeOfferingId=" << StringUtils::URLEncode(m_reservedNodeOfferingId.c_str()) << "&";
  }
  if(m_nodeTypeHasBeenSet)
  {
      oStream << location << ".NodeType=" << StringUtils::URLEncode(m_nodeType.c_str()) << "&";
  }
  if(m_startTimeHasBeenSet)
  {
      oStream << location << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_durationHasBeenSet)
  {
      oStream << location << ".Duration=" << m_duration << "&";
  }
  if(m_fixedPriceHasBeenSet)
  {
        oStream << location << ".FixedPrice=" << StringUtils::URLEncode(m_fixedPrice) << "&";
  }
  if(m_usagePriceHasBeenSet)
  {
        oStream << location << ".UsagePrice=" << StringUtils::URLEncode(m_usagePrice) << "&";
  }
  if(m_currencyCodeHasBeenSet)
  {
      oStream << location << ".CurrencyCode=" << StringUtils::URLEncode(m_currencyCode.c_str()) << "&";
  }
  if(m_nodeCountHasBeenSet)
  {
      oStream << location << ".NodeCount=" << m_nodeCount << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }
  if(m_offeringTypeHasBeenSet)
  {
      oStream << location << ".OfferingType=" << StringUtils::URLEncode(m_offeringType.c_str()) << "&";
  }
  if(m_recurringChargesHasBeenSet)
  {
      unsigned recurringChargesIdx = 1;
      for(auto& item : m_recurringCharges)
      {
        Aws::StringStream recurringChargesSs;
        recurringChargesSs << location <<  ".RecurringCharge." << recurringChargesIdx++;
        item.OutputToStream(oStream, recurringChargesSs.str().c_str());
      }
  }
  if(m_reservedNodeOfferingTypeHasBeenSet)
  {
      oStream << location << ".ReservedNodeOfferingType=" << ReservedNodeOfferingTypeMapper::GetNameForReservedNodeOfferingType(m_reservedNodeOfferingType) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
