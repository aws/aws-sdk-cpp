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
#include <aws/ec2/model/CreateReservedInstancesListingRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateReservedInstancesListingRequest::CreateReservedInstancesListingRequest() : 
    m_reservedInstancesIdHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_priceSchedulesHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

Aws::String CreateReservedInstancesListingRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateReservedInstancesListing&";
  if(m_reservedInstancesIdHasBeenSet)
  {
    ss << "ReservedInstancesId=" << StringUtils::URLEncode(m_reservedInstancesId.c_str()) << "&";
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

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  ss << "Version=2015-10-01";
  return ss.str();
}

