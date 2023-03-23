/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/S3RecordingSinkConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

S3RecordingSinkConfiguration::S3RecordingSinkConfiguration() : 
    m_destinationHasBeenSet(false)
{
}

S3RecordingSinkConfiguration::S3RecordingSinkConfiguration(JsonView jsonValue) : 
    m_destinationHasBeenSet(false)
{
  *this = jsonValue;
}

S3RecordingSinkConfiguration& S3RecordingSinkConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = jsonValue.GetString("Destination");

    m_destinationHasBeenSet = true;
  }

  return *this;
}

JsonValue S3RecordingSinkConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_destinationHasBeenSet)
  {
   payload.WithString("Destination", m_destination);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
