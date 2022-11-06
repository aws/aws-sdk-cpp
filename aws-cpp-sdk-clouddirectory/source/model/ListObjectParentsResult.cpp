/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/ListObjectParentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListObjectParentsResult::ListObjectParentsResult()
{
}

ListObjectParentsResult::ListObjectParentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListObjectParentsResult& ListObjectParentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Parents"))
  {
    Aws::Map<Aws::String, JsonView> parentsJsonMap = jsonValue.GetObject("Parents").GetAllObjects();
    for(auto& parentsItem : parentsJsonMap)
    {
      m_parents[parentsItem.first] = parentsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ParentLinks"))
  {
    Aws::Utils::Array<JsonView> parentLinksJsonList = jsonValue.GetArray("ParentLinks");
    for(unsigned parentLinksIndex = 0; parentLinksIndex < parentLinksJsonList.GetLength(); ++parentLinksIndex)
    {
      m_parentLinks.push_back(parentLinksJsonList[parentLinksIndex].AsObject());
    }
  }



  return *this;
}
