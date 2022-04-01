/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/ListObjectChildrenResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListObjectChildrenResult::ListObjectChildrenResult()
{
}

ListObjectChildrenResult::ListObjectChildrenResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListObjectChildrenResult& ListObjectChildrenResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Children"))
  {
    Aws::Map<Aws::String, JsonView> childrenJsonMap = jsonValue.GetObject("Children").GetAllObjects();
    for(auto& childrenItem : childrenJsonMap)
    {
      m_children[childrenItem.first] = childrenItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
