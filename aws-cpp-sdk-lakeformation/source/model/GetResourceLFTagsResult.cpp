/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/GetResourceLFTagsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetResourceLFTagsResult::GetResourceLFTagsResult()
{
}

GetResourceLFTagsResult::GetResourceLFTagsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetResourceLFTagsResult& GetResourceLFTagsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LFTagOnDatabase"))
  {
    Aws::Utils::Array<JsonView> lFTagOnDatabaseJsonList = jsonValue.GetArray("LFTagOnDatabase");
    for(unsigned lFTagOnDatabaseIndex = 0; lFTagOnDatabaseIndex < lFTagOnDatabaseJsonList.GetLength(); ++lFTagOnDatabaseIndex)
    {
      m_lFTagOnDatabase.push_back(lFTagOnDatabaseJsonList[lFTagOnDatabaseIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("LFTagsOnTable"))
  {
    Aws::Utils::Array<JsonView> lFTagsOnTableJsonList = jsonValue.GetArray("LFTagsOnTable");
    for(unsigned lFTagsOnTableIndex = 0; lFTagsOnTableIndex < lFTagsOnTableJsonList.GetLength(); ++lFTagsOnTableIndex)
    {
      m_lFTagsOnTable.push_back(lFTagsOnTableJsonList[lFTagsOnTableIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("LFTagsOnColumns"))
  {
    Aws::Utils::Array<JsonView> lFTagsOnColumnsJsonList = jsonValue.GetArray("LFTagsOnColumns");
    for(unsigned lFTagsOnColumnsIndex = 0; lFTagsOnColumnsIndex < lFTagsOnColumnsJsonList.GetLength(); ++lFTagsOnColumnsIndex)
    {
      m_lFTagsOnColumns.push_back(lFTagsOnColumnsJsonList[lFTagsOnColumnsIndex].AsObject());
    }
  }



  return *this;
}
