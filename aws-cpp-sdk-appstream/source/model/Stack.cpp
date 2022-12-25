/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_stackErrorsHasBeenSet(false),
    m_userSettingsHasBeenSet(false),
    m_applicationSettingsHasBeenSet(false),
    m_accessEndpointsHasBeenSet(false),
    m_embedHostDomainsHasBeenSet(false),
    m_streamingExperienceSettingsHasBeenSet(false)
{
}

Stack::Stack(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_storageConnectorsHasBeenSet(false),
    m_redirectURLHasBeenSet(false),
    m_feedbackURLHasBeenSet(false),
    m_stackErrorsHasBeenSet(false),
    m_userSettingsHasBeenSet(false),
    m_applicationSettingsHasBeenSet(false),
    m_accessEndpointsHasBeenSet(false),
    m_embedHostDomainsHasBeenSet(false),
    m_streamingExperienceSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

Stack& Stack::operator =(JsonView jsonValue)
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
    Aws::Utils::Array<JsonView> storageConnectorsJsonList = jsonValue.GetArray("StorageConnectors");
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
    Aws::Utils::Array<JsonView> stackErrorsJsonList = jsonValue.GetArray("StackErrors");
    for(unsigned stackErrorsIndex = 0; stackErrorsIndex < stackErrorsJsonList.GetLength(); ++stackErrorsIndex)
    {
      m_stackErrors.push_back(stackErrorsJsonList[stackErrorsIndex].AsObject());
    }
    m_stackErrorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserSettings"))
  {
    Aws::Utils::Array<JsonView> userSettingsJsonList = jsonValue.GetArray("UserSettings");
    for(unsigned userSettingsIndex = 0; userSettingsIndex < userSettingsJsonList.GetLength(); ++userSettingsIndex)
    {
      m_userSettings.push_back(userSettingsJsonList[userSettingsIndex].AsObject());
    }
    m_userSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationSettings"))
  {
    m_applicationSettings = jsonValue.GetObject("ApplicationSettings");

    m_applicationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessEndpoints"))
  {
    Aws::Utils::Array<JsonView> accessEndpointsJsonList = jsonValue.GetArray("AccessEndpoints");
    for(unsigned accessEndpointsIndex = 0; accessEndpointsIndex < accessEndpointsJsonList.GetLength(); ++accessEndpointsIndex)
    {
      m_accessEndpoints.push_back(accessEndpointsJsonList[accessEndpointsIndex].AsObject());
    }
    m_accessEndpointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmbedHostDomains"))
  {
    Aws::Utils::Array<JsonView> embedHostDomainsJsonList = jsonValue.GetArray("EmbedHostDomains");
    for(unsigned embedHostDomainsIndex = 0; embedHostDomainsIndex < embedHostDomainsJsonList.GetLength(); ++embedHostDomainsIndex)
    {
      m_embedHostDomains.push_back(embedHostDomainsJsonList[embedHostDomainsIndex].AsString());
    }
    m_embedHostDomainsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamingExperienceSettings"))
  {
    m_streamingExperienceSettings = jsonValue.GetObject("StreamingExperienceSettings");

    m_streamingExperienceSettingsHasBeenSet = true;
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
   Aws::Utils::Array<JsonValue> storageConnectorsJsonList(m_storageConnectors.size());
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
   Aws::Utils::Array<JsonValue> stackErrorsJsonList(m_stackErrors.size());
   for(unsigned stackErrorsIndex = 0; stackErrorsIndex < stackErrorsJsonList.GetLength(); ++stackErrorsIndex)
   {
     stackErrorsJsonList[stackErrorsIndex].AsObject(m_stackErrors[stackErrorsIndex].Jsonize());
   }
   payload.WithArray("StackErrors", std::move(stackErrorsJsonList));

  }

  if(m_userSettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userSettingsJsonList(m_userSettings.size());
   for(unsigned userSettingsIndex = 0; userSettingsIndex < userSettingsJsonList.GetLength(); ++userSettingsIndex)
   {
     userSettingsJsonList[userSettingsIndex].AsObject(m_userSettings[userSettingsIndex].Jsonize());
   }
   payload.WithArray("UserSettings", std::move(userSettingsJsonList));

  }

  if(m_applicationSettingsHasBeenSet)
  {
   payload.WithObject("ApplicationSettings", m_applicationSettings.Jsonize());

  }

  if(m_accessEndpointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accessEndpointsJsonList(m_accessEndpoints.size());
   for(unsigned accessEndpointsIndex = 0; accessEndpointsIndex < accessEndpointsJsonList.GetLength(); ++accessEndpointsIndex)
   {
     accessEndpointsJsonList[accessEndpointsIndex].AsObject(m_accessEndpoints[accessEndpointsIndex].Jsonize());
   }
   payload.WithArray("AccessEndpoints", std::move(accessEndpointsJsonList));

  }

  if(m_embedHostDomainsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> embedHostDomainsJsonList(m_embedHostDomains.size());
   for(unsigned embedHostDomainsIndex = 0; embedHostDomainsIndex < embedHostDomainsJsonList.GetLength(); ++embedHostDomainsIndex)
   {
     embedHostDomainsJsonList[embedHostDomainsIndex].AsString(m_embedHostDomains[embedHostDomainsIndex]);
   }
   payload.WithArray("EmbedHostDomains", std::move(embedHostDomainsJsonList));

  }

  if(m_streamingExperienceSettingsHasBeenSet)
  {
   payload.WithObject("StreamingExperienceSettings", m_streamingExperienceSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
