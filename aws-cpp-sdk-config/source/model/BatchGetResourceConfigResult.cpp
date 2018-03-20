/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/config/model/BatchGetResourceConfigResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetResourceConfigResult::BatchGetResourceConfigResult()
{
}

BatchGetResourceConfigResult::BatchGetResourceConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetResourceConfigResult& BatchGetResourceConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("baseConfigurationItems"))
  {
    Array<JsonValue> baseConfigurationItemsJsonList = jsonValue.GetArray("baseConfigurationItems");
    for(unsigned baseConfigurationItemsIndex = 0; baseConfigurationItemsIndex < baseConfigurationItemsJsonList.GetLength(); ++baseConfigurationItemsIndex)
    {
      m_baseConfigurationItems.push_back(baseConfigurationItemsJsonList[baseConfigurationItemsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("unprocessedResourceKeys"))
  {
    Array<JsonValue> unprocessedResourceKeysJsonList = jsonValue.GetArray("unprocessedResourceKeys");
    for(unsigned unprocessedResourceKeysIndex = 0; unprocessedResourceKeysIndex < unprocessedResourceKeysJsonList.GetLength(); ++unprocessedResourceKeysIndex)
    {
      m_unprocessedResourceKeys.push_back(unprocessedResourceKeysJsonList[unprocessedResourceKeysIndex].AsObject());
    }
  }



  return *this;
}
