/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

VideoDetail::VideoDetail(const JsonValue& jsonValue) : 
    m_heightInPx(0),
    m_heightInPxHasBeenSet(false),
    m_widthInPx(0),
    m_widthInPxHasBeenSet(false)
{
  *this = jsonValue;
}

VideoDetail& VideoDetail::operator =(const JsonValue& jsonValue)
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
