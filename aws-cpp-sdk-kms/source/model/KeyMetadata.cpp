/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/kms/model/KeyMetadata.h>
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

KeyMetadata::KeyMetadata() : 
    m_aWSAccountIdHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_keyUsage(KeyUsageType::NOT_SET),
    m_keyUsageHasBeenSet(false),
    m_keyState(KeyState::NOT_SET),
    m_keyStateHasBeenSet(false),
    m_deletionDateHasBeenSet(false),
    m_validToHasBeenSet(false),
    m_origin(OriginType::NOT_SET),
    m_originHasBeenSet(false),
    m_expirationModel(ExpirationModelType::NOT_SET),
    m_expirationModelHasBeenSet(false)
{
}

KeyMetadata::KeyMetadata(const JsonValue& jsonValue) : 
    m_aWSAccountIdHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_keyUsage(KeyUsageType::NOT_SET),
    m_keyUsageHasBeenSet(false),
    m_keyState(KeyState::NOT_SET),
    m_keyStateHasBeenSet(false),
    m_deletionDateHasBeenSet(false),
    m_validToHasBeenSet(false),
    m_origin(OriginType::NOT_SET),
    m_originHasBeenSet(false),
    m_expirationModel(ExpirationModelType::NOT_SET),
    m_expirationModelHasBeenSet(false)
{
  *this = jsonValue;
}

KeyMetadata& KeyMetadata::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AWSAccountId"))
  {
    m_aWSAccountId = jsonValue.GetString("AWSAccountId");

    m_aWSAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

    m_keyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyUsage"))
  {
    m_keyUsage = KeyUsageTypeMapper::GetKeyUsageTypeForName(jsonValue.GetString("KeyUsage"));

    m_keyUsageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyState"))
  {
    m_keyState = KeyStateMapper::GetKeyStateForName(jsonValue.GetString("KeyState"));

    m_keyStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeletionDate"))
  {
    m_deletionDate = jsonValue.GetDouble("DeletionDate");

    m_deletionDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidTo"))
  {
    m_validTo = jsonValue.GetDouble("ValidTo");

    m_validToHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Origin"))
  {
    m_origin = OriginTypeMapper::GetOriginTypeForName(jsonValue.GetString("Origin"));

    m_originHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpirationModel"))
  {
    m_expirationModel = ExpirationModelTypeMapper::GetExpirationModelTypeForName(jsonValue.GetString("ExpirationModel"));

    m_expirationModelHasBeenSet = true;
  }

  return *this;
}

JsonValue KeyMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_aWSAccountIdHasBeenSet)
  {
   payload.WithString("AWSAccountId", m_aWSAccountId);

  }

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_keyUsageHasBeenSet)
  {
   payload.WithString("KeyUsage", KeyUsageTypeMapper::GetNameForKeyUsageType(m_keyUsage));
  }

  if(m_keyStateHasBeenSet)
  {
   payload.WithString("KeyState", KeyStateMapper::GetNameForKeyState(m_keyState));
  }

  if(m_deletionDateHasBeenSet)
  {
   payload.WithDouble("DeletionDate", m_deletionDate.SecondsWithMSPrecision());
  }

  if(m_validToHasBeenSet)
  {
   payload.WithDouble("ValidTo", m_validTo.SecondsWithMSPrecision());
  }

  if(m_originHasBeenSet)
  {
   payload.WithString("Origin", OriginTypeMapper::GetNameForOriginType(m_origin));
  }

  if(m_expirationModelHasBeenSet)
  {
   payload.WithString("ExpirationModel", ExpirationModelTypeMapper::GetNameForExpirationModelType(m_expirationModel));
  }

  return payload;
}

} // namespace Model
} // namespace KMS
} // namespace Aws