﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ListServiceTemplatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListServiceTemplatesResult::ListServiceTemplatesResult()
{
}

ListServiceTemplatesResult::ListServiceTemplatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListServiceTemplatesResult& ListServiceTemplatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("templates"))
  {
    Array<JsonView> templatesJsonList = jsonValue.GetArray("templates");
    for(unsigned templatesIndex = 0; templatesIndex < templatesJsonList.GetLength(); ++templatesIndex)
    {
      m_templates.push_back(templatesJsonList[templatesIndex].AsObject());
    }
  }



  return *this;
}
