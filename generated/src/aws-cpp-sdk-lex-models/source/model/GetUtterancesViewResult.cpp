/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/GetUtterancesViewResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetUtterancesViewResult::GetUtterancesViewResult()
{
}

GetUtterancesViewResult::GetUtterancesViewResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetUtterancesViewResult& GetUtterancesViewResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("botName"))
  {
    m_botName = jsonValue.GetString("botName");

  }

  if(jsonValue.ValueExists("utterances"))
  {
    Aws::Utils::Array<JsonView> utterancesJsonList = jsonValue.GetArray("utterances");
    for(unsigned utterancesIndex = 0; utterancesIndex < utterancesJsonList.GetLength(); ++utterancesIndex)
    {
      m_utterances.push_back(utterancesJsonList[utterancesIndex].AsObject());
    }
  }



  return *this;
}
