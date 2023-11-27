/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/SyncBlocker.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeStarconnections
{
namespace Model
{

SyncBlocker::SyncBlocker() : 
    m_idHasBeenSet(false),
    m_type(BlockerType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(BlockerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdReasonHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_contextsHasBeenSet(false),
    m_resolvedReasonHasBeenSet(false),
    m_resolvedAtHasBeenSet(false)
{
}

SyncBlocker::SyncBlocker(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_type(BlockerType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(BlockerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdReasonHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_contextsHasBeenSet(false),
    m_resolvedReasonHasBeenSet(false),
    m_resolvedAtHasBeenSet(false)
{
  *this = jsonValue;
}

SyncBlocker& SyncBlocker::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = BlockerTypeMapper::GetBlockerTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = BlockerStatusMapper::GetBlockerStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedReason"))
  {
    m_createdReason = jsonValue.GetString("CreatedReason");

    m_createdReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Contexts"))
  {
    Aws::Utils::Array<JsonView> contextsJsonList = jsonValue.GetArray("Contexts");
    for(unsigned contextsIndex = 0; contextsIndex < contextsJsonList.GetLength(); ++contextsIndex)
    {
      m_contexts.push_back(contextsJsonList[contextsIndex].AsObject());
    }
    m_contextsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResolvedReason"))
  {
    m_resolvedReason = jsonValue.GetString("ResolvedReason");

    m_resolvedReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResolvedAt"))
  {
    m_resolvedAt = jsonValue.GetDouble("ResolvedAt");

    m_resolvedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue SyncBlocker::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", BlockerTypeMapper::GetNameForBlockerType(m_type));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", BlockerStatusMapper::GetNameForBlockerStatus(m_status));
  }

  if(m_createdReasonHasBeenSet)
  {
   payload.WithString("CreatedReason", m_createdReason);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_contextsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contextsJsonList(m_contexts.size());
   for(unsigned contextsIndex = 0; contextsIndex < contextsJsonList.GetLength(); ++contextsIndex)
   {
     contextsJsonList[contextsIndex].AsObject(m_contexts[contextsIndex].Jsonize());
   }
   payload.WithArray("Contexts", std::move(contextsJsonList));

  }

  if(m_resolvedReasonHasBeenSet)
  {
   payload.WithString("ResolvedReason", m_resolvedReason);

  }

  if(m_resolvedAtHasBeenSet)
  {
   payload.WithDouble("ResolvedAt", m_resolvedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
