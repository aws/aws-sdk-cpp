/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearchdomain/model/SearchResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudSearchDomain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchResult::SearchResult()
{
}

SearchResult::SearchResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SearchResult& SearchResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");

  }

  if(jsonValue.ValueExists("hits"))
  {
    m_hits = jsonValue.GetObject("hits");

  }

  if(jsonValue.ValueExists("facets"))
  {
    Aws::Map<Aws::String, JsonView> facetsJsonMap = jsonValue.GetObject("facets").GetAllObjects();
    for(auto& facetsItem : facetsJsonMap)
    {
      m_facets[facetsItem.first] = facetsItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("stats"))
  {
    Aws::Map<Aws::String, JsonView> statsJsonMap = jsonValue.GetObject("stats").GetAllObjects();
    for(auto& statsItem : statsJsonMap)
    {
      m_stats[statsItem.first] = statsItem.second.AsObject();
    }
  }



  return *this;
}
