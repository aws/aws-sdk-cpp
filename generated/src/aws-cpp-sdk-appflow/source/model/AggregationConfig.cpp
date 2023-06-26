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
    m_aggregationTypeHasBeenSet(false),
    m_targetFileSize(0),
    m_targetFileSizeHasBeenSet(false)
{
}

AggregationConfig::AggregationConfig(JsonView jsonValue) : 
    m_aggregationType(AggregationType::NOT_SET),
    m_aggregationTypeHasBeenSet(false),
    m_targetFileSize(0),
    m_targetFileSizeHasBeenSet(false)
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

  if(jsonValue.ValueExists("targetFileSize"))
  {
    m_targetFileSize = jsonValue.GetInt64("targetFileSize");

    m_targetFileSizeHasBeenSet = true;
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

  if(m_targetFileSizeHasBeenSet)
  {
   payload.WithInt64("targetFileSize", m_targetFileSize);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
