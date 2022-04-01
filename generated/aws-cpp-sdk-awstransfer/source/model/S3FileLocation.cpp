/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/S3FileLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

S3FileLocation::S3FileLocation() : 
    m_bucketHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_etagHasBeenSet(false)
{
}

S3FileLocation::S3FileLocation(JsonView jsonValue) : 
    m_bucketHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_etagHasBeenSet(false)
{
  *this = jsonValue;
}

S3FileLocation& S3FileLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Bucket"))
  {
    m_bucket = jsonValue.GetString("Bucket");

    m_bucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VersionId"))
  {
    m_versionId = jsonValue.GetString("VersionId");

    m_versionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Etag"))
  {
    m_etag = jsonValue.GetString("Etag");

    m_etagHasBeenSet = true;
  }

  return *this;
}

JsonValue S3FileLocation::Jsonize() const
{
  JsonValue payload;

  if(m_bucketHasBeenSet)
  {
   payload.WithString("Bucket", m_bucket);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_versionIdHasBeenSet)
  {
   payload.WithString("VersionId", m_versionId);

  }

  if(m_etagHasBeenSet)
  {
   payload.WithString("Etag", m_etag);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
