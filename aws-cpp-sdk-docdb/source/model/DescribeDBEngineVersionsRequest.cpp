/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/model/DescribeDBEngineVersionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::DocDB::Model;
using namespace Aws::Utils;

DescribeDBEngineVersionsRequest::DescribeDBEngineVersionsRequest() : 
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_dBParameterGroupFamilyHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_defaultOnly(false),
    m_defaultOnlyHasBeenSet(false),
    m_listSupportedCharacterSets(false),
    m_listSupportedCharacterSetsHasBeenSet(false),
    m_listSupportedTimezones(false),
    m_listSupportedTimezonesHasBeenSet(false)
{
}

Aws::String DescribeDBEngineVersionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeDBEngineVersions&";
  if(m_engineHasBeenSet)
  {
    ss << "Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
    ss << "EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_dBParameterGroupFamilyHasBeenSet)
  {
    ss << "DBParameterGroupFamily=" << StringUtils::URLEncode(m_dBParameterGroupFamily.c_str()) << "&";
  }

  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filters.member.", filtersCount, "");
      filtersCount++;
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

  if(m_defaultOnlyHasBeenSet)
  {
    ss << "DefaultOnly=" << std::boolalpha << m_defaultOnly << "&";
  }

  if(m_listSupportedCharacterSetsHasBeenSet)
  {
    ss << "ListSupportedCharacterSets=" << std::boolalpha << m_listSupportedCharacterSets << "&";
  }

  if(m_listSupportedTimezonesHasBeenSet)
  {
    ss << "ListSupportedTimezones=" << std::boolalpha << m_listSupportedTimezones << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DescribeDBEngineVersionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
