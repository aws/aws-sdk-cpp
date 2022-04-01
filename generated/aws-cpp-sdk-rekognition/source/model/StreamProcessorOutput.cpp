/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/StreamProcessorOutput.h>
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

StreamProcessorOutput::StreamProcessorOutput() : 
    m_kinesisDataStreamHasBeenSet(false)
{
}

StreamProcessorOutput::StreamProcessorOutput(JsonView jsonValue) : 
    m_kinesisDataStreamHasBeenSet(false)
{
  *this = jsonValue;
}

StreamProcessorOutput& StreamProcessorOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KinesisDataStream"))
  {
    m_kinesisDataStream = jsonValue.GetObject("KinesisDataStream");

    m_kinesisDataStreamHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamProcessorOutput::Jsonize() const
{
  JsonValue payload;

  if(m_kinesisDataStreamHasBeenSet)
  {
   payload.WithObject("KinesisDataStream", m_kinesisDataStream.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
