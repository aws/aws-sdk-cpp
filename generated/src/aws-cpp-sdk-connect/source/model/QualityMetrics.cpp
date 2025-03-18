/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/QualityMetrics.h>
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

QualityMetrics::QualityMetrics(JsonView jsonValue)
{
  *this = jsonValue;
}

QualityMetrics& QualityMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Agent"))
  {
    m_agent = jsonValue.GetObject("Agent");
    m_agentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Customer"))
  {
    m_customer = jsonValue.GetObject("Customer");
    m_customerHasBeenSet = true;
  }
  return *this;
}

JsonValue QualityMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_agentHasBeenSet)
  {
   payload.WithObject("Agent", m_agent.Jsonize());

  }

  if(m_customerHasBeenSet)
  {
   payload.WithObject("Customer", m_customer.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
