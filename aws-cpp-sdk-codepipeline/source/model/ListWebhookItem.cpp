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

#include <aws/codepipeline/model/ListWebhookItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

ListWebhookItem::ListWebhookItem() : 
    m_definitionHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_lastTriggeredHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ListWebhookItem::ListWebhookItem(JsonView jsonValue) : 
    m_definitionHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_lastTriggeredHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

ListWebhookItem& ListWebhookItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("definition"))
  {
    m_definition = jsonValue.GetObject("definition");

    m_definitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = jsonValue.GetString("errorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastTriggered"))
  {
    m_lastTriggered = jsonValue.GetDouble("lastTriggered");

    m_lastTriggeredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue ListWebhookItem::Jsonize() const
{
  JsonValue payload;

  if(m_definitionHasBeenSet)
  {
   payload.WithObject("definition", m_definition.Jsonize());

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", m_errorCode);

  }

  if(m_lastTriggeredHasBeenSet)
  {
   payload.WithDouble("lastTriggered", m_lastTriggered.SecondsWithMSPrecision());
  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
