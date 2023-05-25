/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/KafkaClusterEncryptionInTransitDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KafkaConnect
{
namespace Model
{

KafkaClusterEncryptionInTransitDescription::KafkaClusterEncryptionInTransitDescription() : 
    m_encryptionType(KafkaClusterEncryptionInTransitType::NOT_SET),
    m_encryptionTypeHasBeenSet(false)
{
}

KafkaClusterEncryptionInTransitDescription::KafkaClusterEncryptionInTransitDescription(JsonView jsonValue) : 
    m_encryptionType(KafkaClusterEncryptionInTransitType::NOT_SET),
    m_encryptionTypeHasBeenSet(false)
{
  *this = jsonValue;
}

KafkaClusterEncryptionInTransitDescription& KafkaClusterEncryptionInTransitDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encryptionType"))
  {
    m_encryptionType = KafkaClusterEncryptionInTransitTypeMapper::GetKafkaClusterEncryptionInTransitTypeForName(jsonValue.GetString("encryptionType"));

    m_encryptionTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue KafkaClusterEncryptionInTransitDescription::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionTypeHasBeenSet)
  {
   payload.WithString("encryptionType", KafkaClusterEncryptionInTransitTypeMapper::GetNameForKafkaClusterEncryptionInTransitType(m_encryptionType));
  }

  return payload;
}

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
