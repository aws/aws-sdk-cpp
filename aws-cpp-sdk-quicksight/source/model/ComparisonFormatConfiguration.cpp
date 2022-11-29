/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ComparisonFormatConfiguration.h>
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

ComparisonFormatConfiguration::ComparisonFormatConfiguration() : 
    m_numberDisplayFormatConfigurationHasBeenSet(false),
    m_percentageDisplayFormatConfigurationHasBeenSet(false)
{
}

ComparisonFormatConfiguration::ComparisonFormatConfiguration(JsonView jsonValue) : 
    m_numberDisplayFormatConfigurationHasBeenSet(false),
    m_percentageDisplayFormatConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ComparisonFormatConfiguration& ComparisonFormatConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NumberDisplayFormatConfiguration"))
  {
    m_numberDisplayFormatConfiguration = jsonValue.GetObject("NumberDisplayFormatConfiguration");

    m_numberDisplayFormatConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PercentageDisplayFormatConfiguration"))
  {
    m_percentageDisplayFormatConfiguration = jsonValue.GetObject("PercentageDisplayFormatConfiguration");

    m_percentageDisplayFormatConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ComparisonFormatConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_numberDisplayFormatConfigurationHasBeenSet)
  {
   payload.WithObject("NumberDisplayFormatConfiguration", m_numberDisplayFormatConfiguration.Jsonize());

  }

  if(m_percentageDisplayFormatConfigurationHasBeenSet)
  {
   payload.WithObject("PercentageDisplayFormatConfiguration", m_percentageDisplayFormatConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
