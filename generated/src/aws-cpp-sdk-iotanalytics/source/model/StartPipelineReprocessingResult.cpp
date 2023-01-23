/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/StartPipelineReprocessingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartPipelineReprocessingResult::StartPipelineReprocessingResult()
{
}

StartPipelineReprocessingResult::StartPipelineReprocessingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartPipelineReprocessingResult& StartPipelineReprocessingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("reprocessingId"))
  {
    m_reprocessingId = jsonValue.GetString("reprocessingId");

  }



  return *this;
}
