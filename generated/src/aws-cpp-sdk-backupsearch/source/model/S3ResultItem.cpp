/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/S3ResultItem.h>
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

S3ResultItem::S3ResultItem(JsonView jsonValue)
{
  *this = jsonValue;
}

S3ResultItem& S3ResultItem::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("ObjectKey"))
  {
    m_objectKey = jsonValue.GetString("ObjectKey");
    m_objectKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ObjectSize"))
  {
    m_objectSize = jsonValue.GetInt64("ObjectSize");
    m_objectSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ETag"))
  {
    m_eTag = jsonValue.GetString("ETag");
    m_eTagHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VersionId"))
  {
    m_versionId = jsonValue.GetString("VersionId");
    m_versionIdHasBeenSet = true;
  }
  return *this;
}

JsonValue S3ResultItem::Jsonize() const
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

  if(m_objectKeyHasBeenSet)
  {
   payload.WithString("ObjectKey", m_objectKey);

  }

  if(m_objectSizeHasBeenSet)
  {
   payload.WithInt64("ObjectSize", m_objectSize);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_eTagHasBeenSet)
  {
   payload.WithString("ETag", m_eTag);

  }

  if(m_versionIdHasBeenSet)
  {
   payload.WithString("VersionId", m_versionId);

  }

  return payload;
}

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
