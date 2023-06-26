/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/FlywheelIterationFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

FlywheelIterationFilter::FlywheelIterationFilter() : 
    m_creationTimeAfterHasBeenSet(false),
    m_creationTimeBeforeHasBeenSet(false)
{
}

FlywheelIterationFilter::FlywheelIterationFilter(JsonView jsonValue) : 
    m_creationTimeAfterHasBeenSet(false),
    m_creationTimeBeforeHasBeenSet(false)
{
  *this = jsonValue;
}

FlywheelIterationFilter& FlywheelIterationFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreationTimeAfter"))
  {
    m_creationTimeAfter = jsonValue.GetDouble("CreationTimeAfter");

    m_creationTimeAfterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTimeBefore"))
  {
    m_creationTimeBefore = jsonValue.GetDouble("CreationTimeBefore");

    m_creationTimeBeforeHasBeenSet = true;
  }

  return *this;
}

JsonValue FlywheelIterationFilter::Jsonize() const
{
  JsonValue payload;

  if(m_creationTimeAfterHasBeenSet)
  {
   payload.WithDouble("CreationTimeAfter", m_creationTimeAfter.SecondsWithMSPrecision());
  }

  if(m_creationTimeBeforeHasBeenSet)
  {
   payload.WithDouble("CreationTimeBefore", m_creationTimeBefore.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
