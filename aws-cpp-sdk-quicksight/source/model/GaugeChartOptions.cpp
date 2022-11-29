/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GaugeChartOptions.h>
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

GaugeChartOptions::GaugeChartOptions() : 
    m_primaryValueDisplayType(PrimaryValueDisplayType::NOT_SET),
    m_primaryValueDisplayTypeHasBeenSet(false),
    m_comparisonHasBeenSet(false),
    m_arcAxisHasBeenSet(false),
    m_arcHasBeenSet(false),
    m_primaryValueFontConfigurationHasBeenSet(false)
{
}

GaugeChartOptions::GaugeChartOptions(JsonView jsonValue) : 
    m_primaryValueDisplayType(PrimaryValueDisplayType::NOT_SET),
    m_primaryValueDisplayTypeHasBeenSet(false),
    m_comparisonHasBeenSet(false),
    m_arcAxisHasBeenSet(false),
    m_arcHasBeenSet(false),
    m_primaryValueFontConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

GaugeChartOptions& GaugeChartOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrimaryValueDisplayType"))
  {
    m_primaryValueDisplayType = PrimaryValueDisplayTypeMapper::GetPrimaryValueDisplayTypeForName(jsonValue.GetString("PrimaryValueDisplayType"));

    m_primaryValueDisplayTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Comparison"))
  {
    m_comparison = jsonValue.GetObject("Comparison");

    m_comparisonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ArcAxis"))
  {
    m_arcAxis = jsonValue.GetObject("ArcAxis");

    m_arcAxisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arc"))
  {
    m_arc = jsonValue.GetObject("Arc");

    m_arcHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrimaryValueFontConfiguration"))
  {
    m_primaryValueFontConfiguration = jsonValue.GetObject("PrimaryValueFontConfiguration");

    m_primaryValueFontConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue GaugeChartOptions::Jsonize() const
{
  JsonValue payload;

  if(m_primaryValueDisplayTypeHasBeenSet)
  {
   payload.WithString("PrimaryValueDisplayType", PrimaryValueDisplayTypeMapper::GetNameForPrimaryValueDisplayType(m_primaryValueDisplayType));
  }

  if(m_comparisonHasBeenSet)
  {
   payload.WithObject("Comparison", m_comparison.Jsonize());

  }

  if(m_arcAxisHasBeenSet)
  {
   payload.WithObject("ArcAxis", m_arcAxis.Jsonize());

  }

  if(m_arcHasBeenSet)
  {
   payload.WithObject("Arc", m_arc.Jsonize());

  }

  if(m_primaryValueFontConfigurationHasBeenSet)
  {
   payload.WithObject("PrimaryValueFontConfiguration", m_primaryValueFontConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
