/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ListStackRefactorsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

Aws::String ListStackRefactorsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListStackRefactors&";
  if(m_executionStatusFilterHasBeenSet)
  {
    if (m_executionStatusFilter.empty())
    {
      ss << "ExecutionStatusFilter=&";
    }
    else
    {
      unsigned executionStatusFilterCount = 1;
      for(auto& item : m_executionStatusFilter)
      {
        ss << "ExecutionStatusFilter.member." << executionStatusFilterCount << "="
            << StringUtils::URLEncode(StackRefactorExecutionStatusMapper::GetNameForStackRefactorExecutionStatus(item)) << "&";
        executionStatusFilterCount++;
      }
    }
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  ListStackRefactorsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
