/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UIColorPalette.h>
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

UIColorPalette::UIColorPalette() : 
    m_primaryForegroundHasBeenSet(false),
    m_primaryBackgroundHasBeenSet(false),
    m_secondaryForegroundHasBeenSet(false),
    m_secondaryBackgroundHasBeenSet(false),
    m_accentHasBeenSet(false),
    m_accentForegroundHasBeenSet(false),
    m_dangerHasBeenSet(false),
    m_dangerForegroundHasBeenSet(false),
    m_warningHasBeenSet(false),
    m_warningForegroundHasBeenSet(false),
    m_successHasBeenSet(false),
    m_successForegroundHasBeenSet(false),
    m_dimensionHasBeenSet(false),
    m_dimensionForegroundHasBeenSet(false),
    m_measureHasBeenSet(false),
    m_measureForegroundHasBeenSet(false)
{
}

UIColorPalette::UIColorPalette(JsonView jsonValue) : 
    m_primaryForegroundHasBeenSet(false),
    m_primaryBackgroundHasBeenSet(false),
    m_secondaryForegroundHasBeenSet(false),
    m_secondaryBackgroundHasBeenSet(false),
    m_accentHasBeenSet(false),
    m_accentForegroundHasBeenSet(false),
    m_dangerHasBeenSet(false),
    m_dangerForegroundHasBeenSet(false),
    m_warningHasBeenSet(false),
    m_warningForegroundHasBeenSet(false),
    m_successHasBeenSet(false),
    m_successForegroundHasBeenSet(false),
    m_dimensionHasBeenSet(false),
    m_dimensionForegroundHasBeenSet(false),
    m_measureHasBeenSet(false),
    m_measureForegroundHasBeenSet(false)
{
  *this = jsonValue;
}

UIColorPalette& UIColorPalette::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrimaryForeground"))
  {
    m_primaryForeground = jsonValue.GetString("PrimaryForeground");

    m_primaryForegroundHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrimaryBackground"))
  {
    m_primaryBackground = jsonValue.GetString("PrimaryBackground");

    m_primaryBackgroundHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecondaryForeground"))
  {
    m_secondaryForeground = jsonValue.GetString("SecondaryForeground");

    m_secondaryForegroundHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecondaryBackground"))
  {
    m_secondaryBackground = jsonValue.GetString("SecondaryBackground");

    m_secondaryBackgroundHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Accent"))
  {
    m_accent = jsonValue.GetString("Accent");

    m_accentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccentForeground"))
  {
    m_accentForeground = jsonValue.GetString("AccentForeground");

    m_accentForegroundHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Danger"))
  {
    m_danger = jsonValue.GetString("Danger");

    m_dangerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DangerForeground"))
  {
    m_dangerForeground = jsonValue.GetString("DangerForeground");

    m_dangerForegroundHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Warning"))
  {
    m_warning = jsonValue.GetString("Warning");

    m_warningHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WarningForeground"))
  {
    m_warningForeground = jsonValue.GetString("WarningForeground");

    m_warningForegroundHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Success"))
  {
    m_success = jsonValue.GetString("Success");

    m_successHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SuccessForeground"))
  {
    m_successForeground = jsonValue.GetString("SuccessForeground");

    m_successForegroundHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Dimension"))
  {
    m_dimension = jsonValue.GetString("Dimension");

    m_dimensionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DimensionForeground"))
  {
    m_dimensionForeground = jsonValue.GetString("DimensionForeground");

    m_dimensionForegroundHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Measure"))
  {
    m_measure = jsonValue.GetString("Measure");

    m_measureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MeasureForeground"))
  {
    m_measureForeground = jsonValue.GetString("MeasureForeground");

    m_measureForegroundHasBeenSet = true;
  }

  return *this;
}

JsonValue UIColorPalette::Jsonize() const
{
  JsonValue payload;

  if(m_primaryForegroundHasBeenSet)
  {
   payload.WithString("PrimaryForeground", m_primaryForeground);

  }

  if(m_primaryBackgroundHasBeenSet)
  {
   payload.WithString("PrimaryBackground", m_primaryBackground);

  }

  if(m_secondaryForegroundHasBeenSet)
  {
   payload.WithString("SecondaryForeground", m_secondaryForeground);

  }

  if(m_secondaryBackgroundHasBeenSet)
  {
   payload.WithString("SecondaryBackground", m_secondaryBackground);

  }

  if(m_accentHasBeenSet)
  {
   payload.WithString("Accent", m_accent);

  }

  if(m_accentForegroundHasBeenSet)
  {
   payload.WithString("AccentForeground", m_accentForeground);

  }

  if(m_dangerHasBeenSet)
  {
   payload.WithString("Danger", m_danger);

  }

  if(m_dangerForegroundHasBeenSet)
  {
   payload.WithString("DangerForeground", m_dangerForeground);

  }

  if(m_warningHasBeenSet)
  {
   payload.WithString("Warning", m_warning);

  }

  if(m_warningForegroundHasBeenSet)
  {
   payload.WithString("WarningForeground", m_warningForeground);

  }

  if(m_successHasBeenSet)
  {
   payload.WithString("Success", m_success);

  }

  if(m_successForegroundHasBeenSet)
  {
   payload.WithString("SuccessForeground", m_successForeground);

  }

  if(m_dimensionHasBeenSet)
  {
   payload.WithString("Dimension", m_dimension);

  }

  if(m_dimensionForegroundHasBeenSet)
  {
   payload.WithString("DimensionForeground", m_dimensionForeground);

  }

  if(m_measureHasBeenSet)
  {
   payload.WithString("Measure", m_measure);

  }

  if(m_measureForegroundHasBeenSet)
  {
   payload.WithString("MeasureForeground", m_measureForeground);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
