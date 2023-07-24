/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ListStackInstanceResourceDriftsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

ListStackInstanceResourceDriftsRequest::ListStackInstanceResourceDriftsRequest() : 
    m_stackSetNameHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_stackInstanceResourceDriftStatusesHasBeenSet(false),
    m_stackInstanceAccountHasBeenSet(false),
    m_stackInstanceRegionHasBeenSet(false),
    m_operationIdHasBeenSet(false),
    m_callAs(CallAs::NOT_SET),
    m_callAsHasBeenSet(false)
{
}

Aws::String ListStackInstanceResourceDriftsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListStackInstanceResourceDrifts&";
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

  if(m_stackInstanceResourceDriftStatusesHasBeenSet)
  {
    unsigned stackInstanceResourceDriftStatusesCount = 1;
    for(auto& item : m_stackInstanceResourceDriftStatuses)
    {
      ss << "StackInstanceResourceDriftStatuses.member." << stackInstanceResourceDriftStatusesCount << "="
          << StringUtils::URLEncode(StackResourceDriftStatusMapper::GetNameForStackResourceDriftStatus(item).c_str()) << "&";
      stackInstanceResourceDriftStatusesCount++;
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

  if(m_operationIdHasBeenSet)
  {
    ss << "OperationId=" << StringUtils::URLEncode(m_operationId.c_str()) << "&";
  }

  if(m_callAsHasBeenSet)
  {
    ss << "CallAs=" << CallAsMapper::GetNameForCallAs(m_callAs) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  ListStackInstanceResourceDriftsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
