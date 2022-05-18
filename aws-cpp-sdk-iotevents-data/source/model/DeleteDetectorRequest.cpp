/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/DeleteDetectorRequest.h>
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

DeleteDetectorRequest::DeleteDetectorRequest() : 
    m_messageIdHasBeenSet(false),
    m_detectorModelNameHasBeenSet(false),
    m_keyValueHasBeenSet(false)
{
}

DeleteDetectorRequest::DeleteDetectorRequest(JsonView jsonValue) : 
    m_messageIdHasBeenSet(false),
    m_detectorModelNameHasBeenSet(false),
    m_keyValueHasBeenSet(false)
{
  *this = jsonValue;
}

DeleteDetectorRequest& DeleteDetectorRequest::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue DeleteDetectorRequest::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
