/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ListImportsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListImportsResult::ListImportsResult()
{
}

ListImportsResult::ListImportsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListImportsResult& ListImportsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("botId"))
  {
    m_botId = jsonValue.GetString("botId");

  }

  if(jsonValue.ValueExists("botVersion"))
  {
    m_botVersion = jsonValue.GetString("botVersion");

  }

  if(jsonValue.ValueExists("importSummaries"))
  {
    Aws::Utils::Array<JsonView> importSummariesJsonList = jsonValue.GetArray("importSummaries");
    for(unsigned importSummariesIndex = 0; importSummariesIndex < importSummariesJsonList.GetLength(); ++importSummariesIndex)
    {
      m_importSummaries.push_back(importSummariesJsonList[importSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("localeId"))
  {
    m_localeId = jsonValue.GetString("localeId");

  }



  return *this;
}
