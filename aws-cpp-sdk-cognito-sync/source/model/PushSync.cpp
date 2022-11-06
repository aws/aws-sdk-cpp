/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

PushSync::PushSync(JsonView jsonValue) : 
    m_applicationArnsHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

PushSync& PushSync::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationArns"))
  {
    Aws::Utils::Array<JsonView> applicationArnsJsonList = jsonValue.GetArray("ApplicationArns");
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
   Aws::Utils::Array<JsonValue> applicationArnsJsonList(m_applicationArns.size());
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
