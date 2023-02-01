/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/GetModelsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetModelsResult::GetModelsResult()
{
}

GetModelsResult::GetModelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetModelsResult& GetModelsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("models"))
  {
    Aws::Utils::Array<JsonView> modelsJsonList = jsonValue.GetArray("models");
    for(unsigned modelsIndex = 0; modelsIndex < modelsJsonList.GetLength(); ++modelsIndex)
    {
      m_models.push_back(modelsJsonList[modelsIndex].AsObject());
    }
  }



  return *this;
}
