/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/ListAnalyzersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAnalyzersResult::ListAnalyzersResult()
{
}

ListAnalyzersResult::ListAnalyzersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAnalyzersResult& ListAnalyzersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("analyzers"))
  {
    Aws::Utils::Array<JsonView> analyzersJsonList = jsonValue.GetArray("analyzers");
    for(unsigned analyzersIndex = 0; analyzersIndex < analyzersJsonList.GetLength(); ++analyzersIndex)
    {
      m_analyzers.push_back(analyzersJsonList[analyzersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
