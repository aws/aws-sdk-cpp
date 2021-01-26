/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/CreateOrUpdateTagsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

CreateOrUpdateTagsRequest::CreateOrUpdateTagsRequest() : 
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateOrUpdateTagsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateOrUpdateTags&";
  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  CreateOrUpdateTagsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
