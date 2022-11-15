/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ListThemeAliasesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListThemeAliasesResult::ListThemeAliasesResult() : 
    m_status(0)
{
}

ListThemeAliasesResult::ListThemeAliasesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(0)
{
  *this = result;
}

ListThemeAliasesResult& ListThemeAliasesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ThemeAliasList"))
  {
    Aws::Utils::Array<JsonView> themeAliasListJsonList = jsonValue.GetArray("ThemeAliasList");
    for(unsigned themeAliasListIndex = 0; themeAliasListIndex < themeAliasListJsonList.GetLength(); ++themeAliasListIndex)
    {
      m_themeAliasList.push_back(themeAliasListJsonList[themeAliasListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("RequestId"))
  {
    m_requestId = jsonValue.GetString("RequestId");

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  m_status = static_cast<int>(result.GetResponseCode());

  return *this;
}
