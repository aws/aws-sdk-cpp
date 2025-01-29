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

GetAddressListImportJobResult::GetAddressListImportJobResult() : 
    m_failedItemsCount(0),
    m_importedItemsCount(0),
    m_status(ImportJobStatus::NOT_SET)
{
}

GetAddressListImportJobResult::GetAddressListImportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetAddressListImportJobResult()
{
  *this = result;
}

GetAddressListImportJobResult& GetAddressListImportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AddressListId"))
  {
    m_addressListId = jsonValue.GetString("AddressListId");

  }

  if(jsonValue.ValueExists("CompletedTimestamp"))
  {
    m_completedTimestamp = jsonValue.GetDouble("CompletedTimestamp");

  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

  }

  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetString("Error");

  }

  if(jsonValue.ValueExists("FailedItemsCount"))
  {
    m_failedItemsCount = jsonValue.GetInteger("FailedItemsCount");

  }

  if(jsonValue.ValueExists("ImportDataFormat"))
  {
    m_importDataFormat = jsonValue.GetObject("ImportDataFormat");

  }

  if(jsonValue.ValueExists("ImportedItemsCount"))
  {
    m_importedItemsCount = jsonValue.GetInteger("ImportedItemsCount");

  }

  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("PreSignedUrl"))
  {
    m_preSignedUrl = jsonValue.GetString("PreSignedUrl");

  }

  if(jsonValue.ValueExists("StartTimestamp"))
  {
    m_startTimestamp = jsonValue.GetDouble("StartTimestamp");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ImportJobStatusMapper::GetImportJobStatusForName(jsonValue.GetString("Status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
