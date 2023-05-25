/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/StreamEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IVS
{
namespace Model
{

StreamEvent::StreamEvent() : 
    m_eventTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

StreamEvent::StreamEvent(JsonView jsonValue) : 
    m_eventTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

StreamEvent& StreamEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventTime"))
  {
    m_eventTime = jsonValue.GetString("eventTime");

    m_eventTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamEvent::Jsonize() const
{
  JsonValue payload;

  if(m_eventTimeHasBeenSet)
  {
   payload.WithString("eventTime", m_eventTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace IVS
} // namespace Aws
