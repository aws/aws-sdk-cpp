/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/SearchJobBackupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BackupSearch
{
namespace Model
{

SearchJobBackupsResult::SearchJobBackupsResult(JsonView jsonValue)
{
  *this = jsonValue;
}

SearchJobBackupsResult& SearchJobBackupsResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = SearchJobStateMapper::GetSearchJobStateForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("ResourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BackupResourceArn"))
  {
    m_backupResourceArn = jsonValue.GetString("BackupResourceArn");
    m_backupResourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceResourceArn"))
  {
    m_sourceResourceArn = jsonValue.GetString("SourceResourceArn");
    m_sourceResourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IndexCreationTime"))
  {
    m_indexCreationTime = jsonValue.GetDouble("IndexCreationTime");
    m_indexCreationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BackupCreationTime"))
  {
    m_backupCreationTime = jsonValue.GetDouble("BackupCreationTime");
    m_backupCreationTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchJobBackupsResult::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", SearchJobStateMapper::GetNameForSearchJobState(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_backupResourceArnHasBeenSet)
  {
   payload.WithString("BackupResourceArn", m_backupResourceArn);

  }

  if(m_sourceResourceArnHasBeenSet)
  {
   payload.WithString("SourceResourceArn", m_sourceResourceArn);

  }

  if(m_indexCreationTimeHasBeenSet)
  {
   payload.WithDouble("IndexCreationTime", m_indexCreationTime.SecondsWithMSPrecision());
  }

  if(m_backupCreationTimeHasBeenSet)
  {
   payload.WithDouble("BackupCreationTime", m_backupCreationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
