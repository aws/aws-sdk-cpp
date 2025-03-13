/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/EBSResultItem.h>
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

EBSResultItem::EBSResultItem(JsonView jsonValue)
{
  *this = jsonValue;
}

EBSResultItem& EBSResultItem::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("BackupVaultName"))
  {
    m_backupVaultName = jsonValue.GetString("BackupVaultName");
    m_backupVaultNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FileSystemIdentifier"))
  {
    m_fileSystemIdentifier = jsonValue.GetString("FileSystemIdentifier");
    m_fileSystemIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FilePath"))
  {
    m_filePath = jsonValue.GetString("FilePath");
    m_filePathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FileSize"))
  {
    m_fileSize = jsonValue.GetInt64("FileSize");
    m_fileSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue EBSResultItem::Jsonize() const
{
  JsonValue payload;

  if(m_backupResourceArnHasBeenSet)
  {
   payload.WithString("BackupResourceArn", m_backupResourceArn);

  }

  if(m_sourceResourceArnHasBeenSet)
  {
   payload.WithString("SourceResourceArn", m_sourceResourceArn);

  }

  if(m_backupVaultNameHasBeenSet)
  {
   payload.WithString("BackupVaultName", m_backupVaultName);

  }

  if(m_fileSystemIdentifierHasBeenSet)
  {
   payload.WithString("FileSystemIdentifier", m_fileSystemIdentifier);

  }

  if(m_filePathHasBeenSet)
  {
   payload.WithString("FilePath", m_filePath);

  }

  if(m_fileSizeHasBeenSet)
  {
   payload.WithInt64("FileSize", m_fileSize);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
