/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/ListTargetResourceTypesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FIS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTargetResourceTypesResult::ListTargetResourceTypesResult()
{
}

ListTargetResourceTypesResult::ListTargetResourceTypesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTargetResourceTypesResult& ListTargetResourceTypesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("targetResourceTypes"))
  {
    Aws::Utils::Array<JsonView> targetResourceTypesJsonList = jsonValue.GetArray("targetResourceTypes");
    for(unsigned targetResourceTypesIndex = 0; targetResourceTypesIndex < targetResourceTypesJsonList.GetLength(); ++targetResourceTypesIndex)
    {
      m_targetResourceTypes.push_back(targetResourceTypesJsonList[targetResourceTypesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
