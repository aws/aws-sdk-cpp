/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/RemoveTagsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils;

Aws::String RemoveTagsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RemoveTags&";
  if(m_loadBalancerNamesHasBeenSet)
  {
    if (m_loadBalancerNames.empty())
    {
      ss << "LoadBalancerNames=&";
    }
    else
    {
      unsigned loadBalancerNamesCount = 1;
      for(auto& item : m_loadBalancerNames)
      {
        ss << "LoadBalancerNames.member." << loadBalancerNamesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        loadBalancerNamesCount++;
      }
    }
  }

  if(m_tagsHasBeenSet)
  {
    if (m_tags.empty())
    {
      ss << "Tags=&";
    }
    else
    {
      unsigned tagsCount = 1;
      for(auto& item : m_tags)
      {
        item.OutputToStream(ss, "Tags.member.", tagsCount, "");
        tagsCount++;
      }
    }
  }

  ss << "Version=2012-06-01";
  return ss.str();
}


void  RemoveTagsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
