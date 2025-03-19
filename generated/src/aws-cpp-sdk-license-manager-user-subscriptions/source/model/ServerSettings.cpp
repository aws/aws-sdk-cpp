/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/ServerSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

ServerSettings::ServerSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

ServerSettings& ServerSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RdsSalSettings"))
  {
    m_rdsSalSettings = jsonValue.GetObject("RdsSalSettings");
    m_rdsSalSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue ServerSettings::Jsonize() const
{
  JsonValue payload;

  if(m_rdsSalSettingsHasBeenSet)
  {
   payload.WithObject("RdsSalSettings", m_rdsSalSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
