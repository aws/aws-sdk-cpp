/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/ConversationLogsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

ConversationLogsRequest::ConversationLogsRequest() : 
    m_logSettingsHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false)
{
}

ConversationLogsRequest::ConversationLogsRequest(JsonView jsonValue) : 
    m_logSettingsHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

ConversationLogsRequest& ConversationLogsRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logSettings"))
  {
    Aws::Utils::Array<JsonView> logSettingsJsonList = jsonValue.GetArray("logSettings");
    for(unsigned logSettingsIndex = 0; logSettingsIndex < logSettingsJsonList.GetLength(); ++logSettingsIndex)
    {
      m_logSettings.push_back(logSettingsJsonList[logSettingsIndex].AsObject());
    }
    m_logSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iamRoleArn"))
  {
    m_iamRoleArn = jsonValue.GetString("iamRoleArn");

    m_iamRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ConversationLogsRequest::Jsonize() const
{
  JsonValue payload;

  if(m_logSettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logSettingsJsonList(m_logSettings.size());
   for(unsigned logSettingsIndex = 0; logSettingsIndex < logSettingsJsonList.GetLength(); ++logSettingsIndex)
   {
     logSettingsJsonList[logSettingsIndex].AsObject(m_logSettings[logSettingsIndex].Jsonize());
   }
   payload.WithArray("logSettings", std::move(logSettingsJsonList));

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("iamRoleArn", m_iamRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
