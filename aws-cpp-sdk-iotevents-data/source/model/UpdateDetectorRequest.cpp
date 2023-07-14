﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/UpdateDetectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEventsData
{
namespace Model
{

UpdateDetectorRequest::UpdateDetectorRequest() : 
    m_messageIdHasBeenSet(false),
    m_detectorModelNameHasBeenSet(false),
    m_keyValueHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

UpdateDetectorRequest::UpdateDetectorRequest(JsonView jsonValue) : 
    m_messageIdHasBeenSet(false),
    m_detectorModelNameHasBeenSet(false),
    m_keyValueHasBeenSet(false),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateDetectorRequest& UpdateDetectorRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("messageId"))
  {
    m_messageId = jsonValue.GetString("messageId");

    m_messageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("detectorModelName"))
  {
    m_detectorModelName = jsonValue.GetString("detectorModelName");

    m_detectorModelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyValue"))
  {
    m_keyValue = jsonValue.GetString("keyValue");

    m_keyValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = jsonValue.GetObject("state");

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateDetectorRequest::Jsonize() const
{
  JsonValue payload;

  if(m_messageIdHasBeenSet)
  {
   payload.WithString("messageId", m_messageId);

  }

  if(m_detectorModelNameHasBeenSet)
  {
   payload.WithString("detectorModelName", m_detectorModelName);

  }

  if(m_keyValueHasBeenSet)
  {
   payload.WithString("keyValue", m_keyValue);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithObject("state", m_state.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
