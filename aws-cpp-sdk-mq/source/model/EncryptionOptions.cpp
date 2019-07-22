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

#include <aws/mq/model/EncryptionOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

EncryptionOptions::EncryptionOptions() : 
    m_kmsKeyIdHasBeenSet(false),
    m_useAwsOwnedKey(false),
    m_useAwsOwnedKeyHasBeenSet(false)
{
}

EncryptionOptions::EncryptionOptions(JsonView jsonValue) : 
    m_kmsKeyIdHasBeenSet(false),
    m_useAwsOwnedKey(false),
    m_useAwsOwnedKeyHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionOptions& EncryptionOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("useAwsOwnedKey"))
  {
    m_useAwsOwnedKey = jsonValue.GetBool("useAwsOwnedKey");

    m_useAwsOwnedKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionOptions::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_useAwsOwnedKeyHasBeenSet)
  {
   payload.WithBool("useAwsOwnedKey", m_useAwsOwnedKey);

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
