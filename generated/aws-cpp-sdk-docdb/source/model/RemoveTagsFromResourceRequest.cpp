/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/model/RemoveTagsFromResourceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::DocDB::Model;
using namespace Aws::Utils;

RemoveTagsFromResourceRequest::RemoveTagsFromResourceRequest() : 
    m_resourceNameHasBeenSet(false),
    m_tagKeysHasBeenSet(false)
{
}

Aws::String RemoveTagsFromResourceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RemoveTagsFromResource&";
  if(m_resourceNameHasBeenSet)
  {
    ss << "ResourceName=" << StringUtils::URLEncode(m_resourceName.c_str()) << "&";
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

  ss << "Version=2014-10-31";
  return ss.str();
}


void  RemoveTagsFromResourceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
