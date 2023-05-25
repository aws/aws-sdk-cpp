/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/StartTableDataImportJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Honeycode::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartTableDataImportJobResult::StartTableDataImportJobResult() : 
    m_jobStatus(TableDataImportJobStatus::NOT_SET)
{
}

StartTableDataImportJobResult::StartTableDataImportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_jobStatus(TableDataImportJobStatus::NOT_SET)
{
  *this = result;
}

StartTableDataImportJobResult& StartTableDataImportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

  }

  if(jsonValue.ValueExists("jobStatus"))
  {
    m_jobStatus = TableDataImportJobStatusMapper::GetTableDataImportJobStatusForName(jsonValue.GetString("jobStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
