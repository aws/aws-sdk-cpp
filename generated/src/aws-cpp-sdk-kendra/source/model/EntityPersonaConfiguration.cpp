/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/EntityPersonaConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

EntityPersonaConfiguration::EntityPersonaConfiguration() : 
    m_entityIdHasBeenSet(false),
    m_persona(Persona::NOT_SET),
    m_personaHasBeenSet(false)
{
}

EntityPersonaConfiguration::EntityPersonaConfiguration(JsonView jsonValue) : 
    m_entityIdHasBeenSet(false),
    m_persona(Persona::NOT_SET),
    m_personaHasBeenSet(false)
{
  *this = jsonValue;
}

EntityPersonaConfiguration& EntityPersonaConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EntityId"))
  {
    m_entityId = jsonValue.GetString("EntityId");

    m_entityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Persona"))
  {
    m_persona = PersonaMapper::GetPersonaForName(jsonValue.GetString("Persona"));

    m_personaHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityPersonaConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("EntityId", m_entityId);

  }

  if(m_personaHasBeenSet)
  {
   payload.WithString("Persona", PersonaMapper::GetNameForPersona(m_persona));
  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
