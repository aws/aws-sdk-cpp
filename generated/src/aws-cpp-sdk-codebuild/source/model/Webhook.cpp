/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/Webhook.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

Webhook::Webhook() : 
    m_urlHasBeenSet(false),
    m_payloadUrlHasBeenSet(false),
    m_secretHasBeenSet(false),
    m_branchFilterHasBeenSet(false),
    m_filterGroupsHasBeenSet(false),
    m_buildType(WebhookBuildType::NOT_SET),
    m_buildTypeHasBeenSet(false),
    m_lastModifiedSecretHasBeenSet(false)
{
}

Webhook::Webhook(JsonView jsonValue) : 
    m_urlHasBeenSet(false),
    m_payloadUrlHasBeenSet(false),
    m_secretHasBeenSet(false),
    m_branchFilterHasBeenSet(false),
    m_filterGroupsHasBeenSet(false),
    m_buildType(WebhookBuildType::NOT_SET),
    m_buildTypeHasBeenSet(false),
    m_lastModifiedSecretHasBeenSet(false)
{
  *this = jsonValue;
}

Webhook& Webhook::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("payloadUrl"))
  {
    m_payloadUrl = jsonValue.GetString("payloadUrl");

    m_payloadUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secret"))
  {
    m_secret = jsonValue.GetString("secret");

    m_secretHasBeenSet = true;
  }

  if(jsonValue.ValueExists("branchFilter"))
  {
    m_branchFilter = jsonValue.GetString("branchFilter");

    m_branchFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filterGroups"))
  {
    Aws::Utils::Array<JsonView> filterGroupsJsonList = jsonValue.GetArray("filterGroups");
    for(unsigned filterGroupsIndex = 0; filterGroupsIndex < filterGroupsJsonList.GetLength(); ++filterGroupsIndex)
    {
      Aws::Utils::Array<JsonView> filterGroupJsonList = filterGroupsJsonList[filterGroupsIndex].AsArray();
      Aws::Vector<WebhookFilter> filterGroupList;
      filterGroupList.reserve((size_t)filterGroupJsonList.GetLength());
      for(unsigned filterGroupIndex = 0; filterGroupIndex < filterGroupJsonList.GetLength(); ++filterGroupIndex)
      {
        filterGroupList.push_back(filterGroupJsonList[filterGroupIndex].AsObject());
      }
      m_filterGroups.push_back(std::move(filterGroupList));
    }
    m_filterGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("buildType"))
  {
    m_buildType = WebhookBuildTypeMapper::GetWebhookBuildTypeForName(jsonValue.GetString("buildType"));

    m_buildTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedSecret"))
  {
    m_lastModifiedSecret = jsonValue.GetDouble("lastModifiedSecret");

    m_lastModifiedSecretHasBeenSet = true;
  }

  return *this;
}

JsonValue Webhook::Jsonize() const
{
  JsonValue payload;

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  if(m_payloadUrlHasBeenSet)
  {
   payload.WithString("payloadUrl", m_payloadUrl);

  }

  if(m_secretHasBeenSet)
  {
   payload.WithString("secret", m_secret);

  }

  if(m_branchFilterHasBeenSet)
  {
   payload.WithString("branchFilter", m_branchFilter);

  }

  if(m_filterGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterGroupsJsonList(m_filterGroups.size());
   for(unsigned filterGroupsIndex = 0; filterGroupsIndex < filterGroupsJsonList.GetLength(); ++filterGroupsIndex)
   {
     Aws::Utils::Array<JsonValue> filterGroupJsonList(m_filterGroups[filterGroupsIndex].size());
     for(unsigned filterGroupIndex = 0; filterGroupIndex < filterGroupJsonList.GetLength(); ++filterGroupIndex)
     {
       filterGroupJsonList[filterGroupIndex].AsObject(m_filterGroups[filterGroupsIndex][filterGroupIndex].Jsonize());
     }
     filterGroupsJsonList[filterGroupsIndex].AsArray(std::move(filterGroupJsonList));
   }
   payload.WithArray("filterGroups", std::move(filterGroupsJsonList));

  }

  if(m_buildTypeHasBeenSet)
  {
   payload.WithString("buildType", WebhookBuildTypeMapper::GetNameForWebhookBuildType(m_buildType));
  }

  if(m_lastModifiedSecretHasBeenSet)
  {
   payload.WithDouble("lastModifiedSecret", m_lastModifiedSecret.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
