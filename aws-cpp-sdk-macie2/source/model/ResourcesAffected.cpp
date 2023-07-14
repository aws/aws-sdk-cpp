/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/ResourcesAffected.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

ResourcesAffected::ResourcesAffected() : 
    m_s3BucketHasBeenSet(false),
    m_s3ObjectHasBeenSet(false)
{
}

ResourcesAffected::ResourcesAffected(JsonView jsonValue) : 
    m_s3BucketHasBeenSet(false),
    m_s3ObjectHasBeenSet(false)
{
  *this = jsonValue;
}

ResourcesAffected& ResourcesAffected::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Bucket"))
  {
    m_s3Bucket = jsonValue.GetObject("s3Bucket");

    m_s3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Object"))
  {
    m_s3Object = jsonValue.GetObject("s3Object");

    m_s3ObjectHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourcesAffected::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketHasBeenSet)
  {
   payload.WithObject("s3Bucket", m_s3Bucket.Jsonize());

  }

  if(m_s3ObjectHasBeenSet)
  {
   payload.WithObject("s3Object", m_s3Object.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
