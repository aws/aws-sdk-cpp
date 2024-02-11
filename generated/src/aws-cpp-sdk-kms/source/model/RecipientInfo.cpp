/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/RecipientInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KMS
{
namespace Model
{

RecipientInfo::RecipientInfo() : 
    m_keyEncryptionAlgorithm(KeyEncryptionMechanism::NOT_SET),
    m_keyEncryptionAlgorithmHasBeenSet(false),
    m_attestationDocumentHasBeenSet(false)
{
}

RecipientInfo::RecipientInfo(JsonView jsonValue) : 
    m_keyEncryptionAlgorithm(KeyEncryptionMechanism::NOT_SET),
    m_keyEncryptionAlgorithmHasBeenSet(false),
    m_attestationDocumentHasBeenSet(false)
{
  *this = jsonValue;
}

RecipientInfo& RecipientInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyEncryptionAlgorithm"))
  {
    m_keyEncryptionAlgorithm = KeyEncryptionMechanismMapper::GetKeyEncryptionMechanismForName(jsonValue.GetString("KeyEncryptionAlgorithm"));

    m_keyEncryptionAlgorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttestationDocument"))
  {
    m_attestationDocument = HashingUtils::Base64Decode(jsonValue.GetString("AttestationDocument"));
    m_attestationDocumentHasBeenSet = true;
  }

  return *this;
}

JsonValue RecipientInfo::Jsonize() const
{
  JsonValue payload;

  if(m_keyEncryptionAlgorithmHasBeenSet)
  {
   payload.WithString("KeyEncryptionAlgorithm", KeyEncryptionMechanismMapper::GetNameForKeyEncryptionMechanism(m_keyEncryptionAlgorithm));
  }

  if(m_attestationDocumentHasBeenSet)
  {
   payload.WithString("AttestationDocument", HashingUtils::Base64Encode(m_attestationDocument));
  }

  return payload;
}

} // namespace Model
} // namespace KMS
} // namespace Aws
