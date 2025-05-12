/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeReservedInstancesOfferingsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String DescribeReservedInstancesOfferingsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeReservedInstancesOfferings&";
  if(m_availabilityZoneHasBeenSet)
  {
    ss << "AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_includeMarketplaceHasBeenSet)
  {
    ss << "IncludeMarketplace=" << std::boolalpha << m_includeMarketplace << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
    ss << "InstanceType=" << StringUtils::URLEncode(InstanceTypeMapper::GetNameForInstanceType(m_instanceType)) << "&";
  }

  if(m_maxDurationHasBeenSet)
  {
    ss << "MaxDuration=" << m_maxDuration << "&";
  }

  if(m_maxInstanceCountHasBeenSet)
  {
    ss << "MaxInstanceCount=" << m_maxInstanceCount << "&";
  }

  if(m_minDurationHasBeenSet)
  {
    ss << "MinDuration=" << m_minDuration << "&";
  }

  if(m_offeringClassHasBeenSet)
  {
    ss << "OfferingClass=" << StringUtils::URLEncode(OfferingClassTypeMapper::GetNameForOfferingClassType(m_offeringClass)) << "&";
  }

  if(m_productDescriptionHasBeenSet)
  {
    ss << "ProductDescription=" << StringUtils::URLEncode(RIProductDescriptionMapper::GetNameForRIProductDescription(m_productDescription)) << "&";
  }

  if(m_reservedInstancesOfferingIdsHasBeenSet)
  {
    unsigned reservedInstancesOfferingIdsCount = 1;
    for(auto& item : m_reservedInstancesOfferingIds)
    {
      ss << "ReservedInstancesOfferingId." << reservedInstancesOfferingIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      reservedInstancesOfferingIdsCount++;
    }
  }

  if(m_availabilityZoneIdHasBeenSet)
  {
    ss << "AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filter.", filtersCount, "");
      filtersCount++;
    }
  }

  if(m_instanceTenancyHasBeenSet)
  {
    ss << "InstanceTenancy=" << StringUtils::URLEncode(TenancyMapper::GetNameForTenancy(m_instanceTenancy)) << "&";
  }

  if(m_offeringTypeHasBeenSet)
  {
    ss << "OfferingType=" << StringUtils::URLEncode(OfferingTypeValuesMapper::GetNameForOfferingTypeValues(m_offeringType)) << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeReservedInstancesOfferingsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
