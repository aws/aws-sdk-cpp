/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeReservedInstancesOfferingsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeReservedInstancesOfferingsRequest::DescribeReservedInstancesOfferingsRequest() : 
    m_availabilityZoneHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_includeMarketplace(false),
    m_includeMarketplaceHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_maxDuration(0),
    m_maxDurationHasBeenSet(false),
    m_maxInstanceCount(0),
    m_maxInstanceCountHasBeenSet(false),
    m_minDuration(0),
    m_minDurationHasBeenSet(false),
    m_offeringClass(OfferingClassType::NOT_SET),
    m_offeringClassHasBeenSet(false),
    m_productDescription(RIProductDescription::NOT_SET),
    m_productDescriptionHasBeenSet(false),
    m_reservedInstancesOfferingIdsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_instanceTenancy(Tenancy::NOT_SET),
    m_instanceTenancyHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_offeringType(OfferingTypeValues::NOT_SET),
    m_offeringTypeHasBeenSet(false)
{
}

Aws::String DescribeReservedInstancesOfferingsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeReservedInstancesOfferings&";
  if(m_availabilityZoneHasBeenSet)
  {
    ss << "AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
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

  if(m_includeMarketplaceHasBeenSet)
  {
    ss << "IncludeMarketplace=" << std::boolalpha << m_includeMarketplace << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
    ss << "InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
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
    ss << "OfferingClass=" << OfferingClassTypeMapper::GetNameForOfferingClassType(m_offeringClass) << "&";
  }

  if(m_productDescriptionHasBeenSet)
  {
    ss << "ProductDescription=" << RIProductDescriptionMapper::GetNameForRIProductDescription(m_productDescription) << "&";
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

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_instanceTenancyHasBeenSet)
  {
    ss << "InstanceTenancy=" << TenancyMapper::GetNameForTenancy(m_instanceTenancy) << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_offeringTypeHasBeenSet)
  {
    ss << "OfferingType=" << OfferingTypeValuesMapper::GetNameForOfferingTypeValues(m_offeringType) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeReservedInstancesOfferingsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
