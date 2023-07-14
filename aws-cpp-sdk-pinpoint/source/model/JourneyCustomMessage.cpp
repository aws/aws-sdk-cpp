/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/JourneyCustomMessage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

JourneyCustomMessage::JourneyCustomMessage() : 
    m_dataHasBeenSet(false)
{
}

JourneyCustomMessage::JourneyCustomMessage(JsonView jsonValue) : 
    m_dataHasBeenSet(false)
{
  *this = jsonValue;
}

JourneyCustomMessage& JourneyCustomMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Data"))
  {
    m_data = jsonValue.GetString("Data");

    m_dataHasBeenSet = true;
  }

  return *this;
}

JsonValue JourneyCustomMessage::Jsonize() const
{
  JsonValue payload;

  if(m_dataHasBeenSet)
  {
   payload.WithString("Data", m_data);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
