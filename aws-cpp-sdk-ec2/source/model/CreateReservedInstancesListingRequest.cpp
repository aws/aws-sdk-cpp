/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateReservedInstancesListingRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateReservedInstancesListingRequest::CreateReservedInstancesListingRequest() : 
    m_clientTokenHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_priceSchedulesHasBeenSet(false),
    m_reservedInstancesIdHasBeenSet(false)
{
}

Aws::String CreateReservedInstancesListingRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateReservedInstancesListing&";
  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_instanceCountHasBeenSet)
  {
    ss << "InstanceCount=" << m_instanceCount << "&";
  }

  if(m_priceSchedulesHasBeenSet)
  {
    unsigned priceSchedulesCount = 1;
    for(auto& item : m_priceSchedules)
    {
      item.OutputToStream(ss, "PriceSchedules.", priceSchedulesCount, "");
      priceSchedulesCount++;
    }
  }

  if(m_reservedInstancesIdHasBeenSet)
  {
    ss << "ReservedInstancesId=" << StringUtils::URLEncode(m_reservedInstancesId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateReservedInstancesListingRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
