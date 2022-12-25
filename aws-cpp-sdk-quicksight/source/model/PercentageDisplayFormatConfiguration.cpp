/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PercentageDisplayFormatConfiguration.h>
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

PercentageDisplayFormatConfiguration::PercentageDisplayFormatConfiguration() : 
    m_prefixHasBeenSet(false),
    m_suffixHasBeenSet(false),
    m_separatorConfigurationHasBeenSet(false),
    m_decimalPlacesConfigurationHasBeenSet(false),
    m_negativeValueConfigurationHasBeenSet(false),
    m_nullValueFormatConfigurationHasBeenSet(false)
{
}

PercentageDisplayFormatConfiguration::PercentageDisplayFormatConfiguration(JsonView jsonValue) : 
    m_prefixHasBeenSet(false),
    m_suffixHasBeenSet(false),
    m_separatorConfigurationHasBeenSet(false),
    m_decimalPlacesConfigurationHasBeenSet(false),
    m_negativeValueConfigurationHasBeenSet(false),
    m_nullValueFormatConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

PercentageDisplayFormatConfiguration& PercentageDisplayFormatConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Prefix"))
  {
    m_prefix = jsonValue.GetString("Prefix");

    m_prefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Suffix"))
  {
    m_suffix = jsonValue.GetString("Suffix");

    m_suffixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SeparatorConfiguration"))
  {
    m_separatorConfiguration = jsonValue.GetObject("SeparatorConfiguration");

    m_separatorConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DecimalPlacesConfiguration"))
  {
    m_decimalPlacesConfiguration = jsonValue.GetObject("DecimalPlacesConfiguration");

    m_decimalPlacesConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NegativeValueConfiguration"))
  {
    m_negativeValueConfiguration = jsonValue.GetObject("NegativeValueConfiguration");

    m_negativeValueConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NullValueFormatConfiguration"))
  {
    m_nullValueFormatConfiguration = jsonValue.GetObject("NullValueFormatConfiguration");

    m_nullValueFormatConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue PercentageDisplayFormatConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_prefixHasBeenSet)
  {
   payload.WithString("Prefix", m_prefix);

  }

  if(m_suffixHasBeenSet)
  {
   payload.WithString("Suffix", m_suffix);

  }

  if(m_separatorConfigurationHasBeenSet)
  {
   payload.WithObject("SeparatorConfiguration", m_separatorConfiguration.Jsonize());

  }

  if(m_decimalPlacesConfigurationHasBeenSet)
  {
   payload.WithObject("DecimalPlacesConfiguration", m_decimalPlacesConfiguration.Jsonize());

  }

  if(m_negativeValueConfigurationHasBeenSet)
  {
   payload.WithObject("NegativeValueConfiguration", m_negativeValueConfiguration.Jsonize());

  }

  if(m_nullValueFormatConfigurationHasBeenSet)
  {
   payload.WithObject("NullValueFormatConfiguration", m_nullValueFormatConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
