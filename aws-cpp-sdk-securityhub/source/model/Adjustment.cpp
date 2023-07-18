/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Adjustment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

Adjustment::Adjustment() : 
    m_metricHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

Adjustment::Adjustment(JsonView jsonValue) : 
    m_metricHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

Adjustment& Adjustment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Metric"))
  {
    m_metric = jsonValue.GetString("Metric");

    m_metricHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = jsonValue.GetString("Reason");

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue Adjustment::Jsonize() const
{
  JsonValue payload;

  if(m_metricHasBeenSet)
  {
   payload.WithString("Metric", m_metric);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", m_reason);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
