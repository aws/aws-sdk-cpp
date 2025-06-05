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

RotationsListEntry::RotationsListEntry(JsonView jsonValue)
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
  if(jsonValue.ValueExists("KeyMaterialId"))
  {
    m_keyMaterialId = jsonValue.GetString("KeyMaterialId");
    m_keyMaterialIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyMaterialDescription"))
  {
    m_keyMaterialDescription = jsonValue.GetString("KeyMaterialDescription");
    m_keyMaterialDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImportState"))
  {
    m_importState = ImportStateMapper::GetImportStateForName(jsonValue.GetString("ImportState"));
    m_importStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyMaterialState"))
  {
    m_keyMaterialState = KeyMaterialStateMapper::GetKeyMaterialStateForName(jsonValue.GetString("KeyMaterialState"));
    m_keyMaterialStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExpirationModel"))
  {
    m_expirationModel = ExpirationModelTypeMapper::GetExpirationModelTypeForName(jsonValue.GetString("ExpirationModel"));
    m_expirationModelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ValidTo"))
  {
    m_validTo = jsonValue.GetDouble("ValidTo");
    m_validToHasBeenSet = true;
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

  if(m_keyMaterialIdHasBeenSet)
  {
   payload.WithString("KeyMaterialId", m_keyMaterialId);

  }

  if(m_keyMaterialDescriptionHasBeenSet)
  {
   payload.WithString("KeyMaterialDescription", m_keyMaterialDescription);

  }

  if(m_importStateHasBeenSet)
  {
   payload.WithString("ImportState", ImportStateMapper::GetNameForImportState(m_importState));
  }

  if(m_keyMaterialStateHasBeenSet)
  {
   payload.WithString("KeyMaterialState", KeyMaterialStateMapper::GetNameForKeyMaterialState(m_keyMaterialState));
  }

  if(m_expirationModelHasBeenSet)
  {
   payload.WithString("ExpirationModel", ExpirationModelTypeMapper::GetNameForExpirationModelType(m_expirationModel));
  }

  if(m_validToHasBeenSet)
  {
   payload.WithDouble("ValidTo", m_validTo.SecondsWithMSPrecision());
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
