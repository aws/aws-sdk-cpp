/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteQueuedReservedInstancesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteQueuedReservedInstancesRequest::DeleteQueuedReservedInstancesRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_reservedInstancesIdsHasBeenSet(false)
{
}

Aws::String DeleteQueuedReservedInstancesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteQueuedReservedInstances&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_reservedInstancesIdsHasBeenSet)
  {
    unsigned reservedInstancesIdsCount = 1;
    for(auto& item : m_reservedInstancesIds)
    {
      ss << "ReservedInstancesId." << reservedInstancesIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      reservedInstancesIdsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteQueuedReservedInstancesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
