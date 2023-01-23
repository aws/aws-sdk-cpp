/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetTagsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTagsResult::GetTagsResult() : 
    m_returnSize(0),
    m_totalSize(0)
{
}

GetTagsResult::GetTagsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_returnSize(0),
    m_totalSize(0)
{
  *this = result;
}

GetTagsResult& GetTagsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("ReturnSize"))
  {
    m_returnSize = jsonValue.GetInteger("ReturnSize");

  }

  if(jsonValue.ValueExists("TotalSize"))
  {
    m_totalSize = jsonValue.GetInteger("TotalSize");

  }



  return *this;
}
