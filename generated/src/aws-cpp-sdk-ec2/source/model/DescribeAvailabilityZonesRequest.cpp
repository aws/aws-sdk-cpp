/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeAvailabilityZonesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeAvailabilityZonesRequest::DescribeAvailabilityZonesRequest() : 
    m_filtersHasBeenSet(false),
    m_zoneNamesHasBeenSet(false),
    m_zoneIdsHasBeenSet(false),
    m_allAvailabilityZones(false),
    m_allAvailabilityZonesHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DescribeAvailabilityZonesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeAvailabilityZones&";
  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filter.", filtersCount, "");
      filtersCount++;
    }
  }

  if(m_zoneNamesHasBeenSet)
  {
    unsigned zoneNamesCount = 1;
    for(auto& item : m_zoneNames)
    {
      ss << "ZoneName." << zoneNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      zoneNamesCount++;
    }
  }

  if(m_zoneIdsHasBeenSet)
  {
    unsigned zoneIdsCount = 1;
    for(auto& item : m_zoneIds)
    {
      ss << "ZoneId." << zoneIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      zoneIdsCount++;
    }
  }

  if(m_allAvailabilityZonesHasBeenSet)
  {
    ss << "AllAvailabilityZones=" << std::boolalpha << m_allAvailabilityZones << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeAvailabilityZonesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
