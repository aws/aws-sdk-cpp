/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/SigningConfigurationOverrides.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace signer
{
namespace Model
{

SigningConfigurationOverrides::SigningConfigurationOverrides() : 
    m_encryptionAlgorithm(EncryptionAlgorithm::NOT_SET),
    m_encryptionAlgorithmHasBeenSet(false),
    m_hashAlgorithm(HashAlgorithm::NOT_SET),
    m_hashAlgorithmHasBeenSet(false)
{
}

SigningConfigurationOverrides::SigningConfigurationOverrides(JsonView jsonValue) : 
    m_encryptionAlgorithm(EncryptionAlgorithm::NOT_SET),
    m_encryptionAlgorithmHasBeenSet(false),
    m_hashAlgorithm(HashAlgorithm::NOT_SET),
    m_hashAlgorithmHasBeenSet(false)
{
  *this = jsonValue;
}

SigningConfigurationOverrides& SigningConfigurationOverrides::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encryptionAlgorithm"))
  {
    m_encryptionAlgorithm = EncryptionAlgorithmMapper::GetEncryptionAlgorithmForName(jsonValue.GetString("encryptionAlgorithm"));

    m_encryptionAlgorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hashAlgorithm"))
  {
    m_hashAlgorithm = HashAlgorithmMapper::GetHashAlgorithmForName(jsonValue.GetString("hashAlgorithm"));

    m_hashAlgorithmHasBeenSet = true;
  }

  return *this;
}

JsonValue SigningConfigurationOverrides::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionAlgorithmHasBeenSet)
  {
   payload.WithString("encryptionAlgorithm", EncryptionAlgorithmMapper::GetNameForEncryptionAlgorithm(m_encryptionAlgorithm));
  }

  if(m_hashAlgorithmHasBeenSet)
  {
   payload.WithString("hashAlgorithm", HashAlgorithmMapper::GetNameForHashAlgorithm(m_hashAlgorithm));
  }

  return payload;
}

} // namespace Model
} // namespace signer
} // namespace Aws
