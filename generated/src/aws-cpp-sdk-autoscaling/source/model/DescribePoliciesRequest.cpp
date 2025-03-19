/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DescribePoliciesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

Aws::String DescribePoliciesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribePolicies&";
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_policyNamesHasBeenSet)
  {
    if (m_policyNames.empty())
    {
      ss << "PolicyNames=&";
    }
    else
    {
      unsigned policyNamesCount = 1;
      for(auto& item : m_policyNames)
      {
        ss << "PolicyNames.member." << policyNamesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        policyNamesCount++;
      }
    }
  }

  if(m_policyTypesHasBeenSet)
  {
    if (m_policyTypes.empty())
    {
      ss << "PolicyTypes=&";
    }
    else
    {
      unsigned policyTypesCount = 1;
      for(auto& item : m_policyTypes)
      {
        ss << "PolicyTypes.member." << policyTypesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        policyTypesCount++;
      }
    }
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  DescribePoliciesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
