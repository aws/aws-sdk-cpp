/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/NewStudioMember.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

NewStudioMember::NewStudioMember() : 
    m_persona(StudioPersona::NOT_SET),
    m_personaHasBeenSet(false),
    m_principalIdHasBeenSet(false)
{
}

NewStudioMember::NewStudioMember(JsonView jsonValue) : 
    m_persona(StudioPersona::NOT_SET),
    m_personaHasBeenSet(false),
    m_principalIdHasBeenSet(false)
{
  *this = jsonValue;
}

NewStudioMember& NewStudioMember::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("persona"))
  {
    m_persona = StudioPersonaMapper::GetStudioPersonaForName(jsonValue.GetString("persona"));

    m_personaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("principalId"))
  {
    m_principalId = jsonValue.GetString("principalId");

    m_principalIdHasBeenSet = true;
  }

  return *this;
}

JsonValue NewStudioMember::Jsonize() const
{
  JsonValue payload;

  if(m_personaHasBeenSet)
  {
   payload.WithString("persona", StudioPersonaMapper::GetNameForStudioPersona(m_persona));
  }

  if(m_principalIdHasBeenSet)
  {
   payload.WithString("principalId", m_principalId);

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
