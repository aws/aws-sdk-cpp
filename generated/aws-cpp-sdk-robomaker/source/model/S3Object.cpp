/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/S3Object.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

S3Object::S3Object() : 
    m_bucketHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_etagHasBeenSet(false)
{
}

S3Object::S3Object(JsonView jsonValue) : 
    m_bucketHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_etagHasBeenSet(false)
{
  *this = jsonValue;
}

S3Object& S3Object::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucket"))
  {
    m_bucket = jsonValue.GetString("bucket");

    m_bucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("etag"))
  {
    m_etag = jsonValue.GetString("etag");

    m_etagHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Object::Jsonize() const
{
  JsonValue payload;

  if(m_bucketHasBeenSet)
  {
   payload.WithString("bucket", m_bucket);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_etagHasBeenSet)
  {
   payload.WithString("etag", m_etag);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
