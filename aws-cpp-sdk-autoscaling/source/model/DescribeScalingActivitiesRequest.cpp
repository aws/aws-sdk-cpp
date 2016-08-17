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
#include <aws/autoscaling/model/DescribeScalingActivitiesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

DescribeScalingActivitiesRequest::DescribeScalingActivitiesRequest() : 
    m_activityIdsHasBeenSet(false),
    m_autoScalingGroupNameHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeScalingActivitiesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeScalingActivities&";
  if(m_activityIdsHasBeenSet)
  {
    unsigned activityIdsCount = 1;
    for(auto& item : m_activityIds)
    {
      ss << "ActivityIds.member." << activityIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      activityIdsCount++;
    }
  }

  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}

