/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CancelReservedInstancesListingRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CancelReservedInstancesListingRequest::CancelReservedInstancesListingRequest() : 
    m_reservedInstancesListingIdHasBeenSet(false)
{
}

Aws::String CancelReservedInstancesListingRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CancelReservedInstancesListing&";
  if(m_reservedInstancesListingIdHasBeenSet)
  {
    ss << "ReservedInstancesListingId=" << StringUtils::URLEncode(m_reservedInstancesListingId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CancelReservedInstancesListingRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
