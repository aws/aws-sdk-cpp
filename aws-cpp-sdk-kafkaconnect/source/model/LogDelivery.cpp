/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/LogDelivery.h>
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

LogDelivery::LogDelivery() : 
    m_workerLogDeliveryHasBeenSet(false)
{
}

LogDelivery::LogDelivery(JsonView jsonValue) : 
    m_workerLogDeliveryHasBeenSet(false)
{
  *this = jsonValue;
}

LogDelivery& LogDelivery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("workerLogDelivery"))
  {
    m_workerLogDelivery = jsonValue.GetObject("workerLogDelivery");

    m_workerLogDeliveryHasBeenSet = true;
  }

  return *this;
}

JsonValue LogDelivery::Jsonize() const
{
  JsonValue payload;

  if(m_workerLogDeliveryHasBeenSet)
  {
   payload.WithObject("workerLogDelivery", m_workerLogDelivery.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
