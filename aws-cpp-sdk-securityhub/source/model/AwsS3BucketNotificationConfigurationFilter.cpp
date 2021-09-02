/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketNotificationConfigurationFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsS3BucketNotificationConfigurationFilter::AwsS3BucketNotificationConfigurationFilter() : 
    m_s3KeyFilterHasBeenSet(false)
{
}

AwsS3BucketNotificationConfigurationFilter::AwsS3BucketNotificationConfigurationFilter(JsonView jsonValue) : 
    m_s3KeyFilterHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketNotificationConfigurationFilter& AwsS3BucketNotificationConfigurationFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3KeyFilter"))
  {
    m_s3KeyFilter = jsonValue.GetObject("S3KeyFilter");

    m_s3KeyFilterHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketNotificationConfigurationFilter::Jsonize() const
{
  JsonValue payload;

  if(m_s3KeyFilterHasBeenSet)
  {
   payload.WithObject("S3KeyFilter", m_s3KeyFilter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
