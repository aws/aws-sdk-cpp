/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/DeliveryStreamEncryptionConfiguration.h>
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

DeliveryStreamEncryptionConfiguration::DeliveryStreamEncryptionConfiguration() : 
    m_keyARNHasBeenSet(false),
    m_keyType(KeyType::NOT_SET),
    m_keyTypeHasBeenSet(false),
    m_status(DeliveryStreamEncryptionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failureDescriptionHasBeenSet(false)
{
}

DeliveryStreamEncryptionConfiguration::DeliveryStreamEncryptionConfiguration(JsonView jsonValue) : 
    m_keyARNHasBeenSet(false),
    m_keyType(KeyType::NOT_SET),
    m_keyTypeHasBeenSet(false),
    m_status(DeliveryStreamEncryptionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failureDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

DeliveryStreamEncryptionConfiguration& DeliveryStreamEncryptionConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DeliveryStreamEncryptionStatusMapper::GetDeliveryStreamEncryptionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureDescription"))
  {
    m_failureDescription = jsonValue.GetObject("FailureDescription");

    m_failureDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue DeliveryStreamEncryptionConfiguration::Jsonize() const
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

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DeliveryStreamEncryptionStatusMapper::GetNameForDeliveryStreamEncryptionStatus(m_status));
  }

  if(m_failureDescriptionHasBeenSet)
  {
   payload.WithObject("FailureDescription", m_failureDescription.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
