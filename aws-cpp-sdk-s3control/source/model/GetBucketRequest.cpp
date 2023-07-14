/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/GetBucketRequest.h>
#include <aws/s3control/S3ControlARN.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

GetBucketRequest::GetBucketRequest() : 
    m_accountIdHasBeenSet(false),
    m_bucketHasBeenSet(false)
{
}

Aws::String GetBucketRequest::SerializePayload() const
{
  return {};
}


Aws::Http::HeaderValueCollection GetBucketRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_accountIdHasBeenSet)
  {
    ss << m_accountId;
    headers.emplace("x-amz-account-id",  ss.str());
    ss.str("");
  }

  Aws::S3Control::S3ControlARN arn(m_bucket);
  if (arn && arn.Validate().IsSuccess())
  {
    ss << arn.GetAccountId();
    headers.emplace("x-amz-account-id", ss.str());
    ss.str("");
    if (arn.GetResourceType() == Aws::S3Control::ARNResourceType::OUTPOST)
    {
      ss << arn.GetResourceId();
      headers.emplace("x-amz-outpost-id",  ss.str());
      ss.str("");
    }
  }

  return headers;
}
