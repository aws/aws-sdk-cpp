/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/model/DescribeEventsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::DocDB::Model;
using namespace Aws::Utils;

Aws::String DescribeEventsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeEvents&";
  if(m_sourceIdentifierHasBeenSet)
  {
    ss << "SourceIdentifier=" << StringUtils::URLEncode(m_sourceIdentifier.c_str()) << "&";
  }

  if(m_sourceTypeHasBeenSet)
  {
    ss << "SourceType=" << StringUtils::URLEncode(SourceTypeMapper::GetNameForSourceType(m_sourceType)) << "&";
  }

  if(m_startTimeHasBeenSet)
  {
    ss << "StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endTimeHasBeenSet)
  {
    ss << "EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_durationHasBeenSet)
  {
    ss << "Duration=" << m_duration << "&";
  }

  if(m_eventCategoriesHasBeenSet)
  {
    if (m_eventCategories.empty())
    {
      ss << "EventCategories=&";
    }
    else
    {
      unsigned eventCategoriesCount = 1;
      for(auto& item : m_eventCategories)
      {
        ss << "EventCategories.EventCategory." << eventCategoriesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        eventCategoriesCount++;
      }
    }
  }

  if(m_filtersHasBeenSet)
  {
    if (m_filters.empty())
    {
      ss << "Filters=&";
    }
    else
    {
      unsigned filtersCount = 1;
      for(auto& item : m_filters)
      {
        item.OutputToStream(ss, "Filters.Filter.", filtersCount, "");
        filtersCount++;
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

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DescribeEventsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
