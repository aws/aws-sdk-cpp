/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/KafkaClusterEncryptionInTransit.h>
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

KafkaClusterEncryptionInTransit::KafkaClusterEncryptionInTransit() : 
    m_encryptionType(KafkaClusterEncryptionInTransitType::NOT_SET),
    m_encryptionTypeHasBeenSet(false)
{
}

KafkaClusterEncryptionInTransit::KafkaClusterEncryptionInTransit(JsonView jsonValue) : 
    m_encryptionType(KafkaClusterEncryptionInTransitType::NOT_SET),
    m_encryptionTypeHasBeenSet(false)
{
  *this = jsonValue;
}

KafkaClusterEncryptionInTransit& KafkaClusterEncryptionInTransit::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encryptionType"))
  {
    m_encryptionType = KafkaClusterEncryptionInTransitTypeMapper::GetKafkaClusterEncryptionInTransitTypeForName(jsonValue.GetString("encryptionType"));

    m_encryptionTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue KafkaClusterEncryptionInTransit::Jsonize() const
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
