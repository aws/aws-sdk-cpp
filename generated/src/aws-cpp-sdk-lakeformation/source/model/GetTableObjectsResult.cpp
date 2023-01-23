/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/GetTableObjectsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTableObjectsResult::GetTableObjectsResult()
{
}

GetTableObjectsResult::GetTableObjectsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTableObjectsResult& GetTableObjectsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Objects"))
  {
    Aws::Utils::Array<JsonView> objectsJsonList = jsonValue.GetArray("Objects");
    for(unsigned objectsIndex = 0; objectsIndex < objectsJsonList.GetLength(); ++objectsIndex)
    {
      m_objects.push_back(objectsJsonList[objectsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
