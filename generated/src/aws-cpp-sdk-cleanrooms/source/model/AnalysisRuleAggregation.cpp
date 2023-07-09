/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AnalysisRuleAggregation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

AnalysisRuleAggregation::AnalysisRuleAggregation() : 
    m_aggregateColumnsHasBeenSet(false),
    m_joinColumnsHasBeenSet(false),
    m_joinRequired(JoinRequiredOption::NOT_SET),
    m_joinRequiredHasBeenSet(false),
    m_allowedJoinOperatorsHasBeenSet(false),
    m_dimensionColumnsHasBeenSet(false),
    m_scalarFunctionsHasBeenSet(false),
    m_outputConstraintsHasBeenSet(false)
{
}

AnalysisRuleAggregation::AnalysisRuleAggregation(JsonView jsonValue) : 
    m_aggregateColumnsHasBeenSet(false),
    m_joinColumnsHasBeenSet(false),
    m_joinRequired(JoinRequiredOption::NOT_SET),
    m_joinRequiredHasBeenSet(false),
    m_allowedJoinOperatorsHasBeenSet(false),
    m_dimensionColumnsHasBeenSet(false),
    m_scalarFunctionsHasBeenSet(false),
    m_outputConstraintsHasBeenSet(false)
{
  *this = jsonValue;
}

