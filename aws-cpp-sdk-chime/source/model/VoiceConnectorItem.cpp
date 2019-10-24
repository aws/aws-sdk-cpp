/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/chime/model/VoiceConnectorItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

VoiceConnectorItem::VoiceConnectorItem() : 
    m_voiceConnectorIdHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false)
{
}

VoiceConnectorItem::VoiceConnectorItem(JsonView jsonValue) : 
    m_voiceConnectorIdHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false)
{
  *this = jsonValue;
}

VoiceConnectorItem& VoiceConnectorItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VoiceConnectorId"))
  {
    m_voiceConnectorId = jsonValue.GetString("VoiceConnectorId");

    m_voiceConnectorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Priority"))
  {
    m_priority = jsonValue.GetInteger("Priority");

    m_priorityHasBeenSet = true;
  }

  return *this;
}

JsonValue VoiceConnectorItem::Jsonize() const
{
  JsonValue payload;

  if(m_voiceConnectorIdHasBeenSet)
  {
   payload.WithString("VoiceConnectorId", m_voiceConnectorId);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
