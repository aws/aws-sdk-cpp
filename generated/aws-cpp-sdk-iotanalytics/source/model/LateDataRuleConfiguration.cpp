/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/LateDataRuleConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

LateDataRuleConfiguration::LateDataRuleConfiguration() : 
    m_deltaTimeSessionWindowConfigurationHasBeenSet(false)
{
}

LateDataRuleConfiguration::LateDataRuleConfiguration(JsonView jsonValue) : 
    m_deltaTimeSessionWindowConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

LateDataRuleConfiguration& LateDataRuleConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deltaTimeSessionWindowConfiguration"))
  {
    m_deltaTimeSessionWindowConfiguration = jsonValue.GetObject("deltaTimeSessionWindowConfiguration");

    m_deltaTimeSessionWindowConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue LateDataRuleConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_deltaTimeSessionWindowConfigurationHasBeenSet)
  {
   payload.WithObject("deltaTimeSessionWindowConfiguration", m_deltaTimeSessionWindowConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
