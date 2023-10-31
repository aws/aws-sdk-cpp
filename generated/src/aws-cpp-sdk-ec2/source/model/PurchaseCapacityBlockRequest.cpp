/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PurchaseCapacityBlockRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

PurchaseCapacityBlockRequest::PurchaseCapacityBlockRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_capacityBlockOfferingIdHasBeenSet(false),
    m_instancePlatform(CapacityReservationInstancePlatform::NOT_SET),
    m_instancePlatformHasBeenSet(false)
{
}

Aws::String PurchaseCapacityBlockRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PurchaseCapacityBlock&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
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

  if(m_capacityBlockOfferingIdHasBeenSet)
  {
    ss << "CapacityBlockOfferingId=" << StringUtils::URLEncode(m_capacityBlockOfferingId.c_str()) << "&";
  }

  if(m_instancePlatformHasBeenSet)
  {
    ss << "InstancePlatform=" << CapacityReservationInstancePlatformMapper::GetNameForCapacityReservationInstancePlatform(m_instancePlatform) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  PurchaseCapacityBlockRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
