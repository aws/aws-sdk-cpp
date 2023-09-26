/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/Publication.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppIntegrationsService
{
namespace Model
{

Publication::Publication() : 
    m_eventHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Publication::Publication(JsonView jsonValue) : 
    m_eventHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

Publication& Publication::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Event"))
  {
    m_event = jsonValue.GetString("Event");

    m_eventHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Schema"))
  {
    m_schema = jsonValue.GetString("Schema");

    m_schemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue Publication::Jsonize() const
{
  JsonValue payload;

  if(m_eventHasBeenSet)
  {
   payload.WithString("Event", m_event);

  }

  if(m_schemaHasBeenSet)
  {
   payload.WithString("Schema", m_schema);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
