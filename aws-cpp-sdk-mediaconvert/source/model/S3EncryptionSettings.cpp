/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/S3EncryptionSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

S3EncryptionSettings::S3EncryptionSettings() : 
    m_encryptionType(S3ServerSideEncryptionType::NOT_SET),
    m_encryptionTypeHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
}

S3EncryptionSettings::S3EncryptionSettings(JsonView jsonValue) : 
    m_encryptionType(S3ServerSideEncryptionType::NOT_SET),
    m_encryptionTypeHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
  *this = jsonValue;
}

S3EncryptionSettings& S3EncryptionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encryptionType"))
  {
    m_encryptionType = S3ServerSideEncryptionTypeMapper::GetS3ServerSideEncryptionTypeForName(jsonValue.GetString("encryptionType"));

    m_encryptionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue S3EncryptionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionTypeHasBeenSet)
  {
   payload.WithString("encryptionType", S3ServerSideEncryptionTypeMapper::GetNameForS3ServerSideEncryptionType(m_encryptionType));
  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
