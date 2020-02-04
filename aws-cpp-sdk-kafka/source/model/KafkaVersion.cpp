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
