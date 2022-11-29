/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TotalOptions.h>
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

TotalOptions::TotalOptions() : 
    m_totalsVisibility(Visibility::NOT_SET),
    m_totalsVisibilityHasBeenSet(false),
    m_placement(TableTotalsPlacement::NOT_SET),
    m_placementHasBeenSet(false),
    m_scrollStatus(TableTotalsScrollStatus::NOT_SET),
    m_scrollStatusHasBeenSet(false),
    m_customLabelHasBeenSet(false),
    m_totalCellStyleHasBeenSet(false)
{
}

TotalOptions::TotalOptions(JsonView jsonValue) : 
    m_totalsVisibility(Visibility::NOT_SET),
    m_totalsVisibilityHasBeenSet(false),
    m_placement(TableTotalsPlacement::NOT_SET),
    m_placementHasBeenSet(false),
    m_scrollStatus(TableTotalsScrollStatus::NOT_SET),
    m_scrollStatusHasBeenSet(false),
    m_customLabelHasBeenSet(false),
    m_totalCellStyleHasBeenSet(false)
{
  *this = jsonValue;
}

TotalOptions& TotalOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TotalsVisibility"))
  {
    m_totalsVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("TotalsVisibility"));

    m_totalsVisibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Placement"))
  {
    m_placement = TableTotalsPlacementMapper::GetTableTotalsPlacementForName(jsonValue.GetString("Placement"));

    m_placementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScrollStatus"))
  {
    m_scrollStatus = TableTotalsScrollStatusMapper::GetTableTotalsScrollStatusForName(jsonValue.GetString("ScrollStatus"));

    m_scrollStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomLabel"))
  {
    m_customLabel = jsonValue.GetString("CustomLabel");

    m_customLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalCellStyle"))
  {
    m_totalCellStyle = jsonValue.GetObject("TotalCellStyle");

    m_totalCellStyleHasBeenSet = true;
  }

  return *this;
}

JsonValue TotalOptions::Jsonize() const
{
  JsonValue payload;

  if(m_totalsVisibilityHasBeenSet)
  {
   payload.WithString("TotalsVisibility", VisibilityMapper::GetNameForVisibility(m_totalsVisibility));
  }

  if(m_placementHasBeenSet)
  {
   payload.WithString("Placement", TableTotalsPlacementMapper::GetNameForTableTotalsPlacement(m_placement));
  }

  if(m_scrollStatusHasBeenSet)
  {
   payload.WithString("ScrollStatus", TableTotalsScrollStatusMapper::GetNameForTableTotalsScrollStatus(m_scrollStatus));
  }

  if(m_customLabelHasBeenSet)
  {
   payload.WithString("CustomLabel", m_customLabel);

  }

  if(m_totalCellStyleHasBeenSet)
  {
   payload.WithObject("TotalCellStyle", m_totalCellStyle.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
