/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/MessageStopEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

MessageStopEvent::MessageStopEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

MessageStopEvent& MessageStopEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stopReason"))
  {
    m_stopReason = StopReasonMapper::GetStopReasonForName(jsonValue.GetString("stopReason"));
    m_stopReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("additionalModelResponseFields"))
  {
    m_additionalModelResponseFields = jsonValue.GetObject("additionalModelResponseFields");
    m_additionalModelResponseFieldsHasBeenSet = true;
  }
  return *this;
}

JsonValue MessageStopEvent::Jsonize() const
{
  JsonValue payload;

  if(m_stopReasonHasBeenSet)
  {
   payload.WithString("stopReason", StopReasonMapper::GetNameForStopReason(m_stopReason));
  }

  if(m_additionalModelResponseFieldsHasBeenSet)
  {
    if(!m_additionalModelResponseFields.View().IsNull())
    {
       payload.WithObject("additionalModelResponseFields", JsonValue(m_additionalModelResponseFields.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
