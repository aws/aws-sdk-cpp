/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/elasticache/model/DescribeServiceUpdatesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

DescribeServiceUpdatesRequest::DescribeServiceUpdatesRequest() : 
    m_serviceUpdateNameHasBeenSet(false),
    m_serviceUpdateStatusHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String DescribeServiceUpdatesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeServiceUpdates&";
  if(m_serviceUpdateNameHasBeenSet)
  {
    ss << "ServiceUpdateName=" << StringUtils::URLEncode(m_serviceUpdateName.c_str()) << "&";
  }

  if(m_serviceUpdateStatusHasBeenSet)
  {
    unsigned serviceUpdateStatusCount = 1;
    for(auto& item : m_serviceUpdateStatus)
    {
      ss << "ServiceUpdateStatus.member." << serviceUpdateStatusCount << "="
          << StringUtils::URLEncode(ServiceUpdateStatusMapper::GetNameForServiceUpdateStatus(item).c_str()) << "&";
      serviceUpdateStatusCount++;
    }
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  DescribeServiceUpdatesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
