/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ResultReuseConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

ResultReuseConfiguration::ResultReuseConfiguration() : 
    m_resultReuseByAgeConfigurationHasBeenSet(false)
{
}

ResultReuseConfiguration::ResultReuseConfiguration(JsonView jsonValue) : 
    m_resultReuseByAgeConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ResultReuseConfiguration& ResultReuseConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResultReuseByAgeConfiguration"))
  {
    m_resultReuseByAgeConfiguration = jsonValue.GetObject("ResultReuseByAgeConfiguration");

    m_resultReuseByAgeConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ResultReuseConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_resultReuseByAgeConfigurationHasBeenSet)
  {
   payload.WithObject("ResultReuseByAgeConfiguration", m_resultReuseByAgeConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
