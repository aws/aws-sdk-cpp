/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/rds/model/DescribeDBEngineVersionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DescribeDBEngineVersionsRequest::DescribeDBEngineVersionsRequest() : 
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_dBParameterGroupFamilyHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_defaultOnly(false),
    m_defaultOnlyHasBeenSet(false),
    m_listSupportedCharacterSets(false),
    m_listSupportedCharacterSetsHasBeenSet(false)
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
    ss << "DefaultOnly=" << m_defaultOnly << "&";
  }
  if(m_listSupportedCharacterSetsHasBeenSet)
  {
    ss << "ListSupportedCharacterSets=" << m_listSupportedCharacterSets << "&";
  }
  ss << "Version=2013-01-10";
  return ss.str();
}

