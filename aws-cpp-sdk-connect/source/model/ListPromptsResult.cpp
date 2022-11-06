/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListPromptsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPromptsResult::ListPromptsResult()
{
}

ListPromptsResult::ListPromptsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPromptsResult& ListPromptsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PromptSummaryList"))
  {
    Aws::Utils::Array<JsonView> promptSummaryListJsonList = jsonValue.GetArray("PromptSummaryList");
    for(unsigned promptSummaryListIndex = 0; promptSummaryListIndex < promptSummaryListJsonList.GetLength(); ++promptSummaryListIndex)
    {
      m_promptSummaryList.push_back(promptSummaryListJsonList[promptSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
