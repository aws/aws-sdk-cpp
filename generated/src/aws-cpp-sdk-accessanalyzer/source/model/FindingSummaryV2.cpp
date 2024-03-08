/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/FindingSummaryV2.h>
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

FindingSummaryV2::FindingSummaryV2() : 
    m_analyzedAtHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_idHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceOwnerAccountHasBeenSet(false),
    m_status(FindingStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_findingType(FindingType::NOT_SET),
    m_findingTypeHasBeenSet(false)
{
}

FindingSummaryV2::FindingSummaryV2(JsonView jsonValue) : 
    m_analyzedAtHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_idHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceOwnerAccountHasBeenSet(false),
    m_status(FindingStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_findingType(FindingType::NOT_SET),
    m_findingTypeHasBeenSet(false)
{
  *this = jsonValue;
}

FindingSummaryV2& FindingSummaryV2::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("analyzedAt"))
  {
    m_analyzedAt = jsonValue.GetString("analyzedAt");

    m_analyzedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetString("error");

    m_errorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetString("resource");

    m_resourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceOwnerAccount"))
  {
    m_resourceOwnerAccount = jsonValue.GetString("resourceOwnerAccount");

    m_resourceOwnerAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = FindingStatusMapper::GetFindingStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("findingType"))
  {
    m_findingType = FindingTypeMapper::GetFindingTypeForName(jsonValue.GetString("findingType"));

    m_findingTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue FindingSummaryV2::Jsonize() const
{
  JsonValue payload;

  if(m_analyzedAtHasBeenSet)
  {
   payload.WithString("analyzedAt", m_analyzedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_errorHasBeenSet)
  {
   payload.WithString("error", m_error);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithString("resource", m_resource);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_resourceOwnerAccountHasBeenSet)
  {
   payload.WithString("resourceOwnerAccount", m_resourceOwnerAccount);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", FindingStatusMapper::GetNameForFindingStatus(m_status));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_findingTypeHasBeenSet)
  {
   payload.WithString("findingType", FindingTypeMapper::GetNameForFindingType(m_findingType));
  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
