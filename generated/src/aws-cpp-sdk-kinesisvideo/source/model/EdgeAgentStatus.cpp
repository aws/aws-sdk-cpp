/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/EdgeAgentStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

EdgeAgentStatus::EdgeAgentStatus() : 
    m_lastRecorderStatusHasBeenSet(false),
    m_lastUploaderStatusHasBeenSet(false)
{
}

EdgeAgentStatus::EdgeAgentStatus(JsonView jsonValue) : 
    m_lastRecorderStatusHasBeenSet(false),
    m_lastUploaderStatusHasBeenSet(false)
{
  *this = jsonValue;
}

EdgeAgentStatus& EdgeAgentStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LastRecorderStatus"))
  {
    m_lastRecorderStatus = jsonValue.GetObject("LastRecorderStatus");

    m_lastRecorderStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUploaderStatus"))
  {
    m_lastUploaderStatus = jsonValue.GetObject("LastUploaderStatus");

    m_lastUploaderStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue EdgeAgentStatus::Jsonize() const
{
  JsonValue payload;

  if(m_lastRecorderStatusHasBeenSet)
  {
   payload.WithObject("LastRecorderStatus", m_lastRecorderStatus.Jsonize());

  }

  if(m_lastUploaderStatusHasBeenSet)
  {
   payload.WithObject("LastUploaderStatus", m_lastUploaderStatus.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
