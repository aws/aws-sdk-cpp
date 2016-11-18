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
#include <aws/redshift/model/DescribeClusterSecurityGroupsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DescribeClusterSecurityGroupsRequest::DescribeClusterSecurityGroupsRequest() : 
    m_clusterSecurityGroupNameHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_tagKeysHasBeenSet(false),
    m_tagValuesHasBeenSet(false)
{
}

Aws::String DescribeClusterSecurityGroupsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeClusterSecurityGroups&";
  if(m_clusterSecurityGroupNameHasBeenSet)
  {
    ss << "ClusterSecurityGroupName=" << StringUtils::URLEncode(m_clusterSecurityGroupName.c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  if(m_tagKeysHasBeenSet)
  {
    unsigned tagKeysCount = 1;
    for(auto& item : m_tagKeys)
    {
      ss << "TagKeys.member." << tagKeysCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      tagKeysCount++;
    }
  }

  if(m_tagValuesHasBeenSet)
  {
    unsigned tagValuesCount = 1;
    for(auto& item : m_tagValues)
    {
      ss << "TagValues.member." << tagValuesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      tagValuesCount++;
    }
  }

  ss << "Version=2012-12-01";
  return ss.str();
}

