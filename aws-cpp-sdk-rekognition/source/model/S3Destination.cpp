/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/S3Destination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

S3Destination::S3Destination() : 
    m_bucketHasBeenSet(false),
    m_keyPrefixHasBeenSet(false)
{
}

S3Destination::S3Destination(JsonView jsonValue) : 
    m_bucketHasBeenSet(false),
    m_keyPrefixHasBeenSet(false)
{
  *this = jsonValue;
}

S3Destination& S3Destination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Bucket"))
  {
    m_bucket = jsonValue.GetString("Bucket");

    m_bucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyPrefix"))
  {
    m_keyPrefix = jsonValue.GetString("KeyPrefix");

    m_keyPrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Destination::Jsonize() const
{
  JsonValue payload;

  if(m_bucketHasBeenSet)
  {
   payload.WithString("Bucket", m_bucket);

  }

  if(m_keyPrefixHasBeenSet)
  {
   payload.WithString("KeyPrefix", m_keyPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
