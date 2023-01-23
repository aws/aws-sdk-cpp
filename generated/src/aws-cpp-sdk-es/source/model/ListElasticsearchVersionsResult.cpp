/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/ListElasticsearchVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListElasticsearchVersionsResult::ListElasticsearchVersionsResult()
{
}

ListElasticsearchVersionsResult::ListElasticsearchVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListElasticsearchVersionsResult& ListElasticsearchVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ElasticsearchVersions"))
  {
    Aws::Utils::Array<JsonView> elasticsearchVersionsJsonList = jsonValue.GetArray("ElasticsearchVersions");
    for(unsigned elasticsearchVersionsIndex = 0; elasticsearchVersionsIndex < elasticsearchVersionsJsonList.GetLength(); ++elasticsearchVersionsIndex)
    {
      m_elasticsearchVersions.push_back(elasticsearchVersionsJsonList[elasticsearchVersionsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
