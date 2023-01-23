/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/RunPipelineActivityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::IoTAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RunPipelineActivityResult::RunPipelineActivityResult()
{
}

RunPipelineActivityResult::RunPipelineActivityResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RunPipelineActivityResult& RunPipelineActivityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("payloads"))
  {
    Aws::Utils::Array<JsonView> payloadsJsonList = jsonValue.GetArray("payloads");
    for(unsigned payloadsIndex = 0; payloadsIndex < payloadsJsonList.GetLength(); ++payloadsIndex)
    {
      m_payloads.push_back(HashingUtils::Base64Decode(payloadsJsonList[payloadsIndex].AsString()));
    }
  }

  if(jsonValue.ValueExists("logResult"))
  {
    m_logResult = jsonValue.GetString("logResult");

  }



  return *this;
}
