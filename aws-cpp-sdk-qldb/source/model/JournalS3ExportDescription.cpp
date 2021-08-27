/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/JournalS3ExportDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QLDB
{
namespace Model
{

JournalS3ExportDescription::JournalS3ExportDescription() : 
    m_ledgerNameHasBeenSet(false),
    m_exportIdHasBeenSet(false),
    m_exportCreationTimeHasBeenSet(false),
    m_status(ExportStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_inclusiveStartTimeHasBeenSet(false),
    m_exclusiveEndTimeHasBeenSet(false),
    m_s3ExportConfigurationHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

JournalS3ExportDescription::JournalS3ExportDescription(JsonView jsonValue) : 
    m_ledgerNameHasBeenSet(false),
    m_exportIdHasBeenSet(false),
    m_exportCreationTimeHasBeenSet(false),
    m_status(ExportStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_inclusiveStartTimeHasBeenSet(false),
    m_exclusiveEndTimeHasBeenSet(false),
    m_s3ExportConfigurationHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

JournalS3ExportDescription& JournalS3ExportDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LedgerName"))
  {
    m_ledgerName = jsonValue.GetString("LedgerName");

    m_ledgerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportId"))
  {
    m_exportId = jsonValue.GetString("ExportId");

    m_exportIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportCreationTime"))
  {
    m_exportCreationTime = jsonValue.GetDouble("ExportCreationTime");

    m_exportCreationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ExportStatusMapper::GetExportStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InclusiveStartTime"))
  {
    m_inclusiveStartTime = jsonValue.GetDouble("InclusiveStartTime");

    m_inclusiveStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExclusiveEndTime"))
  {
    m_exclusiveEndTime = jsonValue.GetDouble("ExclusiveEndTime");

    m_exclusiveEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3ExportConfiguration"))
  {
    m_s3ExportConfiguration = jsonValue.GetObject("S3ExportConfiguration");

    m_s3ExportConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue JournalS3ExportDescription::Jsonize() const
{
  JsonValue payload;

  if(m_ledgerNameHasBeenSet)
  {
   payload.WithString("LedgerName", m_ledgerName);

  }

  if(m_exportIdHasBeenSet)
  {
   payload.WithString("ExportId", m_exportId);

  }

  if(m_exportCreationTimeHasBeenSet)
  {
   payload.WithDouble("ExportCreationTime", m_exportCreationTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ExportStatusMapper::GetNameForExportStatus(m_status));
  }

  if(m_inclusiveStartTimeHasBeenSet)
  {
   payload.WithDouble("InclusiveStartTime", m_inclusiveStartTime.SecondsWithMSPrecision());
  }

  if(m_exclusiveEndTimeHasBeenSet)
  {
   payload.WithDouble("ExclusiveEndTime", m_exclusiveEndTime.SecondsWithMSPrecision());
  }

  if(m_s3ExportConfigurationHasBeenSet)
  {
   payload.WithObject("S3ExportConfiguration", m_s3ExportConfiguration.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace QLDB
} // namespace Aws
