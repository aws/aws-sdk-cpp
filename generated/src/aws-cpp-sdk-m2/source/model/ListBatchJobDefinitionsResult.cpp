/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/ListBatchJobDefinitionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBatchJobDefinitionsResult::ListBatchJobDefinitionsResult()
{
}

ListBatchJobDefinitionsResult::ListBatchJobDefinitionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBatchJobDefinitionsResult& ListBatchJobDefinitionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("batchJobDefinitions"))
  {
    Aws::Utils::Array<JsonView> batchJobDefinitionsJsonList = jsonValue.GetArray("batchJobDefinitions");
    for(unsigned batchJobDefinitionsIndex = 0; batchJobDefinitionsIndex < batchJobDefinitionsJsonList.GetLength(); ++batchJobDefinitionsIndex)
    {
      m_batchJobDefinitions.push_back(batchJobDefinitionsJsonList[batchJobDefinitionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
