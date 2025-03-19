/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DatapointInclusionAnnotation.h>
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

DatapointInclusionAnnotation::DatapointInclusionAnnotation(JsonView jsonValue)
{
  *this = jsonValue;
}

DatapointInclusionAnnotation& DatapointInclusionAnnotation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProfileId"))
  {
    m_profileId = jsonValue.GetString("ProfileId");
    m_profileIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatisticId"))
  {
    m_statisticId = jsonValue.GetString("StatisticId");
    m_statisticIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InclusionAnnotation"))
  {
    m_inclusionAnnotation = InclusionAnnotationValueMapper::GetInclusionAnnotationValueForName(jsonValue.GetString("InclusionAnnotation"));
    m_inclusionAnnotationHasBeenSet = true;
  }
  return *this;
}

JsonValue DatapointInclusionAnnotation::Jsonize() const
{
  JsonValue payload;

  if(m_profileIdHasBeenSet)
  {
   payload.WithString("ProfileId", m_profileId);

  }

  if(m_statisticIdHasBeenSet)
  {
   payload.WithString("StatisticId", m_statisticId);

  }

  if(m_inclusionAnnotationHasBeenSet)
  {
   payload.WithString("InclusionAnnotation", InclusionAnnotationValueMapper::GetNameForInclusionAnnotationValue(m_inclusionAnnotation));
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
