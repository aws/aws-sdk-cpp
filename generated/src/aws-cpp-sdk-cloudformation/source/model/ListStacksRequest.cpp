/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ListStacksRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

ListStacksRequest::ListStacksRequest() : 
    m_nextTokenHasBeenSet(false),
    m_stackStatusFilterHasBeenSet(false)
{
}

Aws::String ListStacksRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListStacks&";
  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_stackStatusFilterHasBeenSet)
  {
    unsigned stackStatusFilterCount = 1;
    for(auto& item : m_stackStatusFilter)
    {
      ss << "StackStatusFilter.member." << stackStatusFilterCount << "="
          << StringUtils::URLEncode(StackStatusMapper::GetNameForStackStatus(item).c_str()) << "&";
      stackStatusFilterCount++;
    }
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  ListStacksRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
