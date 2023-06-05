/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxDatabaseListEntry.h>
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

KxDatabaseListEntry::KxDatabaseListEntry() : 
    m_databaseNameHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_lastModifiedTimestampHasBeenSet(false)
{
}

KxDatabaseListEntry::KxDatabaseListEntry(JsonView jsonValue) : 
    m_databaseNameHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_lastModifiedTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

KxDatabaseListEntry& KxDatabaseListEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("databaseName"))
  {
    m_databaseName = jsonValue.GetString("databaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("createdTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedTimestamp"))
  {
    m_lastModifiedTimestamp = jsonValue.GetDouble("lastModifiedTimestamp");

    m_lastModifiedTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue KxDatabaseListEntry::Jsonize() const
{
  JsonValue payload;

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("databaseName", m_databaseName);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("createdTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimestampHasBeenSet)
  {
   payload.WithDouble("lastModifiedTimestamp", m_lastModifiedTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
