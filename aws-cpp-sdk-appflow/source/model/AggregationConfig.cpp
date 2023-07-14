/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/AggregationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

AggregationConfig::AggregationConfig() : 
    m_aggregationType(AggregationType::NOT_SET),
    m_aggregationTypeHasBeenSet(false)
{
}

AggregationConfig::AggregationConfig(JsonView jsonValue) : 
    m_aggregationType(AggregationType::NOT_SET),
    m_aggregationTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AggregationConfig& AggregationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("aggregationType"))
  {
    m_aggregationType = AggregationTypeMapper::GetAggregationTypeForName(jsonValue.GetString("aggregationType"));

    m_aggregationTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AggregationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_aggregationTypeHasBeenSet)
  {
   payload.WithString("aggregationType", AggregationTypeMapper::GetNameForAggregationType(m_aggregationType));
  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
