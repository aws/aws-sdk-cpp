﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetReservedInstancesExchangeQuoteRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String GetReservedInstancesExchangeQuoteRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetReservedInstancesExchangeQuote&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_reservedInstanceIdsHasBeenSet)
  {
    unsigned reservedInstanceIdsCount = 1;
    for(auto& item : m_reservedInstanceIds)
    {
      ss << "ReservedInstanceId." << reservedInstanceIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      reservedInstanceIdsCount++;
    }
  }

  if(m_targetConfigurationsHasBeenSet)
  {
    unsigned targetConfigurationsCount = 1;
    for(auto& item : m_targetConfigurations)
    {
      item.OutputToStream(ss, "TargetConfiguration.", targetConfigurationsCount, "");
      targetConfigurationsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  GetReservedInstancesExchangeQuoteRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
