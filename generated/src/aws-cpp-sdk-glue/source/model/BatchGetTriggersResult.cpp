/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchGetTriggersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetTriggersResult::BatchGetTriggersResult()
{
}

BatchGetTriggersResult::BatchGetTriggersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetTriggersResult& BatchGetTriggersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Triggers"))
  {
    Aws::Utils::Array<JsonView> triggersJsonList = jsonValue.GetArray("Triggers");
    for(unsigned triggersIndex = 0; triggersIndex < triggersJsonList.GetLength(); ++triggersIndex)
    {
      m_triggers.push_back(triggersJsonList[triggersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("TriggersNotFound"))
  {
    Aws::Utils::Array<JsonView> triggersNotFoundJsonList = jsonValue.GetArray("TriggersNotFound");
    for(unsigned triggersNotFoundIndex = 0; triggersNotFoundIndex < triggersNotFoundJsonList.GetLength(); ++triggersNotFoundIndex)
    {
      m_triggersNotFound.push_back(triggersNotFoundJsonList[triggersNotFoundIndex].AsString());
    }
  }



  return *this;
}
