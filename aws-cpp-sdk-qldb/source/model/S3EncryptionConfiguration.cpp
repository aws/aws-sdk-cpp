/*
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

#include <aws/qldb/model/S3EncryptionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QLDB
{
namespace Model
{

S3EncryptionConfiguration::S3EncryptionConfiguration() : 
    m_objectEncryptionType(S3ObjectEncryptionType::NOT_SET),
    m_objectEncryptionTypeHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
}

S3EncryptionConfiguration::S3EncryptionConfiguration(JsonView jsonValue) : 
    m_objectEncryptionType(S3ObjectEncryptionType::NOT_SET),
    m_objectEncryptionTypeHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
  *this = jsonValue;
}

S3EncryptionConfiguration& S3EncryptionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ObjectEncryptionType"))
  {
    m_objectEncryptionType = S3ObjectEncryptionTypeMapper::GetS3ObjectEncryptionTypeForName(jsonValue.GetString("ObjectEncryptionType"));

    m_objectEncryptionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue S3EncryptionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_objectEncryptionTypeHasBeenSet)
  {
   payload.WithString("ObjectEncryptionType", S3ObjectEncryptionTypeMapper::GetNameForS3ObjectEncryptionType(m_objectEncryptionType));
  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace QLDB
} // namespace Aws
