/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastictranscoder/model/InputCaptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

InputCaptions::InputCaptions() : 
    m_mergePolicyHasBeenSet(false),
    m_captionSourcesHasBeenSet(false)
{
}

InputCaptions::InputCaptions(JsonView jsonValue) : 
    m_mergePolicyHasBeenSet(false),
    m_captionSourcesHasBeenSet(false)
{
  *this = jsonValue;
}

InputCaptions& InputCaptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MergePolicy"))
  {
    m_mergePolicy = jsonValue.GetString("MergePolicy");

    m_mergePolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CaptionSources"))
  {
    Aws::Utils::Array<JsonView> captionSourcesJsonList = jsonValue.GetArray("CaptionSources");
    for(unsigned captionSourcesIndex = 0; captionSourcesIndex < captionSourcesJsonList.GetLength(); ++captionSourcesIndex)
    {
      m_captionSources.push_back(captionSourcesJsonList[captionSourcesIndex].AsObject());
    }
    m_captionSourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue InputCaptions::Jsonize() const
{
  JsonValue payload;

  if(m_mergePolicyHasBeenSet)
  {
   payload.WithString("MergePolicy", m_mergePolicy);

  }

  if(m_captionSourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> captionSourcesJsonList(m_captionSources.size());
   for(unsigned captionSourcesIndex = 0; captionSourcesIndex < captionSourcesJsonList.GetLength(); ++captionSourcesIndex)
   {
     captionSourcesJsonList[captionSourcesIndex].AsObject(m_captionSources[captionSourcesIndex].Jsonize());
   }
   payload.WithArray("CaptionSources", std::move(captionSourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
