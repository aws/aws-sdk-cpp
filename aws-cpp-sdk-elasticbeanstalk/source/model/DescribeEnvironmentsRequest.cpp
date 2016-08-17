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
#include <aws/elasticbeanstalk/model/DescribeEnvironmentsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

DescribeEnvironmentsRequest::DescribeEnvironmentsRequest() : 
    m_applicationNameHasBeenSet(false),
    m_versionLabelHasBeenSet(false),
    m_environmentIdsHasBeenSet(false),
    m_environmentNamesHasBeenSet(false),
    m_includeDeleted(false),
    m_includeDeletedHasBeenSet(false),
    m_includedDeletedBackToHasBeenSet(false)
{
}

Aws::String DescribeEnvironmentsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeEnvironments&";
  if(m_applicationNameHasBeenSet)
  {
    ss << "ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }

  if(m_versionLabelHasBeenSet)
  {
    ss << "VersionLabel=" << StringUtils::URLEncode(m_versionLabel.c_str()) << "&";
  }

  if(m_environmentIdsHasBeenSet)
  {
    unsigned environmentIdsCount = 1;
    for(auto& item : m_environmentIds)
    {
      ss << "EnvironmentIds.member." << environmentIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      environmentIdsCount++;
    }
  }

  if(m_environmentNamesHasBeenSet)
  {
    unsigned environmentNamesCount = 1;
    for(auto& item : m_environmentNames)
    {
      ss << "EnvironmentNames.member." << environmentNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      environmentNamesCount++;
    }
  }

  if(m_includeDeletedHasBeenSet)
  {
    ss << "IncludeDeleted=" << m_includeDeleted << "&";
  }

  if(m_includedDeletedBackToHasBeenSet)
  {
    ss << "IncludedDeletedBackTo=" << StringUtils::URLEncode(m_includedDeletedBackTo.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}

