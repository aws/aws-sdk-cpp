/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CommandSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

CommandSummary::CommandSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

CommandSummary& CommandSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("commandArn"))
  {
    m_commandArn = jsonValue.GetString("commandArn");
    m_commandArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("commandId"))
  {
    m_commandId = jsonValue.GetString("commandId");
    m_commandIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deprecated"))
  {
    m_deprecated = jsonValue.GetBool("deprecated");
    m_deprecatedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pendingDeletion"))
  {
    m_pendingDeletion = jsonValue.GetBool("pendingDeletion");
    m_pendingDeletionHasBeenSet = true;
  }
  return *this;
}

JsonValue CommandSummary::Jsonize() const
{
  JsonValue payload;

  if(m_commandArnHasBeenSet)
  {
   payload.WithString("commandArn", m_commandArn);

  }

  if(m_commandIdHasBeenSet)
  {
   payload.WithString("commandId", m_commandId);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_deprecatedHasBeenSet)
  {
   payload.WithBool("deprecated", m_deprecated);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_pendingDeletionHasBeenSet)
  {
   payload.WithBool("pendingDeletion", m_pendingDeletion);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
