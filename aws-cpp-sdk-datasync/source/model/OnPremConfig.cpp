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

#include <aws/datasync/model/OnPremConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

OnPremConfig::OnPremConfig() : 
    m_agentArnsHasBeenSet(false)
{
}

OnPremConfig::OnPremConfig(JsonView jsonValue) : 
    m_agentArnsHasBeenSet(false)
{
  *this = jsonValue;
}

OnPremConfig& OnPremConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AgentArns"))
  {
    Array<JsonView> agentArnsJsonList = jsonValue.GetArray("AgentArns");
    for(unsigned agentArnsIndex = 0; agentArnsIndex < agentArnsJsonList.GetLength(); ++agentArnsIndex)
    {
      m_agentArns.push_back(agentArnsJsonList[agentArnsIndex].AsString());
    }
    m_agentArnsHasBeenSet = true;
  }

  return *this;
}

JsonValue OnPremConfig::Jsonize() const
{
  JsonValue payload;

  if(m_agentArnsHasBeenSet)
  {
   Array<JsonValue> agentArnsJsonList(m_agentArns.size());
   for(unsigned agentArnsIndex = 0; agentArnsIndex < agentArnsJsonList.GetLength(); ++agentArnsIndex)
   {
     agentArnsJsonList[agentArnsIndex].AsString(m_agentArns[agentArnsIndex]);
   }
   payload.WithArray("AgentArns", std::move(agentArnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
