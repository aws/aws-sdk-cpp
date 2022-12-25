/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/ListBatchJobExecutionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBatchJobExecutionsResult::ListBatchJobExecutionsResult()
{
}

ListBatchJobExecutionsResult::ListBatchJobExecutionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBatchJobExecutionsResult& ListBatchJobExecutionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("batchJobExecutions"))
  {
    Aws::Utils::Array<JsonView> batchJobExecutionsJsonList = jsonValue.GetArray("batchJobExecutions");
    for(unsigned batchJobExecutionsIndex = 0; batchJobExecutionsIndex < batchJobExecutionsJsonList.GetLength(); ++batchJobExecutionsIndex)
    {
      m_batchJobExecutions.push_back(batchJobExecutionsJsonList[batchJobExecutionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
