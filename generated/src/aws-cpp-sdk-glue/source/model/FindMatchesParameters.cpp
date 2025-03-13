/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/FindMatchesParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

FindMatchesParameters::FindMatchesParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

FindMatchesParameters& FindMatchesParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrimaryKeyColumnName"))
  {
    m_primaryKeyColumnName = jsonValue.GetString("PrimaryKeyColumnName");
    m_primaryKeyColumnNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PrecisionRecallTradeoff"))
  {
    m_precisionRecallTradeoff = jsonValue.GetDouble("PrecisionRecallTradeoff");
    m_precisionRecallTradeoffHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccuracyCostTradeoff"))
  {
    m_accuracyCostTradeoff = jsonValue.GetDouble("AccuracyCostTradeoff");
    m_accuracyCostTradeoffHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnforceProvidedLabels"))
  {
    m_enforceProvidedLabels = jsonValue.GetBool("EnforceProvidedLabels");
    m_enforceProvidedLabelsHasBeenSet = true;
  }
  return *this;
}

JsonValue FindMatchesParameters::Jsonize() const
{
  JsonValue payload;

  if(m_primaryKeyColumnNameHasBeenSet)
  {
   payload.WithString("PrimaryKeyColumnName", m_primaryKeyColumnName);

  }

  if(m_precisionRecallTradeoffHasBeenSet)
  {
   payload.WithDouble("PrecisionRecallTradeoff", m_precisionRecallTradeoff);

  }

  if(m_accuracyCostTradeoffHasBeenSet)
  {
   payload.WithDouble("AccuracyCostTradeoff", m_accuracyCostTradeoff);

  }

  if(m_enforceProvidedLabelsHasBeenSet)
  {
   payload.WithBool("EnforceProvidedLabels", m_enforceProvidedLabels);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
