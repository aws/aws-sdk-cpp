/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ModelInvocationJobS3InputDataConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

ModelInvocationJobS3InputDataConfig::ModelInvocationJobS3InputDataConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ModelInvocationJobS3InputDataConfig& ModelInvocationJobS3InputDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3InputFormat"))
  {
    m_s3InputFormat = S3InputFormatMapper::GetS3InputFormatForName(jsonValue.GetString("s3InputFormat"));
    m_s3InputFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3Uri"))
  {
    m_s3Uri = jsonValue.GetString("s3Uri");
    m_s3UriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3BucketOwner"))
  {
    m_s3BucketOwner = jsonValue.GetString("s3BucketOwner");
    m_s3BucketOwnerHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelInvocationJobS3InputDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3InputFormatHasBeenSet)
  {
   payload.WithString("s3InputFormat", S3InputFormatMapper::GetNameForS3InputFormat(m_s3InputFormat));
  }

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("s3Uri", m_s3Uri);

  }

  if(m_s3BucketOwnerHasBeenSet)
  {
   payload.WithString("s3BucketOwner", m_s3BucketOwner);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
