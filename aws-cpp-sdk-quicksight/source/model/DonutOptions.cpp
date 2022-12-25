/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DonutOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

DonutOptions::DonutOptions() : 
    m_arcOptionsHasBeenSet(false),
    m_donutCenterOptionsHasBeenSet(false)
{
}

DonutOptions::DonutOptions(JsonView jsonValue) : 
    m_arcOptionsHasBeenSet(false),
    m_donutCenterOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

DonutOptions& DonutOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ArcOptions"))
  {
    m_arcOptions = jsonValue.GetObject("ArcOptions");

    m_arcOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DonutCenterOptions"))
  {
    m_donutCenterOptions = jsonValue.GetObject("DonutCenterOptions");

    m_donutCenterOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue DonutOptions::Jsonize() const
{
  JsonValue payload;

  if(m_arcOptionsHasBeenSet)
  {
   payload.WithObject("ArcOptions", m_arcOptions.Jsonize());

  }

  if(m_donutCenterOptionsHasBeenSet)
  {
   payload.WithObject("DonutCenterOptions", m_donutCenterOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
