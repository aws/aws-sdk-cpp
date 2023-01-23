/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/KafkaVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

KafkaVersion::KafkaVersion() : 
    m_versionHasBeenSet(false),
    m_status(KafkaVersionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

KafkaVersion::KafkaVersion(JsonView jsonValue) : 
    m_versionHasBeenSet(false),
    m_status(KafkaVersionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

KafkaVersion& KafkaVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = KafkaVersionStatusMapper::GetKafkaVersionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue KafkaVersion::Jsonize() const
{
  JsonValue payload;

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", KafkaVersionStatusMapper::GetNameForKafkaVersionStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
