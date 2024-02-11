/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/AudienceModelMetric.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

AudienceModelMetric::AudienceModelMetric() : 
    m_forTopKItemPredictions(0),
    m_forTopKItemPredictionsHasBeenSet(false),
    m_type(AudienceModelMetricType::NOT_SET),
    m_typeHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
}

AudienceModelMetric::AudienceModelMetric(JsonView jsonValue) : 
    m_forTopKItemPredictions(0),
    m_forTopKItemPredictionsHasBeenSet(false),
    m_type(AudienceModelMetricType::NOT_SET),
    m_typeHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

AudienceModelMetric& AudienceModelMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("forTopKItemPredictions"))
  {
    m_forTopKItemPredictions = jsonValue.GetInteger("forTopKItemPredictions");

    m_forTopKItemPredictionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = AudienceModelMetricTypeMapper::GetAudienceModelMetricTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetDouble("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue AudienceModelMetric::Jsonize() const
{
  JsonValue payload;

  if(m_forTopKItemPredictionsHasBeenSet)
  {
   payload.WithInteger("forTopKItemPredictions", m_forTopKItemPredictions);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", AudienceModelMetricTypeMapper::GetNameForAudienceModelMetricType(m_type));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
