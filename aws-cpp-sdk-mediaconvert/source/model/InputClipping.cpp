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

#include <aws/mediaconvert/model/InputClipping.h>
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

InputClipping::InputClipping() : 
    m_endTimecodeHasBeenSet(false),
    m_startTimecodeHasBeenSet(false)
{
}

InputClipping::InputClipping(const JsonValue& jsonValue) : 
    m_endTimecodeHasBeenSet(false),
    m_startTimecodeHasBeenSet(false)
{
  *this = jsonValue;
}

InputClipping& InputClipping::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("endTimecode"))
  {
    m_endTimecode = jsonValue.GetString("endTimecode");

    m_endTimecodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTimecode"))
  {
    m_startTimecode = jsonValue.GetString("startTimecode");

    m_startTimecodeHasBeenSet = true;
  }

  return *this;
}

JsonValue InputClipping::Jsonize() const
{
  JsonValue payload;

  if(m_endTimecodeHasBeenSet)
  {
   payload.WithString("endTimecode", m_endTimecode);

  }

  if(m_startTimecodeHasBeenSet)
  {
   payload.WithString("startTimecode", m_startTimecode);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
