/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/SuppressDataIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

SuppressDataIdentifier::SuppressDataIdentifier() : 
    m_idHasBeenSet(false),
    m_type(DataIdentifierType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

SuppressDataIdentifier::SuppressDataIdentifier(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_type(DataIdentifierType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

SuppressDataIdentifier& SuppressDataIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = DataIdentifierTypeMapper::GetDataIdentifierTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue SuppressDataIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", DataIdentifierTypeMapper::GetNameForDataIdentifierType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
