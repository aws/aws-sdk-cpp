/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DescribeServiceUpdatesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

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
    if (m_serviceUpdateStatus.empty())
    {
      ss << "ServiceUpdateStatus=&";
    }
    else
    {
      unsigned serviceUpdateStatusCount = 1;
      for(auto& item : m_serviceUpdateStatus)
      {
        ss << "ServiceUpdateStatus.member." << serviceUpdateStatusCount << "="
            << StringUtils::URLEncode(ServiceUpdateStatusMapper::GetNameForServiceUpdateStatus(item)) << "&";
        serviceUpdateStatusCount++;
      }
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
