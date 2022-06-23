/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/StreamProcessingStopSelector.h>
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

StreamProcessingStopSelector::StreamProcessingStopSelector() : 
    m_maxDurationInSeconds(0),
    m_maxDurationInSecondsHasBeenSet(false)
{
}

StreamProcessingStopSelector::StreamProcessingStopSelector(JsonView jsonValue) : 
    m_maxDurationInSeconds(0),
    m_maxDurationInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

StreamProcessingStopSelector& StreamProcessingStopSelector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxDurationInSeconds"))
  {
    m_maxDurationInSeconds = jsonValue.GetInt64("MaxDurationInSeconds");

    m_maxDurationInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamProcessingStopSelector::Jsonize() const
{
  JsonValue payload;

  if(m_maxDurationInSecondsHasBeenSet)
  {
   payload.WithInt64("MaxDurationInSeconds", m_maxDurationInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
