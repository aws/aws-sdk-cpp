/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/DeletionProtectionSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppConfig
{
namespace Model
{

DeletionProtectionSettings::DeletionProtectionSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

DeletionProtectionSettings& DeletionProtectionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProtectionPeriodInMinutes"))
  {
    m_protectionPeriodInMinutes = jsonValue.GetInteger("ProtectionPeriodInMinutes");
    m_protectionPeriodInMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue DeletionProtectionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_protectionPeriodInMinutesHasBeenSet)
  {
   payload.WithInteger("ProtectionPeriodInMinutes", m_protectionPeriodInMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace AppConfig
} // namespace Aws
