/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SidewalkUpdateAccount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

SidewalkUpdateAccount::SidewalkUpdateAccount() : 
    m_appServerPrivateKeyHasBeenSet(false)
{
}

SidewalkUpdateAccount::SidewalkUpdateAccount(JsonView jsonValue) : 
    m_appServerPrivateKeyHasBeenSet(false)
{
  *this = jsonValue;
}

SidewalkUpdateAccount& SidewalkUpdateAccount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AppServerPrivateKey"))
  {
    m_appServerPrivateKey = jsonValue.GetString("AppServerPrivateKey");

    m_appServerPrivateKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue SidewalkUpdateAccount::Jsonize() const
{
  JsonValue payload;

  if(m_appServerPrivateKeyHasBeenSet)
  {
   payload.WithString("AppServerPrivateKey", m_appServerPrivateKey);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
