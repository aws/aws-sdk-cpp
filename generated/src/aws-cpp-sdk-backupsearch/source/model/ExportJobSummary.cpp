/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/ExportJobSummary.h>
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

ExportJobSummary::ExportJobSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ExportJobSummary& ExportJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExportJobIdentifier"))
  {
    m_exportJobIdentifier = jsonValue.GetString("ExportJobIdentifier");
    m_exportJobIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExportJobArn"))
  {
    m_exportJobArn = jsonValue.GetString("ExportJobArn");
    m_exportJobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ExportJobStatusMapper::GetExportJobStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompletionTime"))
  {
    m_completionTime = jsonValue.GetDouble("CompletionTime");
    m_completionTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SearchJobArn"))
  {
    m_searchJobArn = jsonValue.GetString("SearchJobArn");
    m_searchJobArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ExportJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_exportJobIdentifierHasBeenSet)
  {
   payload.WithString("ExportJobIdentifier", m_exportJobIdentifier);

  }

  if(m_exportJobArnHasBeenSet)
  {
   payload.WithString("ExportJobArn", m_exportJobArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ExportJobStatusMapper::GetNameForExportJobStatus(m_status));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_completionTimeHasBeenSet)
  {
   payload.WithDouble("CompletionTime", m_completionTime.SecondsWithMSPrecision());
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_searchJobArnHasBeenSet)
  {
   payload.WithString("SearchJobArn", m_searchJobArn);

  }

  return payload;
}

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
