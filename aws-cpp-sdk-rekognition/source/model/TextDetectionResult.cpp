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

#include <aws/rekognition/model/TextDetectionResult.h>
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

TextDetectionResult::TextDetectionResult() : 
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_textDetectionHasBeenSet(false)
{
}

TextDetectionResult::TextDetectionResult(JsonView jsonValue) : 
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_textDetectionHasBeenSet(false)
{
  *this = jsonValue;
}

TextDetectionResult& TextDetectionResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetInt64("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextDetection"))
  {
    m_textDetection = jsonValue.GetObject("TextDetection");

    m_textDetectionHasBeenSet = true;
  }

  return *this;
}

JsonValue TextDetectionResult::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithInt64("Timestamp", m_timestamp);

  }

  if(m_textDetectionHasBeenSet)
  {
   payload.WithObject("TextDetection", m_textDetection.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
