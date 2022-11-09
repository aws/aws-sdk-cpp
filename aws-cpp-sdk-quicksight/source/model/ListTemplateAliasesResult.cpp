/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ListTemplateAliasesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTemplateAliasesResult::ListTemplateAliasesResult() : 
    m_status(0)
{
}

ListTemplateAliasesResult::ListTemplateAliasesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(0)
{
  *this = result;
}

ListTemplateAliasesResult& ListTemplateAliasesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TemplateAliasList"))
  {
    Aws::Utils::Array<JsonView> templateAliasListJsonList = jsonValue.GetArray("TemplateAliasList");
    for(unsigned templateAliasListIndex = 0; templateAliasListIndex < templateAliasListJsonList.GetLength(); ++templateAliasListIndex)
    {
      m_templateAliasList.push_back(templateAliasListJsonList[templateAliasListIndex].AsObject());
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
