/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/Unauthenticated.h>
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

Unauthenticated::Unauthenticated() : 
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

Unauthenticated::Unauthenticated(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
  *this = jsonValue;
}

Unauthenticated& Unauthenticated::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  return *this;
}

JsonValue Unauthenticated::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
