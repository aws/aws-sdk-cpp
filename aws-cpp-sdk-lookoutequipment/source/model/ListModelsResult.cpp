/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/ListModelsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListModelsResult::ListModelsResult()
{
}

ListModelsResult::ListModelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListModelsResult& ListModelsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ModelSummaries"))
  {
    Aws::Utils::Array<JsonView> modelSummariesJsonList = jsonValue.GetArray("ModelSummaries");
    for(unsigned modelSummariesIndex = 0; modelSummariesIndex < modelSummariesJsonList.GetLength(); ++modelSummariesIndex)
    {
      m_modelSummaries.push_back(modelSummariesJsonList[modelSummariesIndex].AsObject());
    }
  }



  return *this;
}
