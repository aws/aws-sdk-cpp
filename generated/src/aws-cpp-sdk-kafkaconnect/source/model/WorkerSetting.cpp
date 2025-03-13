/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/WorkerSetting.h>
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

WorkerSetting::WorkerSetting(JsonView jsonValue)
{
  *this = jsonValue;
}

WorkerSetting& WorkerSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("capacity"))
  {
    m_capacity = jsonValue.GetObject("capacity");
    m_capacityHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkerSetting::Jsonize() const
{
  JsonValue payload;

  if(m_capacityHasBeenSet)
  {
   payload.WithObject("capacity", m_capacity.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
