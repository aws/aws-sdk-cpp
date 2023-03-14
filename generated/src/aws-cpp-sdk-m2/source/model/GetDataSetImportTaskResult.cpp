/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/GetDataSetImportTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDataSetImportTaskResult::GetDataSetImportTaskResult() : 
    m_status(DataSetTaskLifecycle::NOT_SET)
{
}

GetDataSetImportTaskResult::GetDataSetImportTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(DataSetTaskLifecycle::NOT_SET)
{
  *this = result;
}

GetDataSetImportTaskResult& GetDataSetImportTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("status"))
  {
    m_status = DataSetTaskLifecycleMapper::GetDataSetTaskLifecycleForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("summary"))
  {
    m_summary = jsonValue.GetObject("summary");

  }

  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
