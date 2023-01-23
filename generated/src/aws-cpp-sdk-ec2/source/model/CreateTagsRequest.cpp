/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateTagsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateTagsRequest::CreateTagsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateTagsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateTags&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_resourcesHasBeenSet)
  {
    unsigned resourcesCount = 1;
    for(auto& item : m_resources)
    {
      ss << "ResourceId." << resourcesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      resourcesCount++;
    }
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tag.", tagsCount, "");
      tagsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateTagsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
