/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/ImportJob.h>
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

ImportJob::ImportJob(JsonView jsonValue)
{
  *this = jsonValue;
}

ImportJob& ImportJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");
    m_jobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ImportJobStatusMapper::GetImportJobStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PreSignedUrl"))
  {
    m_preSignedUrl = jsonValue.GetString("PreSignedUrl");
    m_preSignedUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImportedItemsCount"))
  {
    m_importedItemsCount = jsonValue.GetInteger("ImportedItemsCount");
    m_importedItemsCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailedItemsCount"))
  {
    m_failedItemsCount = jsonValue.GetInteger("FailedItemsCount");
    m_failedItemsCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImportDataFormat"))
  {
    m_importDataFormat = jsonValue.GetObject("ImportDataFormat");
    m_importDataFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AddressListId"))
  {
    m_addressListId = jsonValue.GetString("AddressListId");
    m_addressListIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");
    m_createdTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTimestamp"))
  {
    m_startTimestamp = jsonValue.GetDouble("StartTimestamp");
    m_startTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompletedTimestamp"))
  {
    m_completedTimestamp = jsonValue.GetDouble("CompletedTimestamp");
    m_completedTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetString("Error");
    m_errorHasBeenSet = true;
  }
  return *this;
}

JsonValue ImportJob::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ImportJobStatusMapper::GetNameForImportJobStatus(m_status));
  }

  if(m_preSignedUrlHasBeenSet)
  {
   payload.WithString("PreSignedUrl", m_preSignedUrl);

  }

  if(m_importedItemsCountHasBeenSet)
  {
   payload.WithInteger("ImportedItemsCount", m_importedItemsCount);

  }

  if(m_failedItemsCountHasBeenSet)
  {
   payload.WithInteger("FailedItemsCount", m_failedItemsCount);

  }

  if(m_importDataFormatHasBeenSet)
  {
   payload.WithObject("ImportDataFormat", m_importDataFormat.Jsonize());

  }

  if(m_addressListIdHasBeenSet)
  {
   payload.WithString("AddressListId", m_addressListId);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_startTimestampHasBeenSet)
  {
   payload.WithDouble("StartTimestamp", m_startTimestamp.SecondsWithMSPrecision());
  }

  if(m_completedTimestampHasBeenSet)
  {
   payload.WithDouble("CompletedTimestamp", m_completedTimestamp.SecondsWithMSPrecision());
  }

  if(m_errorHasBeenSet)
  {
   payload.WithString("Error", m_error);

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
