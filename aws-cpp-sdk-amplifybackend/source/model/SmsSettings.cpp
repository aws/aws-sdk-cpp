/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/SmsSettings.h>
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

SmsSettings::SmsSettings() : 
    m_smsMessageHasBeenSet(false)
{
}

SmsSettings::SmsSettings(JsonView jsonValue) : 
    m_smsMessageHasBeenSet(false)
{
  *this = jsonValue;
}

SmsSettings& SmsSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("smsMessage"))
  {
    m_smsMessage = jsonValue.GetString("smsMessage");

    m_smsMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue SmsSettings::Jsonize() const
{
  JsonValue payload;

  if(m_smsMessageHasBeenSet)
  {
   payload.WithString("smsMessage", m_smsMessage);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
