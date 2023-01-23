/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/RemoveTagsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

RemoveTagsRequest::RemoveTagsRequest() : 
    m_resourceArnsHasBeenSet(false),
    m_tagKeysHasBeenSet(false)
{
}

Aws::String RemoveTagsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RemoveTags&";
  if(m_resourceArnsHasBeenSet)
  {
    unsigned resourceArnsCount = 1;
    for(auto& item : m_resourceArns)
    {
      ss << "ResourceArns.member." << resourceArnsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      resourceArnsCount++;
    }
  }

  if(m_tagKeysHasBeenSet)
  {
    unsigned tagKeysCount = 1;
    for(auto& item : m_tagKeys)
    {
      ss << "TagKeys.member." << tagKeysCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      tagKeysCount++;
    }
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  RemoveTagsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
