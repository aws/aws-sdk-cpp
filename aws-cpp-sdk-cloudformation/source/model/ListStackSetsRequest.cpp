/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ListStackSetsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

ListStackSetsRequest::ListStackSetsRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_status(StackSetStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String ListStackSetsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListStackSets&";
  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if(m_statusHasBeenSet)
  {
    ss << "Status=" << StackSetStatusMapper::GetNameForStackSetStatus(m_status) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  ListStackSetsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
