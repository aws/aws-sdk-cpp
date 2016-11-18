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
#include <aws/rds/model/DownloadDBLogFilePortionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DownloadDBLogFilePortionRequest::DownloadDBLogFilePortionRequest() : 
    m_dBInstanceIdentifierHasBeenSet(false),
    m_logFileNameHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_numberOfLines(0),
    m_numberOfLinesHasBeenSet(false)
{
}

Aws::String DownloadDBLogFilePortionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DownloadDBLogFilePortion&";
  if(m_dBInstanceIdentifierHasBeenSet)
  {
    ss << "DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if(m_logFileNameHasBeenSet)
  {
    ss << "LogFileName=" << StringUtils::URLEncode(m_logFileName.c_str()) << "&";
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  if(m_numberOfLinesHasBeenSet)
  {
    ss << "NumberOfLines=" << m_numberOfLines << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}

