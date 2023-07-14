﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/AddTagsToResourceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

AddTagsToResourceRequest::AddTagsToResourceRequest() : 
    m_resourceNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String AddTagsToResourceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AddTagsToResource&";
  if(m_resourceNameHasBeenSet)
  {
    ss << "ResourceName=" << StringUtils::URLEncode(m_resourceName.c_str()) << "&";
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

  ss << "Version=2015-02-02";
  return ss.str();
}


void  AddTagsToResourceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
