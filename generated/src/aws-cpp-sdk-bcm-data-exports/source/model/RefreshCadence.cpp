/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/model/RefreshCadence.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMDataExports
{
namespace Model
{

RefreshCadence::RefreshCadence() : 
    m_frequency(FrequencyOption::NOT_SET),
    m_frequencyHasBeenSet(false)
{
}

RefreshCadence::RefreshCadence(JsonView jsonValue) : 
    m_frequency(FrequencyOption::NOT_SET),
    m_frequencyHasBeenSet(false)
{
  *this = jsonValue;
}

RefreshCadence& RefreshCadence::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Frequency"))
  {
    m_frequency = FrequencyOptionMapper::GetFrequencyOptionForName(jsonValue.GetString("Frequency"));

    m_frequencyHasBeenSet = true;
  }

  return *this;
}

JsonValue RefreshCadence::Jsonize() const
{
  JsonValue payload;

  if(m_frequencyHasBeenSet)
  {
   payload.WithString("Frequency", FrequencyOptionMapper::GetNameForFrequencyOption(m_frequency));
  }

  return payload;
}

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
