/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/EncryptionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DLM
{
namespace Model
{

EncryptionConfiguration::EncryptionConfiguration() : 
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_cmkArnHasBeenSet(false)
{
}

EncryptionConfiguration::EncryptionConfiguration(JsonView jsonValue) : 
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_cmkArnHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionConfiguration& EncryptionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Encrypted"))
  {
    m_encrypted = jsonValue.GetBool("Encrypted");

    m_encryptedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CmkArn"))
  {
    m_cmkArn = jsonValue.GetString("CmkArn");

    m_cmkArnHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_encryptedHasBeenSet)
  {
   payload.WithBool("Encrypted", m_encrypted);

  }

  if(m_cmkArnHasBeenSet)
  {
   payload.WithString("CmkArn", m_cmkArn);

  }

  return payload;
}

} // namespace Model
} // namespace DLM
} // namespace Aws
