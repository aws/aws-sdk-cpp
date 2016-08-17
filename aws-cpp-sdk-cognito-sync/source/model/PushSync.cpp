/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-sync/model/PushSync.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoSync
{
namespace Model
{

PushSync::PushSync() : 
    m_applicationArnsHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

PushSync::PushSync(const JsonValue& jsonValue) : 
    m_applicationArnsHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

PushSync& PushSync::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ApplicationArns"))
  {
    Array<JsonValue> applicationArnsJsonList = jsonValue.GetArray("ApplicationArns");
    for(unsigned applicationArnsIndex = 0; applicationArnsIndex < applicationArnsJsonList.GetLength(); ++applicationArnsIndex)
    {
      m_applicationArns.push_back(applicationArnsJsonList[applicationArnsIndex].AsString());
    }
    m_applicationArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue PushSync::Jsonize() const
{
  JsonValue payload;

  if(m_applicationArnsHasBeenSet)
  {
   Array<JsonValue> applicationArnsJsonList(m_applicationArns.size());
   for(unsigned applicationArnsIndex = 0; applicationArnsIndex < applicationArnsJsonList.GetLength(); ++applicationArnsIndex)
   {
     applicationArnsJsonList[applicationArnsIndex].AsString(m_applicationArns[applicationArnsIndex]);
   }
   payload.WithArray("ApplicationArns", std::move(applicationArnsJsonList));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoSync
} // namespace Aws