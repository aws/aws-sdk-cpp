/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_customKeyStoreIdHasBeenSet(false),
    m_cloudHsmClusterIdHasBeenSet(false),
    m_expirationModel(ExpirationModelType::NOT_SET),
    m_expirationModelHasBeenSet(false),
    m_keyManager(KeyManagerType::NOT_SET),
    m_keyManagerHasBeenSet(false),
    m_keySpec(KeySpec::NOT_SET),
    m_keySpecHasBeenSet(false),
    m_encryptionAlgorithmsHasBeenSet(false),
    m_signingAlgorithmsHasBeenSet(false),
    m_multiRegion(false),
    m_multiRegionHasBeenSet(false),
    m_multiRegionConfigurationHasBeenSet(false),
    m_pendingDeletionWindowInDays(0),
    m_pendingDeletionWindowInDaysHasBeenSet(false),
    m_macAlgorithmsHasBeenSet(false),
    m_xksKeyConfigurationHasBeenSet(false)
{
}

KeyMetadata::KeyMetadata(JsonView jsonValue) : 
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
    m_customKeyStoreIdHasBeenSet(false),
    m_cloudHsmClusterIdHasBeenSet(false),
    m_expirationModel(ExpirationModelType::NOT_SET),
    m_expirationModelHasBeenSet(false),
    m_keyManager(KeyManagerType::NOT_SET),
    m_keyManagerHasBeenSet(false),
    m_keySpec(KeySpec::NOT_SET),
    m_keySpecHasBeenSet(false),
    m_encryptionAlgorithmsHasBeenSet(false),
    m_signingAlgorithmsHasBeenSet(false),
    m_multiRegion(false),
    m_multiRegionHasBeenSet(false),
    m_multiRegionConfigurationHasBeenSet(false),
    m_pendingDeletionWindowInDays(0),
    m_pendingDeletionWindowInDaysHasBeenSet(false),
    m_macAlgorithmsHasBeenSet(false),
    m_xksKeyConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

