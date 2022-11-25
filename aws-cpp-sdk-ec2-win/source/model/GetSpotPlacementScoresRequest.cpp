/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetSpotPlacementScoresRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

GetSpotPlacementScoresRequest::GetSpotPlacementScoresRequest() : 
    m_instanceTypesHasBeenSet(false),
    m_targetCapacity(0),
    m_targetCapacityHasBeenSet(false),
    m_targetCapacityUnitType(TargetCapacityUnitType::NOT_SET),
    m_targetCapacityUnitTypeHasBeenSet(false),
    m_singleAvailabilityZone(false),
    m_singleAvailabilityZoneHasBeenSet(false),
    m_regionNamesHasBeenSet(false),
    m_instanceRequirementsWithMetadataHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetSpotPlacementScoresRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetSpotPlacementScores&";
  if(m_instanceTypesHasBeenSet)
  {
    unsigned instanceTypesCount = 1;
    for(auto& item : m_instanceTypes)
    {
      ss << "InstanceType." << instanceTypesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      instanceTypesCount++;
    }
  }

  if(m_targetCapacityHasBeenSet)
  {
    ss << "TargetCapacity=" << m_targetCapacity << "&";
  }

  if(m_targetCapacityUnitTypeHasBeenSet)
  {
    ss << "TargetCapacityUnitType=" << TargetCapacityUnitTypeMapper::GetNameForTargetCapacityUnitType(m_targetCapacityUnitType) << "&";
  }

  if(m_singleAvailabilityZoneHasBeenSet)
  {
    ss << "SingleAvailabilityZone=" << std::boolalpha << m_singleAvailabilityZone << "&";
  }

  if(m_regionNamesHasBeenSet)
  {
    unsigned regionNamesCount = 1;
    for(auto& item : m_regionNames)
    {
      ss << "RegionName." << regionNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      regionNamesCount++;
    }
  }

  if(m_instanceRequirementsWithMetadataHasBeenSet)
  {
    m_instanceRequirementsWithMetadata.OutputToStream(ss, "InstanceRequirementsWithMetadata");
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  GetSpotPlacementScoresRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
