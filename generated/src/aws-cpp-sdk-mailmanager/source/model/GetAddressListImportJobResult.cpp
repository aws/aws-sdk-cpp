/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/GetAddressListImportJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAddressListImportJobResult::GetAddressListImportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAddressListImportJobResult& GetAddressListImportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
