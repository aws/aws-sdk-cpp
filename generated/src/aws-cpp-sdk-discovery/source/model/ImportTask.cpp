/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/ImportTask.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

ImportTask::ImportTask() : 
    m_importTaskIdHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_importUrlHasBeenSet(false),
    m_status(ImportStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_importRequestTimeHasBeenSet(false),
    m_importCompletionTimeHasBeenSet(false),
    m_importDeletedTimeHasBeenSet(false),
    m_serverImportSuccess(0),
    m_serverImportSuccessHasBeenSet(false),
    m_serverImportFailure(0),
    m_serverImportFailureHasBeenSet(false),
    m_applicationImportSuccess(0),
    m_applicationImportSuccessHasBeenSet(false),
    m_applicationImportFailure(0),
    m_applicationImportFailureHasBeenSet(false),
    m_errorsAndFailedEntriesZipHasBeenSet(false)
{
}

ImportTask::ImportTask(JsonView jsonValue) : 
    m_importTaskIdHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_importUrlHasBeenSet(false),
    m_status(ImportStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_importRequestTimeHasBeenSet(false),
    m_importCompletionTimeHasBeenSet(false),
    m_importDeletedTimeHasBeenSet(false),
    m_serverImportSuccess(0),
    m_serverImportSuccessHasBeenSet(false),
    m_serverImportFailure(0),
    m_serverImportFailureHasBeenSet(false),
    m_applicationImportSuccess(0),
    m_applicationImportSuccessHasBeenSet(false),
    m_applicationImportFailure(0),
    m_applicationImportFailureHasBeenSet(false),
    m_errorsAndFailedEntriesZipHasBeenSet(false)
{
  *this = jsonValue;
}

ImportTask& ImportTask::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("importTaskId"))
  {
    m_importTaskId = jsonValue.GetString("importTaskId");

    m_importTaskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientRequestToken"))
  {
    m_clientRequestToken = jsonValue.GetString("clientRequestToken");

    m_clientRequestTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("importUrl"))
  {
    m_importUrl = jsonValue.GetString("importUrl");

    m_importUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ImportStatusMapper::GetImportStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("importRequestTime"))
  {
    m_importRequestTime = jsonValue.GetDouble("importRequestTime");

    m_importRequestTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("importCompletionTime"))
  {
    m_importCompletionTime = jsonValue.GetDouble("importCompletionTime");

    m_importCompletionTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("importDeletedTime"))
  {
    m_importDeletedTime = jsonValue.GetDouble("importDeletedTime");

    m_importDeletedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverImportSuccess"))
  {
    m_serverImportSuccess = jsonValue.GetInteger("serverImportSuccess");

    m_serverImportSuccessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverImportFailure"))
  {
    m_serverImportFailure = jsonValue.GetInteger("serverImportFailure");

    m_serverImportFailureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationImportSuccess"))
  {
    m_applicationImportSuccess = jsonValue.GetInteger("applicationImportSuccess");

    m_applicationImportSuccessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationImportFailure"))
  {
    m_applicationImportFailure = jsonValue.GetInteger("applicationImportFailure");

    m_applicationImportFailureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorsAndFailedEntriesZip"))
  {
    m_errorsAndFailedEntriesZip = jsonValue.GetString("errorsAndFailedEntriesZip");

    m_errorsAndFailedEntriesZipHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportTask::Jsonize() const
{
  JsonValue payload;

  if(m_importTaskIdHasBeenSet)
  {
   payload.WithString("importTaskId", m_importTaskId);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_importUrlHasBeenSet)
  {
   payload.WithString("importUrl", m_importUrl);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ImportStatusMapper::GetNameForImportStatus(m_status));
  }

  if(m_importRequestTimeHasBeenSet)
  {
   payload.WithDouble("importRequestTime", m_importRequestTime.SecondsWithMSPrecision());
  }

  if(m_importCompletionTimeHasBeenSet)
  {
   payload.WithDouble("importCompletionTime", m_importCompletionTime.SecondsWithMSPrecision());
  }

  if(m_importDeletedTimeHasBeenSet)
  {
   payload.WithDouble("importDeletedTime", m_importDeletedTime.SecondsWithMSPrecision());
  }

  if(m_serverImportSuccessHasBeenSet)
  {
   payload.WithInteger("serverImportSuccess", m_serverImportSuccess);

  }

  if(m_serverImportFailureHasBeenSet)
  {
   payload.WithInteger("serverImportFailure", m_serverImportFailure);

  }

  if(m_applicationImportSuccessHasBeenSet)
  {
   payload.WithInteger("applicationImportSuccess", m_applicationImportSuccess);

  }

  if(m_applicationImportFailureHasBeenSet)
  {
   payload.WithInteger("applicationImportFailure", m_applicationImportFailure);

  }

  if(m_errorsAndFailedEntriesZipHasBeenSet)
  {
   payload.WithString("errorsAndFailedEntriesZip", m_errorsAndFailedEntriesZip);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
