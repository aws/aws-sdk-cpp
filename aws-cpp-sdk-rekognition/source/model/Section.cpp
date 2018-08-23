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

#include <aws/rekognition/model/Section.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

Section::Section() : 
    m_startTimestamp(0),
    m_startTimestampHasBeenSet(false),
    m_endTimestamp(0),
    m_endTimestampHasBeenSet(false)
{
}

Section::Section(JsonView jsonValue) : 
    m_startTimestamp(0),
    m_startTimestampHasBeenSet(false),
    m_endTimestamp(0),
    m_endTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

Section& Section::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartTimestamp"))
  {
    m_startTimestamp = jsonValue.GetInt64("StartTimestamp");

    m_startTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTimestamp"))
  {
    m_endTimestamp = jsonValue.GetInt64("EndTimestamp");

    m_endTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue Section::Jsonize() const
{
  JsonValue payload;

  if(m_startTimestampHasBeenSet)
  {
   payload.WithInt64("StartTimestamp", m_startTimestamp);

  }

  if(m_endTimestampHasBeenSet)
  {
   payload.WithInt64("EndTimestamp", m_endTimestamp);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
