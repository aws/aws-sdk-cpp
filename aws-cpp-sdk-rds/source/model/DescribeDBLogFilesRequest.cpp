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
#include <aws/rds/model/DescribeDBLogFilesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DescribeDBLogFilesRequest::DescribeDBLogFilesRequest() : 
    m_dBInstanceIdentifierHasBeenSet(false),
    m_filenameContainsHasBeenSet(false),
    m_fileLastWritten(0),
    m_fileLastWrittenHasBeenSet(false),
    m_fileSize(0),
    m_fileSizeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String DescribeDBLogFilesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeDBLogFiles&";
  if(m_dBInstanceIdentifierHasBeenSet)
  {
    ss << "DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if(m_filenameContainsHasBeenSet)
  {
    ss << "FilenameContains=" << StringUtils::URLEncode(m_filenameContains.c_str()) << "&";
  }

  if(m_fileLastWrittenHasBeenSet)
  {
    ss << "FileLastWritten=" << m_fileLastWritten << "&";
  }

  if(m_fileSizeHasBeenSet)
  {
    ss << "FileSize=" << m_fileSize << "&";
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

  ss << "Version=2014-10-31";
  return ss.str();
}