KeyMetadata& KeyMetadata::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("CustomKeyStoreId"))
  {
    m_customKeyStoreId = jsonValue.GetString("CustomKeyStoreId");

    m_customKeyStoreIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudHsmClusterId"))
  {
    m_cloudHsmClusterId = jsonValue.GetString("CloudHsmClusterId");

    m_cloudHsmClusterIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpirationModel"))
  {
    m_expirationModel = ExpirationModelTypeMapper::GetExpirationModelTypeForName(jsonValue.GetString("ExpirationModel"));

    m_expirationModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyManager"))
  {
    m_keyManager = KeyManagerTypeMapper::GetKeyManagerTypeForName(jsonValue.GetString("KeyManager"));

    m_keyManagerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeySpec"))
  {
    m_keySpec = KeySpecMapper::GetKeySpecForName(jsonValue.GetString("KeySpec"));

    m_keySpecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionAlgorithms"))
  {
    Aws::Utils::Array<JsonView> encryptionAlgorithmsJsonList = jsonValue.GetArray("EncryptionAlgorithms");
    for(unsigned encryptionAlgorithmsIndex = 0; encryptionAlgorithmsIndex < encryptionAlgorithmsJsonList.GetLength(); ++encryptionAlgorithmsIndex)
    {
      m_encryptionAlgorithms.push_back(EncryptionAlgorithmSpecMapper::GetEncryptionAlgorithmSpecForName(encryptionAlgorithmsJsonList[encryptionAlgorithmsIndex].AsString()));
    }
    m_encryptionAlgorithmsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SigningAlgorithms"))
  {
    Aws::Utils::Array<JsonView> signingAlgorithmsJsonList = jsonValue.GetArray("SigningAlgorithms");
    for(unsigned signingAlgorithmsIndex = 0; signingAlgorithmsIndex < signingAlgorithmsJsonList.GetLength(); ++signingAlgorithmsIndex)
    {
      m_signingAlgorithms.push_back(SigningAlgorithmSpecMapper::GetSigningAlgorithmSpecForName(signingAlgorithmsJsonList[signingAlgorithmsIndex].AsString()));
    }
    m_signingAlgorithmsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MultiRegion"))
  {
    m_multiRegion = jsonValue.GetBool("MultiRegion");

    m_multiRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MultiRegionConfiguration"))
  {
    m_multiRegionConfiguration = jsonValue.GetObject("MultiRegionConfiguration");

    m_multiRegionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PendingDeletionWindowInDays"))
  {
    m_pendingDeletionWindowInDays = jsonValue.GetInteger("PendingDeletionWindowInDays");

    m_pendingDeletionWindowInDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MacAlgorithms"))
  {
    Aws::Utils::Array<JsonView> macAlgorithmsJsonList = jsonValue.GetArray("MacAlgorithms");
    for(unsigned macAlgorithmsIndex = 0; macAlgorithmsIndex < macAlgorithmsJsonList.GetLength(); ++macAlgorithmsIndex)
    {
      m_macAlgorithms.push_back(MacAlgorithmSpecMapper::GetMacAlgorithmSpecForName(macAlgorithmsJsonList[macAlgorithmsIndex].AsString()));
    }
    m_macAlgorithmsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("XksKeyConfiguration"))
  {
    m_xksKeyConfiguration = jsonValue.GetObject("XksKeyConfiguration");

    m_xksKeyConfigurationHasBeenSet = true;
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

  if(m_customKeyStoreIdHasBeenSet)
  {
   payload.WithString("CustomKeyStoreId", m_customKeyStoreId);

  }

  if(m_cloudHsmClusterIdHasBeenSet)
  {
   payload.WithString("CloudHsmClusterId", m_cloudHsmClusterId);

  }

  if(m_expirationModelHasBeenSet)
  {
   payload.WithString("ExpirationModel", ExpirationModelTypeMapper::GetNameForExpirationModelType(m_expirationModel));
  }

  if(m_keyManagerHasBeenSet)
  {
   payload.WithString("KeyManager", KeyManagerTypeMapper::GetNameForKeyManagerType(m_keyManager));
  }

  if(m_keySpecHasBeenSet)
  {
   payload.WithString("KeySpec", KeySpecMapper::GetNameForKeySpec(m_keySpec));
  }

  if(m_encryptionAlgorithmsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> encryptionAlgorithmsJsonList(m_encryptionAlgorithms.size());
   for(unsigned encryptionAlgorithmsIndex = 0; encryptionAlgorithmsIndex < encryptionAlgorithmsJsonList.GetLength(); ++encryptionAlgorithmsIndex)
   {
     encryptionAlgorithmsJsonList[encryptionAlgorithmsIndex].AsString(EncryptionAlgorithmSpecMapper::GetNameForEncryptionAlgorithmSpec(m_encryptionAlgorithms[encryptionAlgorithmsIndex]));
   }
   payload.WithArray("EncryptionAlgorithms", std::move(encryptionAlgorithmsJsonList));

  }

  if(m_signingAlgorithmsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> signingAlgorithmsJsonList(m_signingAlgorithms.size());
   for(unsigned signingAlgorithmsIndex = 0; signingAlgorithmsIndex < signingAlgorithmsJsonList.GetLength(); ++signingAlgorithmsIndex)
   {
     signingAlgorithmsJsonList[signingAlgorithmsIndex].AsString(SigningAlgorithmSpecMapper::GetNameForSigningAlgorithmSpec(m_signingAlgorithms[signingAlgorithmsIndex]));
   }
   payload.WithArray("SigningAlgorithms", std::move(signingAlgorithmsJsonList));

  }

  if(m_multiRegionHasBeenSet)
  {
   payload.WithBool("MultiRegion", m_multiRegion);

  }

  if(m_multiRegionConfigurationHasBeenSet)
  {
   payload.WithObject("MultiRegionConfiguration", m_multiRegionConfiguration.Jsonize());

  }

  if(m_pendingDeletionWindowInDaysHasBeenSet)
  {
   payload.WithInteger("PendingDeletionWindowInDays", m_pendingDeletionWindowInDays);

  }

  if(m_macAlgorithmsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> macAlgorithmsJsonList(m_macAlgorithms.size());
   for(unsigned macAlgorithmsIndex = 0; macAlgorithmsIndex < macAlgorithmsJsonList.GetLength(); ++macAlgorithmsIndex)
   {
     macAlgorithmsJsonList[macAlgorithmsIndex].AsString(MacAlgorithmSpecMapper::GetNameForMacAlgorithmSpec(m_macAlgorithms[macAlgorithmsIndex]));
   }
   payload.WithArray("MacAlgorithms", std::move(macAlgorithmsJsonList));

  }

  if(m_xksKeyConfigurationHasBeenSet)
  {
   payload.WithObject("XksKeyConfiguration", m_xksKeyConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KMS
} // namespace Aws
