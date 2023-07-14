/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/AutoTerminationPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

AutoTerminationPolicy::AutoTerminationPolicy() : 
    m_idleTimeout(0),
    m_idleTimeoutHasBeenSet(false)
{
}

AutoTerminationPolicy::AutoTerminationPolicy(JsonView jsonValue) : 
    m_idleTimeout(0),
    m_idleTimeoutHasBeenSet(false)
{
  *this = jsonValue;
}

AutoTerminationPolicy& AutoTerminationPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IdleTimeout"))
  {
    m_idleTimeout = jsonValue.GetInt64("IdleTimeout");

    m_idleTimeoutHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoTerminationPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_idleTimeoutHasBeenSet)
  {
   payload.WithInt64("IdleTimeout", m_idleTimeout);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
