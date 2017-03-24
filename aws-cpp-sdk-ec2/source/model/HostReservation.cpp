/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/HostReservation.h>
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

HostReservation::HostReservation() : 
    m_hostReservationIdHasBeenSet(false),
    m_hostIdSetHasBeenSet(false),
    m_offeringIdHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false),
    m_paymentOption(PaymentOption::NOT_SET),
    m_paymentOptionHasBeenSet(false),
    m_hourlyPriceHasBeenSet(false),
    m_upfrontPriceHasBeenSet(false),
    m_currencyCode(CurrencyCodeValues::NOT_SET),
    m_currencyCodeHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_endHasBeenSet(false),
    m_startHasBeenSet(false),
    m_state(ReservationState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

HostReservation::HostReservation(const XmlNode& xmlNode) : 
    m_hostReservationIdHasBeenSet(false),
    m_hostIdSetHasBeenSet(false),
    m_offeringIdHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false),
    m_paymentOption(PaymentOption::NOT_SET),
    m_paymentOptionHasBeenSet(false),
    m_hourlyPriceHasBeenSet(false),
    m_upfrontPriceHasBeenSet(false),
    m_currencyCode(CurrencyCodeValues::NOT_SET),
    m_currencyCodeHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_endHasBeenSet(false),
    m_startHasBeenSet(false),
    m_state(ReservationState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = xmlNode;
}

