/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/GetExternalModelsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetExternalModelsResult::GetExternalModelsResult()
{
}

GetExternalModelsResult::GetExternalModelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetExternalModelsResult& GetExternalModelsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("externalModels"))
  {
    Aws::Utils::Array<JsonView> externalModelsJsonList = jsonValue.GetArray("externalModels");
    for(unsigned externalModelsIndex = 0; externalModelsIndex < externalModelsJsonList.GetLength(); ++externalModelsIndex)
    {
      m_externalModels.push_back(externalModelsJsonList[externalModelsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
