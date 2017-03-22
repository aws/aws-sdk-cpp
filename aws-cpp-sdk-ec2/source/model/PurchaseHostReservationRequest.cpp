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
#include <aws/ec2/model/PurchaseHostReservationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

PurchaseHostReservationRequest::PurchaseHostReservationRequest() : 
    m_offeringIdHasBeenSet(false),
    m_hostIdSetHasBeenSet(false),
    m_limitPriceHasBeenSet(false),
    m_currencyCode(CurrencyCodeValues::NOT_SET),
    m_currencyCodeHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

Aws::String PurchaseHostReservationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PurchaseHostReservation&";
  if(m_offeringIdHasBeenSet)
  {
    ss << "OfferingId=" << StringUtils::URLEncode(m_offeringId.c_str()) << "&";
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

  if(m_currencyCodeHasBeenSet)
  {
    ss << "CurrencyCode=" << CurrencyCodeValuesMapper::GetNameForCurrencyCodeValues(m_currencyCode) << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  PurchaseHostReservationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
