/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/StreamProcessor.h>
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

StreamProcessor::StreamProcessor() : 
    m_nameHasBeenSet(false),
    m_status(StreamProcessorStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

StreamProcessor::StreamProcessor(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_status(StreamProcessorStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

StreamProcessor& StreamProcessor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StreamProcessorStatusMapper::GetStreamProcessorStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamProcessor::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StreamProcessorStatusMapper::GetNameForStreamProcessorStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
