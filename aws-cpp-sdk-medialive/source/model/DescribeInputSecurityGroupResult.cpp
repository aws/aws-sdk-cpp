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

#include <aws/medialive/model/DescribeInputSecurityGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeInputSecurityGroupResult::DescribeInputSecurityGroupResult() : 
    m_state(InputSecurityGroupState::NOT_SET)
{
}

DescribeInputSecurityGroupResult::DescribeInputSecurityGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(InputSecurityGroupState::NOT_SET)
{
  *this = result;
}

DescribeInputSecurityGroupResult& DescribeInputSecurityGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("inputs"))
  {
    Array<JsonView> inputsJsonList = jsonValue.GetArray("inputs");
    for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
    {
      m_inputs.push_back(inputsJsonList[inputsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = InputSecurityGroupStateMapper::GetInputSecurityGroupStateForName(jsonValue.GetString("state"));

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("whitelistRules"))
  {
    Array<JsonView> whitelistRulesJsonList = jsonValue.GetArray("whitelistRules");
    for(unsigned whitelistRulesIndex = 0; whitelistRulesIndex < whitelistRulesJsonList.GetLength(); ++whitelistRulesIndex)
    {
      m_whitelistRules.push_back(whitelistRulesJsonList[whitelistRulesIndex].AsObject());
    }
  }



  return *this;
}
