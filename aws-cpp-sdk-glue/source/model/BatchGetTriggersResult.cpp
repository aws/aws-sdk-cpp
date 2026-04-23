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
    Array<JsonView> triggersJsonList = jsonValue.GetArray("Triggers");
    for(unsigned triggersIndex = 0; triggersIndex < triggersJsonList.GetLength(); ++triggersIndex)
    {
      m_triggers.push_back(triggersJsonList[triggersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("TriggersNotFound"))
  {
    Array<JsonView> triggersNotFoundJsonList = jsonValue.GetArray("TriggersNotFound");
    for(unsigned triggersNotFoundIndex = 0; triggersNotFoundIndex < triggersNotFoundJsonList.GetLength(); ++triggersNotFoundIndex)
    {
      m_triggersNotFound.push_back(triggersNotFoundJsonList[triggersNotFoundIndex].AsString());
    }
  }



  return *this;
}
