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
#include <aws/ec2/model/DescribeReservedInstancesOfferingsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeReservedInstancesOfferingsRequest::DescribeReservedInstancesOfferingsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_reservedInstancesOfferingIdsHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_productDescription(RIProductDescription::NOT_SET),
    m_productDescriptionHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_instanceTenancy(Tenancy::NOT_SET),
    m_instanceTenancyHasBeenSet(false),
    m_offeringType(OfferingTypeValues::NOT_SET),
    m_offeringTypeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_includeMarketplace(false),
    m_includeMarketplaceHasBeenSet(false),
    m_minDuration(0),
    m_minDurationHasBeenSet(false),
    m_maxDuration(0),
    m_maxDurationHasBeenSet(false),
    m_maxInstanceCount(0),
    m_maxInstanceCountHasBeenSet(false)
{
}

Aws::String DescribeReservedInstancesOfferingsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeReservedInstancesOfferings&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << m_dryRun << "&";
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

  if(m_instanceTypeHasBeenSet)
  {
    ss << "InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
    ss << "AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_productDescriptionHasBeenSet)
  {
    ss << "ProductDescription=" << RIProductDescriptionMapper::GetNameForRIProductDescription(m_productDescription) << "&";
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
    ss << "InstanceTenancy=" << TenancyMapper::GetNameForTenancy(m_instanceTenancy) << "&";
  }

  if(m_offeringTypeHasBeenSet)
  {
    ss << "OfferingType=" << OfferingTypeValuesMapper::GetNameForOfferingTypeValues(m_offeringType) << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if(m_includeMarketplaceHasBeenSet)
  {
    ss << "IncludeMarketplace=" << m_includeMarketplace << "&";
  }

  if(m_minDurationHasBeenSet)
  {
    ss << "MinDuration=" << m_minDuration << "&";
  }

  if(m_maxDurationHasBeenSet)
  {
    ss << "MaxDuration=" << m_maxDuration << "&";
  }

  if(m_maxInstanceCountHasBeenSet)
  {
    ss << "MaxInstanceCount=" << m_maxInstanceCount << "&";
  }

  ss << "Version=2015-10-01";
  return ss.str();
}

