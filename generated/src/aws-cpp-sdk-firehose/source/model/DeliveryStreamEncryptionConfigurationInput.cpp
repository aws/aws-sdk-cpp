/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
