/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/BackTestConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

BackTestConfiguration::BackTestConfiguration() : 
    m_runBackTestMode(false),
    m_runBackTestModeHasBeenSet(false)
{
}

BackTestConfiguration::BackTestConfiguration(JsonView jsonValue) : 
    m_runBackTestMode(false),
    m_runBackTestModeHasBeenSet(false)
{
  *this = jsonValue;
}

BackTestConfiguration& BackTestConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RunBackTestMode"))
  {
    m_runBackTestMode = jsonValue.GetBool("RunBackTestMode");

    m_runBackTestModeHasBeenSet = true;
  }

  return *this;
}

JsonValue BackTestConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_runBackTestModeHasBeenSet)
  {
   payload.WithBool("RunBackTestMode", m_runBackTestMode);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
