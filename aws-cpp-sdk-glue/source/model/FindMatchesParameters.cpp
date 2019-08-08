/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

FindMatchesParameters::FindMatchesParameters() : 
    m_primaryKeyColumnNameHasBeenSet(false),
    m_precisionRecallTradeoff(0.0),
    m_precisionRecallTradeoffHasBeenSet(false),
    m_accuracyCostTradeoff(0.0),
    m_accuracyCostTradeoffHasBeenSet(false),
    m_enforceProvidedLabels(false),
    m_enforceProvidedLabelsHasBeenSet(false)
{
}

FindMatchesParameters::FindMatchesParameters(JsonView jsonValue) : 
    m_primaryKeyColumnNameHasBeenSet(false),
    m_precisionRecallTradeoff(0.0),
    m_precisionRecallTradeoffHasBeenSet(false),
    m_accuracyCostTradeoff(0.0),
    m_accuracyCostTradeoffHasBeenSet(false),
    m_enforceProvidedLabels(false),
    m_enforceProvidedLabelsHasBeenSet(false)
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
