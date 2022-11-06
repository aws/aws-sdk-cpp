/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListCodeRepositoriesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCodeRepositoriesResult::ListCodeRepositoriesResult()
{
}

ListCodeRepositoriesResult::ListCodeRepositoriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCodeRepositoriesResult& ListCodeRepositoriesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CodeRepositorySummaryList"))
  {
    Aws::Utils::Array<JsonView> codeRepositorySummaryListJsonList = jsonValue.GetArray("CodeRepositorySummaryList");
    for(unsigned codeRepositorySummaryListIndex = 0; codeRepositorySummaryListIndex < codeRepositorySummaryListJsonList.GetLength(); ++codeRepositorySummaryListIndex)
    {
      m_codeRepositorySummaryList.push_back(codeRepositorySummaryListJsonList[codeRepositorySummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
