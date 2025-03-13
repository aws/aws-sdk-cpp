/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/StatisticAnnotation.h>
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

StatisticAnnotation::StatisticAnnotation(JsonView jsonValue)
{
  *this = jsonValue;
}

StatisticAnnotation& StatisticAnnotation::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("StatisticRecordedOn"))
  {
    m_statisticRecordedOn = jsonValue.GetDouble("StatisticRecordedOn");
    m_statisticRecordedOnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InclusionAnnotation"))
  {
    m_inclusionAnnotation = jsonValue.GetObject("InclusionAnnotation");
    m_inclusionAnnotationHasBeenSet = true;
  }
  return *this;
}

JsonValue StatisticAnnotation::Jsonize() const
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

  if(m_statisticRecordedOnHasBeenSet)
  {
   payload.WithDouble("StatisticRecordedOn", m_statisticRecordedOn.SecondsWithMSPrecision());
  }

  if(m_inclusionAnnotationHasBeenSet)
  {
   payload.WithObject("InclusionAnnotation", m_inclusionAnnotation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
