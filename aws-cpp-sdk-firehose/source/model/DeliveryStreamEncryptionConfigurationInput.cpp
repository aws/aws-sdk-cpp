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

#include <aws/firehose/model/DeliveryStreamEncryptionConfigurationInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

DeliveryStreamEncryptionConfigurationInput::DeliveryStreamEncryptionConfigurationInput() : 
    m_keyARNHasBeenSet(false),
    m_keyType(KeyType::NOT_SET),
    m_keyTypeHasBeenSet(false)
{
}

DeliveryStreamEncryptionConfigurationInput::DeliveryStreamEncryptionConfigurationInput(JsonView jsonValue) : 
    m_keyARNHasBeenSet(false),
    m_keyType(KeyType::NOT_SET),
    m_keyTypeHasBeenSet(false)
{
  *this = jsonValue;
}

DeliveryStreamEncryptionConfigurationInput& DeliveryStreamEncryptionConfigurationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyARN"))
  {
    m_keyARN = jsonValue.GetString("KeyARN");

    m_keyARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyType"))
  {
    m_keyType = KeyTypeMapper::GetKeyTypeForName(jsonValue.GetString("KeyType"));

    m_keyTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue DeliveryStreamEncryptionConfigurationInput::Jsonize() const
{
  JsonValue payload;

  if(m_keyARNHasBeenSet)
  {
   payload.WithString("KeyARN", m_keyARN);

  }

  if(m_keyTypeHasBeenSet)
  {
   payload.WithString("KeyType", KeyTypeMapper::GetNameForKeyType(m_keyType));
  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
