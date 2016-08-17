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
#include <aws/elastictranscoder/model/PresetWatermark.h>
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

PresetWatermark::PresetWatermark() : 
    m_idHasBeenSet(false),
    m_maxWidthHasBeenSet(false),
    m_maxHeightHasBeenSet(false),
    m_sizingPolicyHasBeenSet(false),
    m_horizontalAlignHasBeenSet(false),
    m_horizontalOffsetHasBeenSet(false),
    m_verticalAlignHasBeenSet(false),
    m_verticalOffsetHasBeenSet(false),
    m_opacityHasBeenSet(false),
    m_targetHasBeenSet(false)
{
}

PresetWatermark::PresetWatermark(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_maxWidthHasBeenSet(false),
    m_maxHeightHasBeenSet(false),
    m_sizingPolicyHasBeenSet(false),
    m_horizontalAlignHasBeenSet(false),
    m_horizontalOffsetHasBeenSet(false),
    m_verticalAlignHasBeenSet(false),
    m_verticalOffsetHasBeenSet(false),
    m_opacityHasBeenSet(false),
    m_targetHasBeenSet(false)
{
  *this = jsonValue;
}

PresetWatermark& PresetWatermark::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxWidth"))
  {
    m_maxWidth = jsonValue.GetString("MaxWidth");

    m_maxWidthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxHeight"))
  {
    m_maxHeight = jsonValue.GetString("MaxHeight");

    m_maxHeightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizingPolicy"))
  {
    m_sizingPolicy = jsonValue.GetString("SizingPolicy");

    m_sizingPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HorizontalAlign"))
  {
    m_horizontalAlign = jsonValue.GetString("HorizontalAlign");

    m_horizontalAlignHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HorizontalOffset"))
  {
    m_horizontalOffset = jsonValue.GetString("HorizontalOffset");

    m_horizontalOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VerticalAlign"))
  {
    m_verticalAlign = jsonValue.GetString("VerticalAlign");

    m_verticalAlignHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VerticalOffset"))
  {
    m_verticalOffset = jsonValue.GetString("VerticalOffset");

    m_verticalOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Opacity"))
  {
    m_opacity = jsonValue.GetString("Opacity");

    m_opacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetString("Target");

    m_targetHasBeenSet = true;
  }

  return *this;
}

JsonValue PresetWatermark::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_maxWidthHasBeenSet)
  {
   payload.WithString("MaxWidth", m_maxWidth);

  }

  if(m_maxHeightHasBeenSet)
  {
   payload.WithString("MaxHeight", m_maxHeight);

  }

  if(m_sizingPolicyHasBeenSet)
  {
   payload.WithString("SizingPolicy", m_sizingPolicy);

  }

  if(m_horizontalAlignHasBeenSet)
  {
   payload.WithString("HorizontalAlign", m_horizontalAlign);

  }

  if(m_horizontalOffsetHasBeenSet)
  {
   payload.WithString("HorizontalOffset", m_horizontalOffset);

  }

  if(m_verticalAlignHasBeenSet)
  {
   payload.WithString("VerticalAlign", m_verticalAlign);

  }

  if(m_verticalOffsetHasBeenSet)
  {
   payload.WithString("VerticalOffset", m_verticalOffset);

  }

  if(m_opacityHasBeenSet)
  {
   payload.WithString("Opacity", m_opacity);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("Target", m_target);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws