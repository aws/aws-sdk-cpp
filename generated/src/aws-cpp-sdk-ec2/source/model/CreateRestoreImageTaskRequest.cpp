/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateRestoreImageTaskRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateRestoreImageTaskRequest::CreateRestoreImageTaskRequest() : 
    m_bucketHasBeenSet(false),
    m_objectKeyHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String CreateRestoreImageTaskRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateRestoreImageTask&";
  if(m_bucketHasBeenSet)
  {
    ss << "Bucket=" << StringUtils::URLEncode(m_bucket.c_str()) << "&";
  }

  if(m_objectKeyHasBeenSet)
  {
    ss << "ObjectKey=" << StringUtils::URLEncode(m_objectKey.c_str()) << "&";
  }

  if(m_nameHasBeenSet)
  {
    ss << "Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateRestoreImageTaskRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
