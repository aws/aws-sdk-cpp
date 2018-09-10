﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/glue/model/S3Encryption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

S3Encryption::S3Encryption() : 
    m_s3EncryptionMode(S3EncryptionMode::NOT_SET),
    m_s3EncryptionModeHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
}

S3Encryption::S3Encryption(JsonView jsonValue) : 
    m_s3EncryptionMode(S3EncryptionMode::NOT_SET),
    m_s3EncryptionModeHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
  *this = jsonValue;
}

S3Encryption& S3Encryption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3EncryptionMode"))
  {
    m_s3EncryptionMode = S3EncryptionModeMapper::GetS3EncryptionModeForName(jsonValue.GetString("S3EncryptionMode"));

    m_s3EncryptionModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Encryption::Jsonize() const
{
  JsonValue payload;

  if(m_s3EncryptionModeHasBeenSet)
  {
   payload.WithString("S3EncryptionMode", S3EncryptionModeMapper::GetNameForS3EncryptionMode(m_s3EncryptionMode));
  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
