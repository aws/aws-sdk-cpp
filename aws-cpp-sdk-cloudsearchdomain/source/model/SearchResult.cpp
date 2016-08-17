/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/cloudsearchdomain/model/SearchResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudSearchDomain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchResult::SearchResult()
{
}

SearchResult::SearchResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SearchResult& SearchResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
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
    Aws::Map<Aws::String, JsonValue> facetsJsonMap = jsonValue.GetObject("facets").GetAllObjects();
    for(auto& facetsItem : facetsJsonMap)
    {
      m_facets[facetsItem.first] = facetsItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("stats"))
  {
    Aws::Map<Aws::String, JsonValue> statsJsonMap = jsonValue.GetObject("stats").GetAllObjects();
    for(auto& statsItem : statsJsonMap)
    {
      m_stats[statsItem.first] = statsItem.second.AsObject();
    }
  }



  return *this;
}
