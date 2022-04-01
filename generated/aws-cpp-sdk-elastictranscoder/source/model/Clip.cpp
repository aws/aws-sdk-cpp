/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

Clip::Clip(JsonView jsonValue) : 
    m_timeSpanHasBeenSet(false)
{
  *this = jsonValue;
}

Clip& Clip::operator =(JsonView jsonValue)
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
