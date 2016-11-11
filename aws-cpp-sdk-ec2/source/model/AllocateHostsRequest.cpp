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
#include <aws/ec2/model/AllocateHostsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

AllocateHostsRequest::AllocateHostsRequest() : 
    m_autoPlacement(AutoPlacement::NOT_SET),
    m_autoPlacementHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_quantity(0),
    m_quantityHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false)
{
}

Aws::String AllocateHostsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AllocateHosts&";
  if(m_autoPlacementHasBeenSet)
  {
    ss << "AutoPlacement=" << AutoPlacementMapper::GetNameForAutoPlacement(m_autoPlacement) << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
    ss << "InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if(m_quantityHasBeenSet)
  {
    ss << "Quantity=" << m_quantity << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
    ss << "AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  ss << "Version=2015-10-01";
  return ss.str();
}

