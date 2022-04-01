/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AllowedRenditionSize.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

AllowedRenditionSize::AllowedRenditionSize() : 
    m_height(0),
    m_heightHasBeenSet(false),
    m_required(RequiredFlag::NOT_SET),
    m_requiredHasBeenSet(false),
    m_width(0),
    m_widthHasBeenSet(false)
{
}

AllowedRenditionSize::AllowedRenditionSize(JsonView jsonValue) : 
    m_height(0),
    m_heightHasBeenSet(false),
    m_required(RequiredFlag::NOT_SET),
    m_requiredHasBeenSet(false),
    m_width(0),
    m_widthHasBeenSet(false)
{
  *this = jsonValue;
}

AllowedRenditionSize& AllowedRenditionSize::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("height"))
  {
    m_height = jsonValue.GetInteger("height");

    m_heightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("required"))
  {
    m_required = RequiredFlagMapper::GetRequiredFlagForName(jsonValue.GetString("required"));

    m_requiredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("width"))
  {
    m_width = jsonValue.GetInteger("width");

    m_widthHasBeenSet = true;
  }

  return *this;
}

JsonValue AllowedRenditionSize::Jsonize() const
{
  JsonValue payload;

  if(m_heightHasBeenSet)
  {
   payload.WithInteger("height", m_height);

  }

  if(m_requiredHasBeenSet)
  {
   payload.WithString("required", RequiredFlagMapper::GetNameForRequiredFlag(m_required));
  }

  if(m_widthHasBeenSet)
  {
   payload.WithInteger("width", m_width);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
