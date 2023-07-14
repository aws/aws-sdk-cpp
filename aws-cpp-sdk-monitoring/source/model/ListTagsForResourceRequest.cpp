/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/ListTagsForResourceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

ListTagsForResourceRequest::ListTagsForResourceRequest() : 
    m_resourceARNHasBeenSet(false)
{
}

Aws::String ListTagsForResourceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListTagsForResource&";
  if(m_resourceARNHasBeenSet)
  {
    ss << "ResourceARN=" << StringUtils::URLEncode(m_resourceARN.c_str()) << "&";
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  ListTagsForResourceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
