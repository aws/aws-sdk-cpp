/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/WordCloudChartConfiguration.h>
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

WordCloudChartConfiguration::WordCloudChartConfiguration() : 
    m_fieldWellsHasBeenSet(false),
    m_sortConfigurationHasBeenSet(false),
    m_categoryLabelOptionsHasBeenSet(false),
    m_wordCloudOptionsHasBeenSet(false)
{
}

WordCloudChartConfiguration::WordCloudChartConfiguration(JsonView jsonValue) : 
    m_fieldWellsHasBeenSet(false),
    m_sortConfigurationHasBeenSet(false),
    m_categoryLabelOptionsHasBeenSet(false),
    m_wordCloudOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

WordCloudChartConfiguration& WordCloudChartConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldWells"))
  {
    m_fieldWells = jsonValue.GetObject("FieldWells");

    m_fieldWellsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SortConfiguration"))
  {
    m_sortConfiguration = jsonValue.GetObject("SortConfiguration");

    m_sortConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CategoryLabelOptions"))
  {
    m_categoryLabelOptions = jsonValue.GetObject("CategoryLabelOptions");

    m_categoryLabelOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WordCloudOptions"))
  {
    m_wordCloudOptions = jsonValue.GetObject("WordCloudOptions");

    m_wordCloudOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue WordCloudChartConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_fieldWellsHasBeenSet)
  {
   payload.WithObject("FieldWells", m_fieldWells.Jsonize());

  }

  if(m_sortConfigurationHasBeenSet)
  {
   payload.WithObject("SortConfiguration", m_sortConfiguration.Jsonize());

  }

  if(m_categoryLabelOptionsHasBeenSet)
  {
   payload.WithObject("CategoryLabelOptions", m_categoryLabelOptions.Jsonize());

  }

  if(m_wordCloudOptionsHasBeenSet)
  {
   payload.WithObject("WordCloudOptions", m_wordCloudOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
