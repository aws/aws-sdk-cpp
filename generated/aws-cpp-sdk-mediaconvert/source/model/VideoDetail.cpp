/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/VideoDetail.h>
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

VideoDetail::VideoDetail() : 
    m_heightInPx(0),
    m_heightInPxHasBeenSet(false),
    m_widthInPx(0),
    m_widthInPxHasBeenSet(false)
{
}

VideoDetail::VideoDetail(JsonView jsonValue) : 
    m_heightInPx(0),
    m_heightInPxHasBeenSet(false),
    m_widthInPx(0),
    m_widthInPxHasBeenSet(false)
{
  *this = jsonValue;
}

VideoDetail& VideoDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("heightInPx"))
  {
    m_heightInPx = jsonValue.GetInteger("heightInPx");

    m_heightInPxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("widthInPx"))
  {
    m_widthInPx = jsonValue.GetInteger("widthInPx");

    m_widthInPxHasBeenSet = true;
  }

  return *this;
}

JsonValue VideoDetail::Jsonize() const
{
  JsonValue payload;

  if(m_heightInPxHasBeenSet)
  {
   payload.WithInteger("heightInPx", m_heightInPx);

  }

  if(m_widthInPxHasBeenSet)
  {
   payload.WithInteger("widthInPx", m_widthInPx);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
