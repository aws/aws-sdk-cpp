﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ListStackSetOperationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

ListStackSetOperationsRequest::ListStackSetOperationsRequest() : 
    m_stackSetNameHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_callAs(CallAs::NOT_SET),
    m_callAsHasBeenSet(false)
{
}

Aws::String ListStackSetOperationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListStackSetOperations&";
  if(m_stackSetNameHasBeenSet)
  {
    ss << "StackSetName=" << StringUtils::URLEncode(m_stackSetName.c_str()) << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  if(m_callAsHasBeenSet)
  {
    ss << "CallAs=" << CallAsMapper::GetNameForCallAs(m_callAs) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  ListStackSetOperationsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
