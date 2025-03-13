/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TimestampedInclusionAnnotation.h>
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

TimestampedInclusionAnnotation::TimestampedInclusionAnnotation(JsonView jsonValue)
{
  *this = jsonValue;
}

TimestampedInclusionAnnotation& TimestampedInclusionAnnotation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = InclusionAnnotationValueMapper::GetInclusionAnnotationValueForName(jsonValue.GetString("Value"));
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedOn"))
  {
    m_lastModifiedOn = jsonValue.GetDouble("LastModifiedOn");
    m_lastModifiedOnHasBeenSet = true;
  }
  return *this;
}

JsonValue TimestampedInclusionAnnotation::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", InclusionAnnotationValueMapper::GetNameForInclusionAnnotationValue(m_value));
  }

  if(m_lastModifiedOnHasBeenSet)
  {
   payload.WithDouble("LastModifiedOn", m_lastModifiedOn.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
