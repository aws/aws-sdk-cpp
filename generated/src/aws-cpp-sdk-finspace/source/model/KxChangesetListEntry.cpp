/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxChangesetListEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

KxChangesetListEntry::KxChangesetListEntry() : 
    m_changesetIdHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_activeFromTimestampHasBeenSet(false),
    m_lastModifiedTimestampHasBeenSet(false),
    m_status(ChangesetStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

KxChangesetListEntry::KxChangesetListEntry(JsonView jsonValue) : 
    m_changesetIdHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_activeFromTimestampHasBeenSet(false),
    m_lastModifiedTimestampHasBeenSet(false),
    m_status(ChangesetStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

KxChangesetListEntry& KxChangesetListEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("changesetId"))
  {
    m_changesetId = jsonValue.GetString("changesetId");

    m_changesetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("createdTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activeFromTimestamp"))
  {
    m_activeFromTimestamp = jsonValue.GetDouble("activeFromTimestamp");

    m_activeFromTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedTimestamp"))
  {
    m_lastModifiedTimestamp = jsonValue.GetDouble("lastModifiedTimestamp");

    m_lastModifiedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ChangesetStatusMapper::GetChangesetStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue KxChangesetListEntry::Jsonize() const
{
  JsonValue payload;

  if(m_changesetIdHasBeenSet)
  {
   payload.WithString("changesetId", m_changesetId);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("createdTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_activeFromTimestampHasBeenSet)
  {
   payload.WithDouble("activeFromTimestamp", m_activeFromTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimestampHasBeenSet)
  {
   payload.WithDouble("lastModifiedTimestamp", m_lastModifiedTimestamp.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ChangesetStatusMapper::GetNameForChangesetStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
