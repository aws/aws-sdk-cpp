/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/ListAnalyzedResourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAnalyzedResourcesResult::ListAnalyzedResourcesResult()
{
}

ListAnalyzedResourcesResult::ListAnalyzedResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAnalyzedResourcesResult& ListAnalyzedResourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("analyzedResources"))
  {
    Aws::Utils::Array<JsonView> analyzedResourcesJsonList = jsonValue.GetArray("analyzedResources");
    for(unsigned analyzedResourcesIndex = 0; analyzedResourcesIndex < analyzedResourcesJsonList.GetLength(); ++analyzedResourcesIndex)
    {
      m_analyzedResources.push_back(analyzedResourcesJsonList[analyzedResourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
