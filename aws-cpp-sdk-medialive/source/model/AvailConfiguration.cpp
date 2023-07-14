/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AvailConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

AvailConfiguration::AvailConfiguration() : 
    m_availSettingsHasBeenSet(false)
{
}

AvailConfiguration::AvailConfiguration(JsonView jsonValue) : 
    m_availSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

AvailConfiguration& AvailConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("availSettings"))
  {
    m_availSettings = jsonValue.GetObject("availSettings");

    m_availSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue AvailConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_availSettingsHasBeenSet)
  {
   payload.WithObject("availSettings", m_availSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
