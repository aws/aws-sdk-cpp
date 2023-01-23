/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/GetBatchImportJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBatchImportJobsResult::GetBatchImportJobsResult()
{
}

GetBatchImportJobsResult::GetBatchImportJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBatchImportJobsResult& GetBatchImportJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("batchImports"))
  {
    Aws::Utils::Array<JsonView> batchImportsJsonList = jsonValue.GetArray("batchImports");
    for(unsigned batchImportsIndex = 0; batchImportsIndex < batchImportsJsonList.GetLength(); ++batchImportsIndex)
    {
      m_batchImports.push_back(batchImportsJsonList[batchImportsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
