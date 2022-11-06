/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/AnalyzedResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

AnalyzedResource::AnalyzedResource() : 
    m_resourceArnHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_analyzedAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_isPublic(false),
    m_isPublicHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_sharedViaHasBeenSet(false),
    m_status(FindingStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_resourceOwnerAccountHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

AnalyzedResource::AnalyzedResource(JsonView jsonValue) : 
    m_resourceArnHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_analyzedAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_isPublic(false),
    m_isPublicHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_sharedViaHasBeenSet(false),
    m_status(FindingStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_resourceOwnerAccountHasBeenSet(false),
    m_errorHasBeenSet(false)
{
  *this = jsonValue;
}

AnalyzedResource& AnalyzedResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("analyzedAt"))
  {
    m_analyzedAt = jsonValue.GetString("analyzedAt");

    m_analyzedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isPublic"))
  {
    m_isPublic = jsonValue.GetBool("isPublic");

    m_isPublicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actions"))
  {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("actions");
    for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
    {
      m_actions.push_back(actionsJsonList[actionsIndex].AsString());
    }
    m_actionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sharedVia"))
  {
    Aws::Utils::Array<JsonView> sharedViaJsonList = jsonValue.GetArray("sharedVia");
    for(unsigned sharedViaIndex = 0; sharedViaIndex < sharedViaJsonList.GetLength(); ++sharedViaIndex)
    {
      m_sharedVia.push_back(sharedViaJsonList[sharedViaIndex].AsString());
    }
    m_sharedViaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = FindingStatusMapper::GetFindingStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceOwnerAccount"))
  {
    m_resourceOwnerAccount = jsonValue.GetString("resourceOwnerAccount");

    m_resourceOwnerAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetString("error");

    m_errorHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalyzedResource::Jsonize() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_analyzedAtHasBeenSet)
  {
   payload.WithString("analyzedAt", m_analyzedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_isPublicHasBeenSet)
  {
   payload.WithBool("isPublic", m_isPublic);

  }

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsString(m_actions[actionsIndex]);
   }
   payload.WithArray("actions", std::move(actionsJsonList));

  }

  if(m_sharedViaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sharedViaJsonList(m_sharedVia.size());
   for(unsigned sharedViaIndex = 0; sharedViaIndex < sharedViaJsonList.GetLength(); ++sharedViaIndex)
   {
     sharedViaJsonList[sharedViaIndex].AsString(m_sharedVia[sharedViaIndex]);
   }
   payload.WithArray("sharedVia", std::move(sharedViaJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", FindingStatusMapper::GetNameForFindingStatus(m_status));
  }

  if(m_resourceOwnerAccountHasBeenSet)
  {
   payload.WithString("resourceOwnerAccount", m_resourceOwnerAccount);

  }

  if(m_errorHasBeenSet)
  {
   payload.WithString("error", m_error);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
