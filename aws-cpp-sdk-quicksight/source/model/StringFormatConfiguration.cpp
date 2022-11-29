/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/StringFormatConfiguration.h>
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

StringFormatConfiguration::StringFormatConfiguration() : 
    m_nullValueFormatConfigurationHasBeenSet(false),
    m_numericFormatConfigurationHasBeenSet(false)
{
}

StringFormatConfiguration::StringFormatConfiguration(JsonView jsonValue) : 
    m_nullValueFormatConfigurationHasBeenSet(false),
    m_numericFormatConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

StringFormatConfiguration& StringFormatConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NullValueFormatConfiguration"))
  {
    m_nullValueFormatConfiguration = jsonValue.GetObject("NullValueFormatConfiguration");

    m_nullValueFormatConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumericFormatConfiguration"))
  {
    m_numericFormatConfiguration = jsonValue.GetObject("NumericFormatConfiguration");

    m_numericFormatConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue StringFormatConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nullValueFormatConfigurationHasBeenSet)
  {
   payload.WithObject("NullValueFormatConfiguration", m_nullValueFormatConfiguration.Jsonize());

  }

  if(m_numericFormatConfigurationHasBeenSet)
  {
   payload.WithObject("NumericFormatConfiguration", m_numericFormatConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
