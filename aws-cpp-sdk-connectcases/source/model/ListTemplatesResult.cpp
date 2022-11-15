/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/ListTemplatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTemplatesResult::ListTemplatesResult()
{
}

ListTemplatesResult::ListTemplatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTemplatesResult& ListTemplatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("templates"))
  {
    Aws::Utils::Array<JsonView> templatesJsonList = jsonValue.GetArray("templates");
    for(unsigned templatesIndex = 0; templatesIndex < templatesJsonList.GetLength(); ++templatesIndex)
    {
      m_templates.push_back(templatesJsonList[templatesIndex].AsObject());
    }
  }



  return *this;
}
