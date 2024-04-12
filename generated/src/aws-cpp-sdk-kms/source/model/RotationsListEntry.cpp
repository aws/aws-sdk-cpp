/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/RotationsListEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KMS
{
namespace Model
{

RotationsListEntry::RotationsListEntry() : 
    m_keyIdHasBeenSet(false),
    m_rotationDateHasBeenSet(false),
    m_rotationType(RotationType::NOT_SET),
    m_rotationTypeHasBeenSet(false)
{
}

RotationsListEntry::RotationsListEntry(JsonView jsonValue) : 
    m_keyIdHasBeenSet(false),
    m_rotationDateHasBeenSet(false),
    m_rotationType(RotationType::NOT_SET),
    m_rotationTypeHasBeenSet(false)
{
  *this = jsonValue;
}

RotationsListEntry& RotationsListEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

    m_keyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RotationDate"))
  {
    m_rotationDate = jsonValue.GetDouble("RotationDate");

    m_rotationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RotationType"))
  {
    m_rotationType = RotationTypeMapper::GetRotationTypeForName(jsonValue.GetString("RotationType"));

    m_rotationTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue RotationsListEntry::Jsonize() const
{
  JsonValue payload;

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_rotationDateHasBeenSet)
  {
   payload.WithDouble("RotationDate", m_rotationDate.SecondsWithMSPrecision());
  }

  if(m_rotationTypeHasBeenSet)
  {
   payload.WithString("RotationType", RotationTypeMapper::GetNameForRotationType(m_rotationType));
  }

  return payload;
}

} // namespace Model
} // namespace KMS
} // namespace Aws
