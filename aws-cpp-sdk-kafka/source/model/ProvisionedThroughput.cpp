/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ProvisionedThroughput.h>
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

ProvisionedThroughput::ProvisionedThroughput() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_volumeThroughput(0),
    m_volumeThroughputHasBeenSet(false)
{
}

ProvisionedThroughput::ProvisionedThroughput(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_volumeThroughput(0),
    m_volumeThroughputHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisionedThroughput& ProvisionedThroughput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumeThroughput"))
  {
    m_volumeThroughput = jsonValue.GetInteger("volumeThroughput");

    m_volumeThroughputHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisionedThroughput::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_volumeThroughputHasBeenSet)
  {
   payload.WithInteger("volumeThroughput", m_volumeThroughput);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
