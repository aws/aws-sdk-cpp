/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/GitConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

GitConfiguration::GitConfiguration() : 
    m_sourceActionNameHasBeenSet(false),
    m_pushHasBeenSet(false)
{
}

GitConfiguration::GitConfiguration(JsonView jsonValue) : 
    m_sourceActionNameHasBeenSet(false),
    m_pushHasBeenSet(false)
{
  *this = jsonValue;
}

GitConfiguration& GitConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceActionName"))
  {
    m_sourceActionName = jsonValue.GetString("sourceActionName");

    m_sourceActionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("push"))
  {
    Aws::Utils::Array<JsonView> pushJsonList = jsonValue.GetArray("push");
    for(unsigned pushIndex = 0; pushIndex < pushJsonList.GetLength(); ++pushIndex)
    {
      m_push.push_back(pushJsonList[pushIndex].AsObject());
    }
    m_pushHasBeenSet = true;
  }

  return *this;
}

JsonValue GitConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_sourceActionNameHasBeenSet)
  {
   payload.WithString("sourceActionName", m_sourceActionName);

  }

  if(m_pushHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pushJsonList(m_push.size());
   for(unsigned pushIndex = 0; pushIndex < pushJsonList.GetLength(); ++pushIndex)
   {
     pushJsonList[pushIndex].AsObject(m_push[pushIndex].Jsonize());
   }
   payload.WithArray("push", std::move(pushJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
