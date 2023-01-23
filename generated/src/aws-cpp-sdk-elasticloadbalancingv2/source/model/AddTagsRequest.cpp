/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/AddTagsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

AddTagsRequest::AddTagsRequest() : 
    m_resourceArnsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String AddTagsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AddTags&";
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

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  AddTagsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
