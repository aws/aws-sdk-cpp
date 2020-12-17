/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/EventSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DLM
{
namespace Model
{

EventSource::EventSource() : 
    m_type(EventSourceValues::NOT_SET),
    m_typeHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

EventSource::EventSource(JsonView jsonValue) : 
    m_type(EventSourceValues::NOT_SET),
    m_typeHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
  *this = jsonValue;
}

EventSource& EventSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = EventSourceValuesMapper::GetEventSourceValuesForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    m_parameters = jsonValue.GetObject("Parameters");

    m_parametersHasBeenSet = true;
  }

  return *this;
}

JsonValue EventSource::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", EventSourceValuesMapper::GetNameForEventSourceValues(m_type));
  }

  if(m_parametersHasBeenSet)
  {
   payload.WithObject("Parameters", m_parameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DLM
} // namespace Aws
