﻿/*
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
#include <aws/ec2/model/DescribeSecurityGroupsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeSecurityGroupsRequest::DescribeSecurityGroupsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_groupNamesHasBeenSet(false),
    m_groupIdsHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

Aws::String DescribeSecurityGroupsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeSecurityGroups&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_groupNamesHasBeenSet)
  {
    unsigned groupNamesCount = 1;
    for(auto& item : m_groupNames)
    {
      ss << "GroupName." << groupNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      groupNamesCount++;
    }
  }

  if(m_groupIdsHasBeenSet)
  {
    unsigned groupIdsCount = 1;
    for(auto& item : m_groupIds)
    {
      ss << "GroupId." << groupIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      groupIdsCount++;
    }
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

  ss << "Version=2016-11-15";
  return ss.str();
}

