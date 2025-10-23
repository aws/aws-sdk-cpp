/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Preview.h>
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

Preview::Preview(JsonView jsonValue)
{
  *this = jsonValue;
}

Preview& Preview::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PostAcceptTimeoutConfig"))
  {
    m_postAcceptTimeoutConfig = jsonValue.GetObject("PostAcceptTimeoutConfig");
    m_postAcceptTimeoutConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AllowedUserActions"))
  {
    Aws::Utils::Array<JsonView> allowedUserActionsJsonList = jsonValue.GetArray("AllowedUserActions");
    for(unsigned allowedUserActionsIndex = 0; allowedUserActionsIndex < allowedUserActionsJsonList.GetLength(); ++allowedUserActionsIndex)
    {
      m_allowedUserActions.push_back(AllowedUserActionMapper::GetAllowedUserActionForName(allowedUserActionsJsonList[allowedUserActionsIndex].AsString()));
    }
    m_allowedUserActionsHasBeenSet = true;
  }
  return *this;
}

JsonValue Preview::Jsonize() const
{
  JsonValue payload;

  if(m_postAcceptTimeoutConfigHasBeenSet)
  {
   payload.WithObject("PostAcceptTimeoutConfig", m_postAcceptTimeoutConfig.Jsonize());

  }

  if(m_allowedUserActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedUserActionsJsonList(m_allowedUserActions.size());
   for(unsigned allowedUserActionsIndex = 0; allowedUserActionsIndex < allowedUserActionsJsonList.GetLength(); ++allowedUserActionsIndex)
   {
     allowedUserActionsJsonList[allowedUserActionsIndex].AsString(AllowedUserActionMapper::GetNameForAllowedUserAction(m_allowedUserActions[allowedUserActionsIndex]));
   }
   payload.WithArray("AllowedUserActions", std::move(allowedUserActionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
