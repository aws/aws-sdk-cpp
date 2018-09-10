/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
