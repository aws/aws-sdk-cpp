/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/CalculationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

CalculationSummary::CalculationSummary() : 
    m_calculationExecutionIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CalculationSummary::CalculationSummary(JsonView jsonValue) : 
    m_calculationExecutionIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

CalculationSummary& CalculationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CalculationExecutionId"))
  {
    m_calculationExecutionId = jsonValue.GetString("CalculationExecutionId");

    m_calculationExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue CalculationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_calculationExecutionIdHasBeenSet)
  {
   payload.WithString("CalculationExecutionId", m_calculationExecutionId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
