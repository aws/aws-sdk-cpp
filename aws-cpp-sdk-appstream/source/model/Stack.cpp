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

#include <aws/appstream/model/Stack.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

Stack::Stack() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_storageConnectorsHasBeenSet(false),
    m_redirectURLHasBeenSet(false),
    m_feedbackURLHasBeenSet(false),
    m_stackErrorsHasBeenSet(false)
{
}

Stack::Stack(const JsonValue& jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_storageConnectorsHasBeenSet(false),
    m_redirectURLHasBeenSet(false),
    m_feedbackURLHasBeenSet(false),
    m_stackErrorsHasBeenSet(false)
{
  *this = jsonValue;
}

Stack& Stack::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageConnectors"))
  {
    Array<JsonValue> storageConnectorsJsonList = jsonValue.GetArray("StorageConnectors");
    for(unsigned storageConnectorsIndex = 0; storageConnectorsIndex < storageConnectorsJsonList.GetLength(); ++storageConnectorsIndex)
    {
      m_storageConnectors.push_back(storageConnectorsJsonList[storageConnectorsIndex].AsObject());
    }
    m_storageConnectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RedirectURL"))
  {
    m_redirectURL = jsonValue.GetString("RedirectURL");

    m_redirectURLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeedbackURL"))
  {
    m_feedbackURL = jsonValue.GetString("FeedbackURL");

    m_feedbackURLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StackErrors"))
  {
    Array<JsonValue> stackErrorsJsonList = jsonValue.GetArray("StackErrors");
    for(unsigned stackErrorsIndex = 0; stackErrorsIndex < stackErrorsJsonList.GetLength(); ++stackErrorsIndex)
    {
      m_stackErrors.push_back(stackErrorsJsonList[stackErrorsIndex].AsObject());
    }
    m_stackErrorsHasBeenSet = true;
  }

  return *this;
}

JsonValue Stack::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_storageConnectorsHasBeenSet)
  {
   Array<JsonValue> storageConnectorsJsonList(m_storageConnectors.size());
   for(unsigned storageConnectorsIndex = 0; storageConnectorsIndex < storageConnectorsJsonList.GetLength(); ++storageConnectorsIndex)
   {
     storageConnectorsJsonList[storageConnectorsIndex].AsObject(m_storageConnectors[storageConnectorsIndex].Jsonize());
   }
   payload.WithArray("StorageConnectors", std::move(storageConnectorsJsonList));

  }

  if(m_redirectURLHasBeenSet)
  {
   payload.WithString("RedirectURL", m_redirectURL);

  }

  if(m_feedbackURLHasBeenSet)
  {
   payload.WithString("FeedbackURL", m_feedbackURL);

  }

  if(m_stackErrorsHasBeenSet)
  {
   Array<JsonValue> stackErrorsJsonList(m_stackErrors.size());
   for(unsigned stackErrorsIndex = 0; stackErrorsIndex < stackErrorsJsonList.GetLength(); ++stackErrorsIndex)
   {
     stackErrorsJsonList[stackErrorsIndex].AsObject(m_stackErrors[stackErrorsIndex].Jsonize());
   }
   payload.WithArray("StackErrors", std::move(stackErrorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