AnalysisRuleAggregation& AnalysisRuleAggregation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("aggregateColumns"))
  {
    Aws::Utils::Array<JsonView> aggregateColumnsJsonList = jsonValue.GetArray("aggregateColumns");
    for(unsigned aggregateColumnsIndex = 0; aggregateColumnsIndex < aggregateColumnsJsonList.GetLength(); ++aggregateColumnsIndex)
    {
      m_aggregateColumns.push_back(aggregateColumnsJsonList[aggregateColumnsIndex].AsObject());
    }
    m_aggregateColumnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("joinColumns"))
  {
    Aws::Utils::Array<JsonView> joinColumnsJsonList = jsonValue.GetArray("joinColumns");
    for(unsigned joinColumnsIndex = 0; joinColumnsIndex < joinColumnsJsonList.GetLength(); ++joinColumnsIndex)
    {
      m_joinColumns.push_back(joinColumnsJsonList[joinColumnsIndex].AsString());
    }
    m_joinColumnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("joinRequired"))
  {
    m_joinRequired = JoinRequiredOptionMapper::GetJoinRequiredOptionForName(jsonValue.GetString("joinRequired"));

    m_joinRequiredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allowedJoinOperators"))
  {
    Aws::Utils::Array<JsonView> allowedJoinOperatorsJsonList = jsonValue.GetArray("allowedJoinOperators");
    for(unsigned allowedJoinOperatorsIndex = 0; allowedJoinOperatorsIndex < allowedJoinOperatorsJsonList.GetLength(); ++allowedJoinOperatorsIndex)
    {
      m_allowedJoinOperators.push_back(JoinOperatorMapper::GetJoinOperatorForName(allowedJoinOperatorsJsonList[allowedJoinOperatorsIndex].AsString()));
    }
    m_allowedJoinOperatorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dimensionColumns"))
  {
    Aws::Utils::Array<JsonView> dimensionColumnsJsonList = jsonValue.GetArray("dimensionColumns");
    for(unsigned dimensionColumnsIndex = 0; dimensionColumnsIndex < dimensionColumnsJsonList.GetLength(); ++dimensionColumnsIndex)
    {
      m_dimensionColumns.push_back(dimensionColumnsJsonList[dimensionColumnsIndex].AsString());
    }
    m_dimensionColumnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scalarFunctions"))
  {
    Aws::Utils::Array<JsonView> scalarFunctionsJsonList = jsonValue.GetArray("scalarFunctions");
    for(unsigned scalarFunctionsIndex = 0; scalarFunctionsIndex < scalarFunctionsJsonList.GetLength(); ++scalarFunctionsIndex)
    {
      m_scalarFunctions.push_back(ScalarFunctionsMapper::GetScalarFunctionsForName(scalarFunctionsJsonList[scalarFunctionsIndex].AsString()));
    }
    m_scalarFunctionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputConstraints"))
  {
    Aws::Utils::Array<JsonView> outputConstraintsJsonList = jsonValue.GetArray("outputConstraints");
    for(unsigned outputConstraintsIndex = 0; outputConstraintsIndex < outputConstraintsJsonList.GetLength(); ++outputConstraintsIndex)
    {
      m_outputConstraints.push_back(outputConstraintsJsonList[outputConstraintsIndex].AsObject());
    }
    m_outputConstraintsHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalysisRuleAggregation::Jsonize() const
{
  JsonValue payload;

  if(m_aggregateColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aggregateColumnsJsonList(m_aggregateColumns.size());
   for(unsigned aggregateColumnsIndex = 0; aggregateColumnsIndex < aggregateColumnsJsonList.GetLength(); ++aggregateColumnsIndex)
   {
     aggregateColumnsJsonList[aggregateColumnsIndex].AsObject(m_aggregateColumns[aggregateColumnsIndex].Jsonize());
   }
   payload.WithArray("aggregateColumns", std::move(aggregateColumnsJsonList));

  }

  if(m_joinColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> joinColumnsJsonList(m_joinColumns.size());
   for(unsigned joinColumnsIndex = 0; joinColumnsIndex < joinColumnsJsonList.GetLength(); ++joinColumnsIndex)
   {
     joinColumnsJsonList[joinColumnsIndex].AsString(m_joinColumns[joinColumnsIndex]);
   }
   payload.WithArray("joinColumns", std::move(joinColumnsJsonList));

  }

  if(m_joinRequiredHasBeenSet)
  {
   payload.WithString("joinRequired", JoinRequiredOptionMapper::GetNameForJoinRequiredOption(m_joinRequired));
  }

  if(m_allowedJoinOperatorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedJoinOperatorsJsonList(m_allowedJoinOperators.size());
   for(unsigned allowedJoinOperatorsIndex = 0; allowedJoinOperatorsIndex < allowedJoinOperatorsJsonList.GetLength(); ++allowedJoinOperatorsIndex)
   {
     allowedJoinOperatorsJsonList[allowedJoinOperatorsIndex].AsString(JoinOperatorMapper::GetNameForJoinOperator(m_allowedJoinOperators[allowedJoinOperatorsIndex]));
   }
   payload.WithArray("allowedJoinOperators", std::move(allowedJoinOperatorsJsonList));

  }

  if(m_dimensionColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dimensionColumnsJsonList(m_dimensionColumns.size());
   for(unsigned dimensionColumnsIndex = 0; dimensionColumnsIndex < dimensionColumnsJsonList.GetLength(); ++dimensionColumnsIndex)
   {
     dimensionColumnsJsonList[dimensionColumnsIndex].AsString(m_dimensionColumns[dimensionColumnsIndex]);
   }
   payload.WithArray("dimensionColumns", std::move(dimensionColumnsJsonList));

  }

  if(m_scalarFunctionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scalarFunctionsJsonList(m_scalarFunctions.size());
   for(unsigned scalarFunctionsIndex = 0; scalarFunctionsIndex < scalarFunctionsJsonList.GetLength(); ++scalarFunctionsIndex)
   {
     scalarFunctionsJsonList[scalarFunctionsIndex].AsString(ScalarFunctionsMapper::GetNameForScalarFunctions(m_scalarFunctions[scalarFunctionsIndex]));
   }
   payload.WithArray("scalarFunctions", std::move(scalarFunctionsJsonList));

  }

  if(m_outputConstraintsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputConstraintsJsonList(m_outputConstraints.size());
   for(unsigned outputConstraintsIndex = 0; outputConstraintsIndex < outputConstraintsJsonList.GetLength(); ++outputConstraintsIndex)
   {
     outputConstraintsJsonList[outputConstraintsIndex].AsObject(m_outputConstraints[outputConstraintsIndex].Jsonize());
   }
   payload.WithArray("outputConstraints", std::move(outputConstraintsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