HostReservation& HostReservation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode hostReservationIdNode = resultNode.FirstChild("hostReservationId");
    if(!hostReservationIdNode.IsNull())
    {
      m_hostReservationId = StringUtils::Trim(hostReservationIdNode.GetText().c_str());
      m_hostReservationIdHasBeenSet = true;
    }
    XmlNode hostIdSetNode = resultNode.FirstChild("hostIdSet");
    if(!hostIdSetNode.IsNull())
    {
      XmlNode hostIdSetMember = hostIdSetNode.FirstChild("item");
      while(!hostIdSetMember.IsNull())
      {
        m_hostIdSet.push_back(StringUtils::Trim(hostIdSetMember.GetText().c_str()));
        hostIdSetMember = hostIdSetMember.NextNode("item");
      }

      m_hostIdSetHasBeenSet = true;
    }
    XmlNode offeringIdNode = resultNode.FirstChild("offeringId");
    if(!offeringIdNode.IsNull())
    {
      m_offeringId = StringUtils::Trim(offeringIdNode.GetText().c_str());
      m_offeringIdHasBeenSet = true;
    }
    XmlNode instanceFamilyNode = resultNode.FirstChild("instanceFamily");
    if(!instanceFamilyNode.IsNull())
    {
      m_instanceFamily = StringUtils::Trim(instanceFamilyNode.GetText().c_str());
      m_instanceFamilyHasBeenSet = true;
    }
    XmlNode paymentOptionNode = resultNode.FirstChild("paymentOption");
    if(!paymentOptionNode.IsNull())
    {
      m_paymentOption = PaymentOptionMapper::GetPaymentOptionForName(StringUtils::Trim(paymentOptionNode.GetText().c_str()).c_str());
      m_paymentOptionHasBeenSet = true;
    }
    XmlNode hourlyPriceNode = resultNode.FirstChild("hourlyPrice");
    if(!hourlyPriceNode.IsNull())
    {
      m_hourlyPrice = StringUtils::Trim(hourlyPriceNode.GetText().c_str());
      m_hourlyPriceHasBeenSet = true;
    }
    XmlNode upfrontPriceNode = resultNode.FirstChild("upfrontPrice");
    if(!upfrontPriceNode.IsNull())
    {
      m_upfrontPrice = StringUtils::Trim(upfrontPriceNode.GetText().c_str());
      m_upfrontPriceHasBeenSet = true;
    }
    XmlNode currencyCodeNode = resultNode.FirstChild("currencyCode");
    if(!currencyCodeNode.IsNull())
    {
      m_currencyCode = CurrencyCodeValuesMapper::GetCurrencyCodeValuesForName(StringUtils::Trim(currencyCodeNode.GetText().c_str()).c_str());
      m_currencyCodeHasBeenSet = true;
    }
    XmlNode countNode = resultNode.FirstChild("count");
    if(!countNode.IsNull())
    {
      m_count = StringUtils::ConvertToInt32(StringUtils::Trim(countNode.GetText().c_str()).c_str());
      m_countHasBeenSet = true;
    }
    XmlNode durationNode = resultNode.FirstChild("duration");
    if(!durationNode.IsNull())
    {
      m_duration = StringUtils::ConvertToInt32(StringUtils::Trim(durationNode.GetText().c_str()).c_str());
      m_durationHasBeenSet = true;
    }
    XmlNode endNode = resultNode.FirstChild("end");
    if(!endNode.IsNull())
    {
      m_end = DateTime(StringUtils::Trim(endNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_endHasBeenSet = true;
    }
    XmlNode startNode = resultNode.FirstChild("start");
    if(!startNode.IsNull())
    {
      m_start = DateTime(StringUtils::Trim(startNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_startHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = ReservationStateMapper::GetReservationStateForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
      m_stateHasBeenSet = true;
    }
  }

  return *this;
}

void HostReservation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_hostReservationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".HostReservationId=" << StringUtils::URLEncode(m_hostReservationId.c_str()) << "&";
  }

  if(m_hostIdSetHasBeenSet)
  {
      unsigned hostIdSetIdx = 1;
      for(auto& item : m_hostIdSet)
      {
        oStream << location << index << locationValue << ".HostIdSet." << hostIdSetIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_offeringIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OfferingId=" << StringUtils::URLEncode(m_offeringId.c_str()) << "&";
  }

  if(m_instanceFamilyHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceFamily=" << StringUtils::URLEncode(m_instanceFamily.c_str()) << "&";
  }

  if(m_paymentOptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".PaymentOption=" << PaymentOptionMapper::GetNameForPaymentOption(m_paymentOption) << "&";
  }

  if(m_hourlyPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".HourlyPrice=" << StringUtils::URLEncode(m_hourlyPrice.c_str()) << "&";
  }

  if(m_upfrontPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpfrontPrice=" << StringUtils::URLEncode(m_upfrontPrice.c_str()) << "&";
  }

  if(m_currencyCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CurrencyCode=" << CurrencyCodeValuesMapper::GetNameForCurrencyCodeValues(m_currencyCode) << "&";
  }

  if(m_countHasBeenSet)
  {
      oStream << location << index << locationValue << ".Count=" << m_count << "&";
  }

  if(m_durationHasBeenSet)
  {
      oStream << location << index << locationValue << ".Duration=" << m_duration << "&";
  }

  if(m_endHasBeenSet)
  {
      oStream << location << index << locationValue << ".End=" << StringUtils::URLEncode(m_end.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_startHasBeenSet)
  {
      oStream << location << index << locationValue << ".Start=" << StringUtils::URLEncode(m_start.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << ReservationStateMapper::GetNameForReservationState(m_state) << "&";
  }

}

void HostReservation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_hostReservationIdHasBeenSet)
  {
      oStream << location << ".HostReservationId=" << StringUtils::URLEncode(m_hostReservationId.c_str()) << "&";
  }
  if(m_hostIdSetHasBeenSet)
  {
      unsigned hostIdSetIdx = 1;
      for(auto& item : m_hostIdSet)
      {
        oStream << location << ".HostIdSet." << hostIdSetIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_offeringIdHasBeenSet)
  {
      oStream << location << ".OfferingId=" << StringUtils::URLEncode(m_offeringId.c_str()) << "&";
  }
  if(m_instanceFamilyHasBeenSet)
  {
      oStream << location << ".InstanceFamily=" << StringUtils::URLEncode(m_instanceFamily.c_str()) << "&";
  }
  if(m_paymentOptionHasBeenSet)
  {
      oStream << location << ".PaymentOption=" << PaymentOptionMapper::GetNameForPaymentOption(m_paymentOption) << "&";
  }
  if(m_hourlyPriceHasBeenSet)
  {
      oStream << location << ".HourlyPrice=" << StringUtils::URLEncode(m_hourlyPrice.c_str()) << "&";
  }
  if(m_upfrontPriceHasBeenSet)
  {
      oStream << location << ".UpfrontPrice=" << StringUtils::URLEncode(m_upfrontPrice.c_str()) << "&";
  }
  if(m_currencyCodeHasBeenSet)
  {
      oStream << location << ".CurrencyCode=" << CurrencyCodeValuesMapper::GetNameForCurrencyCodeValues(m_currencyCode) << "&";
  }
  if(m_countHasBeenSet)
  {
      oStream << location << ".Count=" << m_count << "&";
  }
  if(m_durationHasBeenSet)
  {
      oStream << location << ".Duration=" << m_duration << "&";
  }
  if(m_endHasBeenSet)
  {
      oStream << location << ".End=" << StringUtils::URLEncode(m_end.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_startHasBeenSet)
  {
      oStream << location << ".Start=" << StringUtils::URLEncode(m_start.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << ReservationStateMapper::GetNameForReservationState(m_state) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
