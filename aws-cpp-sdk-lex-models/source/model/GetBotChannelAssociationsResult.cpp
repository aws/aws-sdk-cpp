/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/GetBotChannelAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBotChannelAssociationsResult::GetBotChannelAssociationsResult()
{
}

GetBotChannelAssociationsResult::GetBotChannelAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBotChannelAssociationsResult& GetBotChannelAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("botChannelAssociations"))
  {
    Aws::Utils::Array<JsonView> botChannelAssociationsJsonList = jsonValue.GetArray("botChannelAssociations");
    for(unsigned botChannelAssociationsIndex = 0; botChannelAssociationsIndex < botChannelAssociationsJsonList.GetLength(); ++botChannelAssociationsIndex)
    {
      m_botChannelAssociations.push_back(botChannelAssociationsJsonList[botChannelAssociationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
