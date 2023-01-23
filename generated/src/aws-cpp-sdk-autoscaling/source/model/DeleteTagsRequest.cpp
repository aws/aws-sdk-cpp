/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DeleteTagsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

DeleteTagsRequest::DeleteTagsRequest() : 
    m_tagsHasBeenSet(false)
{
}

Aws::String DeleteTagsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteTags&";
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


void  DeleteTagsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
