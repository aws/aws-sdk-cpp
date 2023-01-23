/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/MLUserDataEncryption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

MLUserDataEncryption::MLUserDataEncryption() : 
    m_mlUserDataEncryptionMode(MLUserDataEncryptionModeString::NOT_SET),
    m_mlUserDataEncryptionModeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

MLUserDataEncryption::MLUserDataEncryption(JsonView jsonValue) : 
    m_mlUserDataEncryptionMode(MLUserDataEncryptionModeString::NOT_SET),
    m_mlUserDataEncryptionModeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

MLUserDataEncryption& MLUserDataEncryption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MlUserDataEncryptionMode"))
  {
    m_mlUserDataEncryptionMode = MLUserDataEncryptionModeStringMapper::GetMLUserDataEncryptionModeStringForName(jsonValue.GetString("MlUserDataEncryptionMode"));

    m_mlUserDataEncryptionModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue MLUserDataEncryption::Jsonize() const
{
  JsonValue payload;

  if(m_mlUserDataEncryptionModeHasBeenSet)
  {
   payload.WithString("MlUserDataEncryptionMode", MLUserDataEncryptionModeStringMapper::GetNameForMLUserDataEncryptionModeString(m_mlUserDataEncryptionMode));
  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
