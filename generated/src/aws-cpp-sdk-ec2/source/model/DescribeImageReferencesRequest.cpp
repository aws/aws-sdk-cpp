/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeImageReferencesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String DescribeImageReferencesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeImageReferences&";
  if(m_imageIdsHasBeenSet)
  {
    unsigned imageIdsCount = 1;
    for(auto& item : m_imageIds)
    {
      ss << "ImageId." << imageIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      imageIdsCount++;
    }
  }

  if(m_includeAllResourceTypesHasBeenSet)
  {
    ss << "IncludeAllResourceTypes=" << std::boolalpha << m_includeAllResourceTypes << "&";
  }

  if(m_resourceTypesHasBeenSet)
  {
    unsigned resourceTypesCount = 1;
    for(auto& item : m_resourceTypes)
    {
      item.OutputToStream(ss, "ResourceType.", resourceTypesCount, "");
      resourceTypesCount++;
    }
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_maxResultsHasBeenSet)
  {
    ss << "MaxResults=" << m_maxResults << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeImageReferencesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
