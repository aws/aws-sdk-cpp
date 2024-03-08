/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/DifferentialPrivacyPreviewAggregation.h>
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

DifferentialPrivacyPreviewAggregation::DifferentialPrivacyPreviewAggregation() : 
    m_type(DifferentialPrivacyAggregationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_maxCount(0),
    m_maxCountHasBeenSet(false)
{
}

DifferentialPrivacyPreviewAggregation::DifferentialPrivacyPreviewAggregation(JsonView jsonValue) : 
    m_type(DifferentialPrivacyAggregationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_maxCount(0),
    m_maxCountHasBeenSet(false)
{
  *this = jsonValue;
}

DifferentialPrivacyPreviewAggregation& DifferentialPrivacyPreviewAggregation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = DifferentialPrivacyAggregationTypeMapper::GetDifferentialPrivacyAggregationTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxCount"))
  {
    m_maxCount = jsonValue.GetInteger("maxCount");

    m_maxCountHasBeenSet = true;
  }

  return *this;
}

JsonValue DifferentialPrivacyPreviewAggregation::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", DifferentialPrivacyAggregationTypeMapper::GetNameForDifferentialPrivacyAggregationType(m_type));
  }

  if(m_maxCountHasBeenSet)
  {
   payload.WithInteger("maxCount", m_maxCount);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
