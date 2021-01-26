/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ContentModerationDetection.h>
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

ContentModerationDetection::ContentModerationDetection() : 
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_moderationLabelHasBeenSet(false)
{
}

ContentModerationDetection::ContentModerationDetection(JsonView jsonValue) : 
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_moderationLabelHasBeenSet(false)
{
  *this = jsonValue;
}

ContentModerationDetection& ContentModerationDetection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetInt64("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModerationLabel"))
  {
    m_moderationLabel = jsonValue.GetObject("ModerationLabel");

    m_moderationLabelHasBeenSet = true;
  }

  return *this;
}

JsonValue ContentModerationDetection::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithInt64("Timestamp", m_timestamp);

  }

  if(m_moderationLabelHasBeenSet)
  {
   payload.WithObject("ModerationLabel", m_moderationLabel.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
