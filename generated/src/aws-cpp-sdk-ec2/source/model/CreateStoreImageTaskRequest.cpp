/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateStoreImageTaskRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateStoreImageTaskRequest::CreateStoreImageTaskRequest() : 
    m_imageIdHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_s3ObjectTagsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String CreateStoreImageTaskRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateStoreImageTask&";
  if(m_imageIdHasBeenSet)
  {
    ss << "ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_bucketHasBeenSet)
  {
    ss << "Bucket=" << StringUtils::URLEncode(m_bucket.c_str()) << "&";
  }

  if(m_s3ObjectTagsHasBeenSet)
  {
    unsigned s3ObjectTagsCount = 1;
    for(auto& item : m_s3ObjectTags)
    {
      item.OutputToStream(ss, "S3ObjectTag.", s3ObjectTagsCount, "");
      s3ObjectTagsCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateStoreImageTaskRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
