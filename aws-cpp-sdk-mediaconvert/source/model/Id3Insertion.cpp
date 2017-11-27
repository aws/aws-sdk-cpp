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

#include <aws/mediaconvert/model/Id3Insertion.h>
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

Id3Insertion::Id3Insertion() : 
    m_id3HasBeenSet(false),
    m_timecodeHasBeenSet(false)
{
}

Id3Insertion::Id3Insertion(const JsonValue& jsonValue) : 
    m_id3HasBeenSet(false),
    m_timecodeHasBeenSet(false)
{
  *this = jsonValue;
}

Id3Insertion& Id3Insertion::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("id3"))
  {
    m_id3 = jsonValue.GetString("id3");

    m_id3HasBeenSet = true;
  }

  if(jsonValue.ValueExists("timecode"))
  {
    m_timecode = jsonValue.GetString("timecode");

    m_timecodeHasBeenSet = true;
  }

  return *this;
}

JsonValue Id3Insertion::Jsonize() const
{
  JsonValue payload;

  if(m_id3HasBeenSet)
  {
   payload.WithString("id3", m_id3);

  }

  if(m_timecodeHasBeenSet)
  {
   payload.WithString("timecode", m_timecode);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
