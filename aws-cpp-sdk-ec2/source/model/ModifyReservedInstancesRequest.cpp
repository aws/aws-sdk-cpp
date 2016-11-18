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
#include <aws/ec2/model/ModifyReservedInstancesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyReservedInstancesRequest::ModifyReservedInstancesRequest() : 
    m_clientTokenHasBeenSet(false),
    m_reservedInstancesIdsHasBeenSet(false),
    m_targetConfigurationsHasBeenSet(false)
{
}

Aws::String ModifyReservedInstancesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyReservedInstances&";
  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
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

  if(m_targetConfigurationsHasBeenSet)
  {
    unsigned targetConfigurationsCount = 1;
    for(auto& item : m_targetConfigurations)
    {
      item.OutputToStream(ss, "ReservedInstancesConfigurationSetItemType.", targetConfigurationsCount, "");
      targetConfigurationsCount++;
    }
  }

  ss << "Version=2015-10-01";
  return ss.str();
}

