/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/LabelDetection.h>
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

LabelDetection::LabelDetection() : 
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_labelHasBeenSet(false)
{
}

LabelDetection::LabelDetection(JsonView jsonValue) : 
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_labelHasBeenSet(false)
{
  *this = jsonValue;
}

LabelDetection& LabelDetection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetInt64("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Label"))
  {
    m_label = jsonValue.GetObject("Label");

    m_labelHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelDetection::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithInt64("Timestamp", m_timestamp);

  }

  if(m_labelHasBeenSet)
  {
   payload.WithObject("Label", m_label.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
