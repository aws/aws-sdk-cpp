/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PurchaseHostReservationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

PurchaseHostReservationRequest::PurchaseHostReservationRequest() : 
    m_clientTokenHasBeenSet(false),
    m_currencyCode(CurrencyCodeValues::NOT_SET),
    m_currencyCodeHasBeenSet(false),
    m_hostIdSetHasBeenSet(false),
    m_limitPriceHasBeenSet(false),
    m_offeringIdHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false)
{
}

Aws::String PurchaseHostReservationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PurchaseHostReservation&";
  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_currencyCodeHasBeenSet)
  {
    ss << "CurrencyCode=" << CurrencyCodeValuesMapper::GetNameForCurrencyCodeValues(m_currencyCode) << "&";
  }

  if(m_hostIdSetHasBeenSet)
  {
    unsigned hostIdSetCount = 1;
    for(auto& item : m_hostIdSet)
    {
      ss << "HostIdSet." << hostIdSetCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      hostIdSetCount++;
    }
  }

  if(m_limitPriceHasBeenSet)
  {
    ss << "LimitPrice=" << StringUtils::URLEncode(m_limitPrice.c_str()) << "&";
  }

  if(m_offeringIdHasBeenSet)
  {
    ss << "OfferingId=" << StringUtils::URLEncode(m_offeringId.c_str()) << "&";
  }

  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  PurchaseHostReservationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
