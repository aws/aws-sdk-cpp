/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UserQuickConnectConfig.h>
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

UserQuickConnectConfig::UserQuickConnectConfig() : 
    m_userIdHasBeenSet(false),
    m_contactFlowIdHasBeenSet(false)
{
}

UserQuickConnectConfig::UserQuickConnectConfig(JsonView jsonValue) : 
    m_userIdHasBeenSet(false),
    m_contactFlowIdHasBeenSet(false)
{
  *this = jsonValue;
}

UserQuickConnectConfig& UserQuickConnectConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");

    m_userIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContactFlowId"))
  {
    m_contactFlowId = jsonValue.GetString("ContactFlowId");

    m_contactFlowIdHasBeenSet = true;
  }

  return *this;
}

JsonValue UserQuickConnectConfig::Jsonize() const
{
  JsonValue payload;

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_contactFlowIdHasBeenSet)
  {
   payload.WithString("ContactFlowId", m_contactFlowId);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
