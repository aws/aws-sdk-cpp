/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/ListDataViewsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FinSpaceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDataViewsResult::ListDataViewsResult()
{
}

ListDataViewsResult::ListDataViewsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDataViewsResult& ListDataViewsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("dataViews"))
  {
    Aws::Utils::Array<JsonView> dataViewsJsonList = jsonValue.GetArray("dataViews");
    for(unsigned dataViewsIndex = 0; dataViewsIndex < dataViewsJsonList.GetLength(); ++dataViewsIndex)
    {
      m_dataViews.push_back(dataViewsJsonList[dataViewsIndex].AsObject());
    }
  }



  return *this;
}
