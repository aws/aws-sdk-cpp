/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/HandshakeParty.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Organizations
{
namespace Model
{

HandshakeParty::HandshakeParty() : 
    m_idHasBeenSet(false),
    m_type(HandshakePartyType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

HandshakeParty::HandshakeParty(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_type(HandshakePartyType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

HandshakeParty& HandshakeParty::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = HandshakePartyTypeMapper::GetHandshakePartyTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue HandshakeParty::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", HandshakePartyTypeMapper::GetNameForHandshakePartyType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws
