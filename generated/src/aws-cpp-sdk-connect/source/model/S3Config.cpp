/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/S3Config.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

S3Config::S3Config() : 
    m_bucketNameHasBeenSet(false),
    m_bucketPrefixHasBeenSet(false),
    m_encryptionConfigHasBeenSet(false)
{
}

S3Config::S3Config(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_bucketPrefixHasBeenSet(false),
    m_encryptionConfigHasBeenSet(false)
{
  *this = jsonValue;
}

S3Config& S3Config::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("EncryptionConfig"))
  {
    m_encryptionConfig = jsonValue.GetObject("EncryptionConfig");

    m_encryptionConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Config::Jsonize() const
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

  if(m_encryptionConfigHasBeenSet)
  {
   payload.WithObject("EncryptionConfig", m_encryptionConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
