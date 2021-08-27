/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PhoneNumberQuickConnectConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

PhoneNumberQuickConnectConfig::PhoneNumberQuickConnectConfig() : 
    m_phoneNumberHasBeenSet(false)
{
}

PhoneNumberQuickConnectConfig::PhoneNumberQuickConnectConfig(JsonView jsonValue) : 
    m_phoneNumberHasBeenSet(false)
{
  *this = jsonValue;
}

PhoneNumberQuickConnectConfig& PhoneNumberQuickConnectConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PhoneNumber"))
  {
    m_phoneNumber = jsonValue.GetString("PhoneNumber");

    m_phoneNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue PhoneNumberQuickConnectConfig::Jsonize() const
{
  JsonValue payload;

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithString("PhoneNumber", m_phoneNumber);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
