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

#include <aws/macie2/model/ServerSideEncryption.h>
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

ServerSideEncryption::ServerSideEncryption() : 
    m_encryptionType(EncryptionType::NOT_SET),
    m_encryptionTypeHasBeenSet(false),
    m_kmsMasterKeyIdHasBeenSet(false)
{
}

ServerSideEncryption::ServerSideEncryption(JsonView jsonValue) : 
    m_encryptionType(EncryptionType::NOT_SET),
    m_encryptionTypeHasBeenSet(false),
    m_kmsMasterKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

ServerSideEncryption& ServerSideEncryption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encryptionType"))
  {
    m_encryptionType = EncryptionTypeMapper::GetEncryptionTypeForName(jsonValue.GetString("encryptionType"));

    m_encryptionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsMasterKeyId"))
  {
    m_kmsMasterKeyId = jsonValue.GetString("kmsMasterKeyId");

    m_kmsMasterKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerSideEncryption::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionTypeHasBeenSet)
  {
   payload.WithString("encryptionType", EncryptionTypeMapper::GetNameForEncryptionType(m_encryptionType));
  }

  if(m_kmsMasterKeyIdHasBeenSet)
  {
   payload.WithString("kmsMasterKeyId", m_kmsMasterKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
