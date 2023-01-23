/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/ListCustomPluginsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KafkaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCustomPluginsResult::ListCustomPluginsResult()
{
}

ListCustomPluginsResult::ListCustomPluginsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCustomPluginsResult& ListCustomPluginsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("customPlugins"))
  {
    Aws::Utils::Array<JsonView> customPluginsJsonList = jsonValue.GetArray("customPlugins");
    for(unsigned customPluginsIndex = 0; customPluginsIndex < customPluginsJsonList.GetLength(); ++customPluginsIndex)
    {
      m_customPlugins.push_back(customPluginsJsonList[customPluginsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
