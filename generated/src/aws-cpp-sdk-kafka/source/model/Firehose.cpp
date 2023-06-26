/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/Firehose.h>
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

Firehose::Firehose() : 
    m_deliveryStreamHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

Firehose::Firehose(JsonView jsonValue) : 
    m_deliveryStreamHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
  *this = jsonValue;
}

Firehose& Firehose::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deliveryStream"))
  {
    m_deliveryStream = jsonValue.GetString("deliveryStream");

    m_deliveryStreamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  return *this;
}

JsonValue Firehose::Jsonize() const
{
  JsonValue payload;

  if(m_deliveryStreamHasBeenSet)
  {
   payload.WithString("deliveryStream", m_deliveryStream);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
