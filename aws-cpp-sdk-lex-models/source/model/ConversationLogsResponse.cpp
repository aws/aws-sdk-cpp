/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/lex-models/model/ConversationLogsResponse.h>
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

ConversationLogsResponse::ConversationLogsResponse() : 
    m_logSettingsHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false)
{
}

ConversationLogsResponse::ConversationLogsResponse(JsonView jsonValue) : 
    m_logSettingsHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

ConversationLogsResponse& ConversationLogsResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logSettings"))
  {
    Array<JsonView> logSettingsJsonList = jsonValue.GetArray("logSettings");
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

JsonValue ConversationLogsResponse::Jsonize() const
{
  JsonValue payload;

  if(m_logSettingsHasBeenSet)
  {
   Array<JsonValue> logSettingsJsonList(m_logSettings.size());
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
