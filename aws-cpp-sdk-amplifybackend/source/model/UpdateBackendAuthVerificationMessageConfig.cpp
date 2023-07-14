/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/UpdateBackendAuthVerificationMessageConfig.h>
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

UpdateBackendAuthVerificationMessageConfig::UpdateBackendAuthVerificationMessageConfig() : 
    m_deliveryMethod(DeliveryMethod::NOT_SET),
    m_deliveryMethodHasBeenSet(false),
    m_emailSettingsHasBeenSet(false),
    m_smsSettingsHasBeenSet(false)
{
}

UpdateBackendAuthVerificationMessageConfig::UpdateBackendAuthVerificationMessageConfig(JsonView jsonValue) : 
    m_deliveryMethod(DeliveryMethod::NOT_SET),
    m_deliveryMethodHasBeenSet(false),
    m_emailSettingsHasBeenSet(false),
    m_smsSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateBackendAuthVerificationMessageConfig& UpdateBackendAuthVerificationMessageConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deliveryMethod"))
  {
    m_deliveryMethod = DeliveryMethodMapper::GetDeliveryMethodForName(jsonValue.GetString("deliveryMethod"));

    m_deliveryMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("emailSettings"))
  {
    m_emailSettings = jsonValue.GetObject("emailSettings");

    m_emailSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("smsSettings"))
  {
    m_smsSettings = jsonValue.GetObject("smsSettings");

    m_smsSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateBackendAuthVerificationMessageConfig::Jsonize() const
{
  JsonValue payload;

  if(m_deliveryMethodHasBeenSet)
  {
   payload.WithString("deliveryMethod", DeliveryMethodMapper::GetNameForDeliveryMethod(m_deliveryMethod));
  }

  if(m_emailSettingsHasBeenSet)
  {
   payload.WithObject("emailSettings", m_emailSettings.Jsonize());

  }

  if(m_smsSettingsHasBeenSet)
  {
   payload.WithObject("smsSettings", m_smsSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
