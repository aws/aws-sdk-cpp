/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/DataSourceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

DataSourceConfiguration::DataSourceConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DataSourceConfiguration& DataSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IntendedUse"))
  {
    m_intendedUse = IntendedUseMapper::GetIntendedUseForName(jsonValue.GetString("IntendedUse"));
    m_intendedUseHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_intendedUseHasBeenSet)
  {
   payload.WithString("IntendedUse", IntendedUseMapper::GetNameForIntendedUse(m_intendedUse));
  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
