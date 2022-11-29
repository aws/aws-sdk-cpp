/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SheetControlLayoutConfiguration.h>
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

SheetControlLayoutConfiguration::SheetControlLayoutConfiguration() : 
    m_gridLayoutHasBeenSet(false)
{
}

SheetControlLayoutConfiguration::SheetControlLayoutConfiguration(JsonView jsonValue) : 
    m_gridLayoutHasBeenSet(false)
{
  *this = jsonValue;
}

SheetControlLayoutConfiguration& SheetControlLayoutConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GridLayout"))
  {
    m_gridLayout = jsonValue.GetObject("GridLayout");

    m_gridLayoutHasBeenSet = true;
  }

  return *this;
}

JsonValue SheetControlLayoutConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_gridLayoutHasBeenSet)
  {
   payload.WithObject("GridLayout", m_gridLayout.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
