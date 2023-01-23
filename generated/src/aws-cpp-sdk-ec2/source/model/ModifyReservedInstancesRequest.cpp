/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyReservedInstancesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyReservedInstancesRequest::ModifyReservedInstancesRequest() : 
    m_reservedInstancesIdsHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_targetConfigurationsHasBeenSet(false)
{
}

Aws::String ModifyReservedInstancesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyReservedInstances&";
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

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_targetConfigurationsHasBeenSet)
  {
    unsigned targetConfigurationsCount = 1;
    for(auto& item : m_targetConfigurations)
    {
      item.OutputToStream(ss, "ReservedInstancesConfigurationSetItemType.", targetConfigurationsCount, "");
      targetConfigurationsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyReservedInstancesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
