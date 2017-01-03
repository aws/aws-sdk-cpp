﻿/*
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

InputCaptions::InputCaptions(const JsonValue& jsonValue) : 
    m_mergePolicyHasBeenSet(false),
    m_captionSourcesHasBeenSet(false)
{
  *this = jsonValue;
}

InputCaptions& InputCaptions::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("MergePolicy"))
  {
    m_mergePolicy = jsonValue.GetString("MergePolicy");

    m_mergePolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CaptionSources"))
  {
    Array<JsonValue> captionSourcesJsonList = jsonValue.GetArray("CaptionSources");
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
   Array<JsonValue> captionSourcesJsonList(m_captionSources.size());
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