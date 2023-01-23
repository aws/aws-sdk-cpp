/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/FailoverConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

FailoverConfig::FailoverConfig() : 
    m_primaryHasBeenSet(false),
    m_secondaryHasBeenSet(false)
{
}

FailoverConfig::FailoverConfig(JsonView jsonValue) : 
    m_primaryHasBeenSet(false),
    m_secondaryHasBeenSet(false)
{
  *this = jsonValue;
}

FailoverConfig& FailoverConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Primary"))
  {
    m_primary = jsonValue.GetObject("Primary");

    m_primaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Secondary"))
  {
    m_secondary = jsonValue.GetObject("Secondary");

    m_secondaryHasBeenSet = true;
  }

  return *this;
}

JsonValue FailoverConfig::Jsonize() const
{
  JsonValue payload;

  if(m_primaryHasBeenSet)
  {
   payload.WithObject("Primary", m_primary.Jsonize());

  }

  if(m_secondaryHasBeenSet)
  {
   payload.WithObject("Secondary", m_secondary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
