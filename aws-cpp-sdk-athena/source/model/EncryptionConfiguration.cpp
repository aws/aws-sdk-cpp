/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/EncryptionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

EncryptionConfiguration::EncryptionConfiguration() : 
    m_encryptionOption(EncryptionOption::NOT_SET),
    m_encryptionOptionHasBeenSet(false),
    m_kmsKeyHasBeenSet(false)
{
}

EncryptionConfiguration::EncryptionConfiguration(JsonView jsonValue) : 
    m_encryptionOption(EncryptionOption::NOT_SET),
    m_encryptionOptionHasBeenSet(false),
    m_kmsKeyHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionConfiguration& EncryptionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EncryptionOption"))
  {
    m_encryptionOption = EncryptionOptionMapper::GetEncryptionOptionForName(jsonValue.GetString("EncryptionOption"));

    m_encryptionOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKey"))
  {
    m_kmsKey = jsonValue.GetString("KmsKey");

    m_kmsKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionOptionHasBeenSet)
  {
   payload.WithString("EncryptionOption", EncryptionOptionMapper::GetNameForEncryptionOption(m_encryptionOption));
  }

  if(m_kmsKeyHasBeenSet)
  {
   payload.WithString("KmsKey", m_kmsKey);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
