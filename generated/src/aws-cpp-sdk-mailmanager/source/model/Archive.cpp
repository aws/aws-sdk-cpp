/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/Archive.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

Archive::Archive(JsonView jsonValue)
{
  *this = jsonValue;
}

Archive& Archive::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ArchiveId"))
  {
    m_archiveId = jsonValue.GetString("ArchiveId");
    m_archiveIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ArchiveName"))
  {
    m_archiveName = jsonValue.GetString("ArchiveName");
    m_archiveNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ArchiveState"))
  {
    m_archiveState = ArchiveStateMapper::GetArchiveStateForName(jsonValue.GetString("ArchiveState"));
    m_archiveStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("LastUpdatedTimestamp");
    m_lastUpdatedTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue Archive::Jsonize() const
{
  JsonValue payload;

  if(m_archiveIdHasBeenSet)
  {
   payload.WithString("ArchiveId", m_archiveId);

  }

  if(m_archiveNameHasBeenSet)
  {
   payload.WithString("ArchiveName", m_archiveName);

  }

  if(m_archiveStateHasBeenSet)
  {
   payload.WithString("ArchiveState", ArchiveStateMapper::GetNameForArchiveState(m_archiveState));
  }

  if(m_lastUpdatedTimestampHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTimestamp", m_lastUpdatedTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
