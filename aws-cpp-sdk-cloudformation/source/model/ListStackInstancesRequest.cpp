/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ListStackInstancesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

ListStackInstancesRequest::ListStackInstancesRequest() : 
    m_stackSetNameHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_stackInstanceAccountHasBeenSet(false),
    m_stackInstanceRegionHasBeenSet(false)
{
}

Aws::String ListStackInstancesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListStackInstances&";
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

  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filters.member.", filtersCount, "");
      filtersCount++;
    }
  }

  if(m_stackInstanceAccountHasBeenSet)
  {
    ss << "StackInstanceAccount=" << StringUtils::URLEncode(m_stackInstanceAccount.c_str()) << "&";
  }

  if(m_stackInstanceRegionHasBeenSet)
  {
    ss << "StackInstanceRegion=" << StringUtils::URLEncode(m_stackInstanceRegion.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  ListStackInstancesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
