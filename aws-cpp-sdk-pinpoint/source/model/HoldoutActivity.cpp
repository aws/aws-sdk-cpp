/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/HoldoutActivity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

HoldoutActivity::HoldoutActivity() : 
    m_nextActivityHasBeenSet(false),
    m_percentage(0),
    m_percentageHasBeenSet(false)
{
}

HoldoutActivity::HoldoutActivity(JsonView jsonValue) : 
    m_nextActivityHasBeenSet(false),
    m_percentage(0),
    m_percentageHasBeenSet(false)
{
  *this = jsonValue;
}

HoldoutActivity& HoldoutActivity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NextActivity"))
  {
    m_nextActivity = jsonValue.GetString("NextActivity");

    m_nextActivityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Percentage"))
  {
    m_percentage = jsonValue.GetInteger("Percentage");

    m_percentageHasBeenSet = true;
  }

  return *this;
}

JsonValue HoldoutActivity::Jsonize() const
{
  JsonValue payload;

  if(m_nextActivityHasBeenSet)
  {
   payload.WithString("NextActivity", m_nextActivity);

  }

  if(m_percentageHasBeenSet)
  {
   payload.WithInteger("Percentage", m_percentage);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
