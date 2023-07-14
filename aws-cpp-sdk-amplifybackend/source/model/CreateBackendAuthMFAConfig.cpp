/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/CreateBackendAuthMFAConfig.h>
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

CreateBackendAuthMFAConfig::CreateBackendAuthMFAConfig() : 
    m_mFAMode(MFAMode::NOT_SET),
    m_mFAModeHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
}

CreateBackendAuthMFAConfig::CreateBackendAuthMFAConfig(JsonView jsonValue) : 
    m_mFAMode(MFAMode::NOT_SET),
    m_mFAModeHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
  *this = jsonValue;
}

CreateBackendAuthMFAConfig& CreateBackendAuthMFAConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MFAMode"))
  {
    m_mFAMode = MFAModeMapper::GetMFAModeForName(jsonValue.GetString("MFAMode"));

    m_mFAModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("settings"))
  {
    m_settings = jsonValue.GetObject("settings");

    m_settingsHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateBackendAuthMFAConfig::Jsonize() const
{
  JsonValue payload;

  if(m_mFAModeHasBeenSet)
  {
   payload.WithString("MFAMode", MFAModeMapper::GetNameForMFAMode(m_mFAMode));
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
