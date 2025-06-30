/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/CitationsDelta.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

CitationsDelta::CitationsDelta(JsonView jsonValue)
{
  *this = jsonValue;
}

CitationsDelta& CitationsDelta::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceContent"))
  {
    Aws::Utils::Array<JsonView> sourceContentJsonList = jsonValue.GetArray("sourceContent");
    for(unsigned sourceContentIndex = 0; sourceContentIndex < sourceContentJsonList.GetLength(); ++sourceContentIndex)
    {
      m_sourceContent.push_back(sourceContentJsonList[sourceContentIndex].AsObject());
    }
    m_sourceContentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetObject("location");
    m_locationHasBeenSet = true;
  }
  return *this;
}

JsonValue CitationsDelta::Jsonize() const
{
  JsonValue payload;

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_sourceContentHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceContentJsonList(m_sourceContent.size());
   for(unsigned sourceContentIndex = 0; sourceContentIndex < sourceContentJsonList.GetLength(); ++sourceContentIndex)
   {
     sourceContentJsonList[sourceContentIndex].AsObject(m_sourceContent[sourceContentIndex].Jsonize());
   }
   payload.WithArray("sourceContent", std::move(sourceContentJsonList));

  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("location", m_location.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
