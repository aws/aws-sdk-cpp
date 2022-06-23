/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/S3SourceProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

S3SourceProperties::S3SourceProperties() : 
    m_bucketNameHasBeenSet(false),
    m_bucketPrefixHasBeenSet(false)
{
}

S3SourceProperties::S3SourceProperties(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_bucketPrefixHasBeenSet(false)
{
  *this = jsonValue;
}

S3SourceProperties& S3SourceProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketName"))
  {
    m_bucketName = jsonValue.GetString("BucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BucketPrefix"))
  {
    m_bucketPrefix = jsonValue.GetString("BucketPrefix");

    m_bucketPrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue S3SourceProperties::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("BucketName", m_bucketName);

  }

  if(m_bucketPrefixHasBeenSet)
  {
   payload.WithString("BucketPrefix", m_bucketPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
