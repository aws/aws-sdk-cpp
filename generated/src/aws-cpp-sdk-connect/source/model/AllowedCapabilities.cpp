/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AllowedCapabilities.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

AllowedCapabilities::AllowedCapabilities() : 
    m_customerHasBeenSet(false),
    m_agentHasBeenSet(false)
{
}

AllowedCapabilities::AllowedCapabilities(JsonView jsonValue) : 
    m_customerHasBeenSet(false),
    m_agentHasBeenSet(false)
{
  *this = jsonValue;
}

AllowedCapabilities& AllowedCapabilities::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Customer"))
  {
    m_customer = jsonValue.GetObject("Customer");

    m_customerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Agent"))
  {
    m_agent = jsonValue.GetObject("Agent");

    m_agentHasBeenSet = true;
  }

  return *this;
}

JsonValue AllowedCapabilities::Jsonize() const
{
  JsonValue payload;

  if(m_customerHasBeenSet)
  {
   payload.WithObject("Customer", m_customer.Jsonize());

  }

  if(m_agentHasBeenSet)
  {
   payload.WithObject("Agent", m_agent.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
