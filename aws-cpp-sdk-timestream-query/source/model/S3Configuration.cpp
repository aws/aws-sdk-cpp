/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/S3Configuration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

S3Configuration::S3Configuration() : 
    m_bucketNameHasBeenSet(false),
    m_objectKeyPrefixHasBeenSet(false),
    m_encryptionOption(S3EncryptionOption::NOT_SET),
    m_encryptionOptionHasBeenSet(false)
{
}

S3Configuration::S3Configuration(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_objectKeyPrefixHasBeenSet(false),
    m_encryptionOption(S3EncryptionOption::NOT_SET),
    m_encryptionOptionHasBeenSet(false)
{
  *this = jsonValue;
}

S3Configuration& S3Configuration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketName"))
  {
    m_bucketName = jsonValue.GetString("BucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectKeyPrefix"))
  {
    m_objectKeyPrefix = jsonValue.GetString("ObjectKeyPrefix");

    m_objectKeyPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionOption"))
  {
    m_encryptionOption = S3EncryptionOptionMapper::GetS3EncryptionOptionForName(jsonValue.GetString("EncryptionOption"));

    m_encryptionOptionHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Configuration::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("BucketName", m_bucketName);

  }

  if(m_objectKeyPrefixHasBeenSet)
  {
   payload.WithString("ObjectKeyPrefix", m_objectKeyPrefix);

  }

  if(m_encryptionOptionHasBeenSet)
  {
   payload.WithString("EncryptionOption", S3EncryptionOptionMapper::GetNameForS3EncryptionOption(m_encryptionOption));
  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
