/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/ListElasticsearchInstanceTypesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListElasticsearchInstanceTypesResult::ListElasticsearchInstanceTypesResult()
{
}

ListElasticsearchInstanceTypesResult::ListElasticsearchInstanceTypesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListElasticsearchInstanceTypesResult& ListElasticsearchInstanceTypesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ElasticsearchInstanceTypes"))
  {
    Aws::Utils::Array<JsonView> elasticsearchInstanceTypesJsonList = jsonValue.GetArray("ElasticsearchInstanceTypes");
    for(unsigned elasticsearchInstanceTypesIndex = 0; elasticsearchInstanceTypesIndex < elasticsearchInstanceTypesJsonList.GetLength(); ++elasticsearchInstanceTypesIndex)
    {
      m_elasticsearchInstanceTypes.push_back(ESPartitionInstanceTypeMapper::GetESPartitionInstanceTypeForName(elasticsearchInstanceTypesJsonList[elasticsearchInstanceTypesIndex].AsString()));
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
