/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ContentBody.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

ContentBody::ContentBody(JsonView jsonValue)
{
  *this = jsonValue;
}

ContentBody& ContentBody::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("body"))
  {
    m_body = jsonValue.GetString("body");
    m_bodyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("images"))
  {
    Aws::Utils::Array<JsonView> imagesJsonList = jsonValue.GetArray("images");
    for(unsigned imagesIndex = 0; imagesIndex < imagesJsonList.GetLength(); ++imagesIndex)
    {
      m_images.push_back(imagesJsonList[imagesIndex].AsObject());
    }
    m_imagesHasBeenSet = true;
  }
  return *this;
}

JsonValue ContentBody::Jsonize() const
{
  JsonValue payload;

  if(m_bodyHasBeenSet)
  {
   payload.WithString("body", m_body);

  }

  if(m_imagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> imagesJsonList(m_images.size());
   for(unsigned imagesIndex = 0; imagesIndex < imagesJsonList.GetLength(); ++imagesIndex)
   {
     imagesJsonList[imagesIndex].AsObject(m_images[imagesIndex].Jsonize());
   }
   payload.WithArray("images", std::move(imagesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
