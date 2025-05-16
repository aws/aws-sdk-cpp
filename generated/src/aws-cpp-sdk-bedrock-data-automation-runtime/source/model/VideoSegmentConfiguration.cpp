/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation-runtime/model/VideoSegmentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockDataAutomationRuntime
{
namespace Model
{

VideoSegmentConfiguration::VideoSegmentConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

VideoSegmentConfiguration& VideoSegmentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timestampSegment"))
  {
    m_timestampSegment = jsonValue.GetObject("timestampSegment");
    m_timestampSegmentHasBeenSet = true;
  }
  return *this;
}

JsonValue VideoSegmentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_timestampSegmentHasBeenSet)
  {
   payload.WithObject("timestampSegment", m_timestampSegment.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
