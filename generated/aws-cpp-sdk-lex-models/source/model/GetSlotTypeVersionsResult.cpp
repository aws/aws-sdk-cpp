﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/GetSlotTypeVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSlotTypeVersionsResult::GetSlotTypeVersionsResult()
{
}

GetSlotTypeVersionsResult::GetSlotTypeVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSlotTypeVersionsResult& GetSlotTypeVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("slotTypes"))
  {
    Array<JsonView> slotTypesJsonList = jsonValue.GetArray("slotTypes");
    for(unsigned slotTypesIndex = 0; slotTypesIndex < slotTypesJsonList.GetLength(); ++slotTypesIndex)
    {
      m_slotTypes.push_back(slotTypesJsonList[slotTypesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
