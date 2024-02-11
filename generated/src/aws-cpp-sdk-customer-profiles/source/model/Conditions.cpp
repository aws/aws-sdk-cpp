/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/Conditions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

Conditions::Conditions() : 
    m_rangeHasBeenSet(false),
    m_objectCount(0),
    m_objectCountHasBeenSet(false),
    m_thresholdHasBeenSet(false)
{
}

Conditions::Conditions(JsonView jsonValue) : 
    m_rangeHasBeenSet(false),
    m_objectCount(0),
    m_objectCountHasBeenSet(false),
    m_thresholdHasBeenSet(false)
{
  *this = jsonValue;
}

Conditions& Conditions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Range"))
  {
    m_range = jsonValue.GetObject("Range");

    m_rangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectCount"))
  {
    m_objectCount = jsonValue.GetInteger("ObjectCount");

    m_objectCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Threshold"))
  {
    m_threshold = jsonValue.GetObject("Threshold");

    m_thresholdHasBeenSet = true;
  }

  return *this;
}

JsonValue Conditions::Jsonize() const
{
  JsonValue payload;

  if(m_rangeHasBeenSet)
  {
   payload.WithObject("Range", m_range.Jsonize());

  }

  if(m_objectCountHasBeenSet)
  {
   payload.WithInteger("ObjectCount", m_objectCount);

  }

  if(m_thresholdHasBeenSet)
  {
   payload.WithObject("Threshold", m_threshold.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
