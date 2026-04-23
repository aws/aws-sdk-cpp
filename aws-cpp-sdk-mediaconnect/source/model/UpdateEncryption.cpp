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

#include <aws/mediaconnect/model/UpdateEncryption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

UpdateEncryption::UpdateEncryption() : 
    m_algorithm(Algorithm::NOT_SET),
    m_algorithmHasBeenSet(false),
    m_keyType(KeyType::NOT_SET),
    m_keyTypeHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_secretArnHasBeenSet(false)
{
}

UpdateEncryption::UpdateEncryption(JsonView jsonValue) : 
    m_algorithm(Algorithm::NOT_SET),
    m_algorithmHasBeenSet(false),
    m_keyType(KeyType::NOT_SET),
    m_keyTypeHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_secretArnHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateEncryption& UpdateEncryption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("algorithm"))
  {
    m_algorithm = AlgorithmMapper::GetAlgorithmForName(jsonValue.GetString("algorithm"));

    m_algorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyType"))
  {
    m_keyType = KeyTypeMapper::GetKeyTypeForName(jsonValue.GetString("keyType"));

    m_keyTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secretArn"))
  {
    m_secretArn = jsonValue.GetString("secretArn");

    m_secretArnHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateEncryption::Jsonize() const
{
  JsonValue payload;

  if(m_algorithmHasBeenSet)
  {
   payload.WithString("algorithm", AlgorithmMapper::GetNameForAlgorithm(m_algorithm));
  }

  if(m_keyTypeHasBeenSet)
  {
   payload.WithString("keyType", KeyTypeMapper::GetNameForKeyType(m_keyType));
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("secretArn", m_secretArn);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
