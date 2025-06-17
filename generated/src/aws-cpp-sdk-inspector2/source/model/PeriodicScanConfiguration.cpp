/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/PeriodicScanConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

PeriodicScanConfiguration::PeriodicScanConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PeriodicScanConfiguration& PeriodicScanConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("frequency"))
  {
    m_frequency = PeriodicScanFrequencyMapper::GetPeriodicScanFrequencyForName(jsonValue.GetString("frequency"));
    m_frequencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("frequencyExpression"))
  {
    m_frequencyExpression = jsonValue.GetString("frequencyExpression");
    m_frequencyExpressionHasBeenSet = true;
  }
  return *this;
}

JsonValue PeriodicScanConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_frequencyHasBeenSet)
  {
   payload.WithString("frequency", PeriodicScanFrequencyMapper::GetNameForPeriodicScanFrequency(m_frequency));
  }

  if(m_frequencyExpressionHasBeenSet)
  {
   payload.WithString("frequencyExpression", m_frequencyExpression);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
