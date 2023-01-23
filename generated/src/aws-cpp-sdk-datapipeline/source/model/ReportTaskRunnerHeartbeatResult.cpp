/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/model/ReportTaskRunnerHeartbeatResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ReportTaskRunnerHeartbeatResult::ReportTaskRunnerHeartbeatResult() : 
    m_terminate(false)
{
}

ReportTaskRunnerHeartbeatResult::ReportTaskRunnerHeartbeatResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_terminate(false)
{
  *this = result;
}

ReportTaskRunnerHeartbeatResult& ReportTaskRunnerHeartbeatResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("terminate"))
  {
    m_terminate = jsonValue.GetBool("terminate");

  }



  return *this;
}
