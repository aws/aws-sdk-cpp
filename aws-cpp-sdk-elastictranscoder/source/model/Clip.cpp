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
#include <aws/elastictranscoder/model/Clip.h>
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

Clip::Clip() : 
    m_timeSpanHasBeenSet(false)
{
}

Clip::Clip(const JsonValue& jsonValue) : 
    m_timeSpanHasBeenSet(false)
{
  *this = jsonValue;
}

Clip& Clip::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("TimeSpan"))
  {
    m_timeSpan = jsonValue.GetObject("TimeSpan");

    m_timeSpanHasBeenSet = true;
  }

  return *this;
}

JsonValue Clip::Jsonize() const
{
  JsonValue payload;

  if(m_timeSpanHasBeenSet)
  {
   payload.WithObject("TimeSpan", m_timeSpan.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws