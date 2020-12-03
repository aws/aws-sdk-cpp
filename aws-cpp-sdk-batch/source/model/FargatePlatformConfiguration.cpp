/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/FargatePlatformConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

FargatePlatformConfiguration::FargatePlatformConfiguration() : 
    m_platformVersionHasBeenSet(false)
{
}

FargatePlatformConfiguration::FargatePlatformConfiguration(JsonView jsonValue) : 
    m_platformVersionHasBeenSet(false)
{
  *this = jsonValue;
}

FargatePlatformConfiguration& FargatePlatformConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("platformVersion"))
  {
    m_platformVersion = jsonValue.GetString("platformVersion");

    m_platformVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue FargatePlatformConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_platformVersionHasBeenSet)
  {
   payload.WithString("platformVersion", m_platformVersion);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
