/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SmallMultiplesOptions.h>
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

SmallMultiplesOptions::SmallMultiplesOptions() : 
    m_maxVisibleRows(0),
    m_maxVisibleRowsHasBeenSet(false),
    m_maxVisibleColumns(0),
    m_maxVisibleColumnsHasBeenSet(false),
    m_panelConfigurationHasBeenSet(false)
{
}

SmallMultiplesOptions::SmallMultiplesOptions(JsonView jsonValue) : 
    m_maxVisibleRows(0),
    m_maxVisibleRowsHasBeenSet(false),
    m_maxVisibleColumns(0),
    m_maxVisibleColumnsHasBeenSet(false),
    m_panelConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

SmallMultiplesOptions& SmallMultiplesOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxVisibleRows"))
  {
    m_maxVisibleRows = jsonValue.GetInt64("MaxVisibleRows");

    m_maxVisibleRowsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxVisibleColumns"))
  {
    m_maxVisibleColumns = jsonValue.GetInt64("MaxVisibleColumns");

    m_maxVisibleColumnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PanelConfiguration"))
  {
    m_panelConfiguration = jsonValue.GetObject("PanelConfiguration");

    m_panelConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue SmallMultiplesOptions::Jsonize() const
{
  JsonValue payload;

  if(m_maxVisibleRowsHasBeenSet)
  {
   payload.WithInt64("MaxVisibleRows", m_maxVisibleRows);

  }

  if(m_maxVisibleColumnsHasBeenSet)
  {
   payload.WithInt64("MaxVisibleColumns", m_maxVisibleColumns);

  }

  if(m_panelConfigurationHasBeenSet)
  {
   payload.WithObject("PanelConfiguration", m_panelConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
