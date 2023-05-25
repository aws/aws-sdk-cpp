/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/BackendAPIAuthType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{

BackendAPIAuthType::BackendAPIAuthType() : 
    m_mode(Mode::NOT_SET),
    m_modeHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
}

BackendAPIAuthType::BackendAPIAuthType(JsonView jsonValue) : 
    m_mode(Mode::NOT_SET),
    m_modeHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
  *this = jsonValue;
}

BackendAPIAuthType& BackendAPIAuthType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mode"))
  {
    m_mode = ModeMapper::GetModeForName(jsonValue.GetString("mode"));

    m_modeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("settings"))
  {
    m_settings = jsonValue.GetObject("settings");

    m_settingsHasBeenSet = true;
  }

  return *this;
}

JsonValue BackendAPIAuthType::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("mode", ModeMapper::GetNameForMode(m_mode));
  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("settings", m_settings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
