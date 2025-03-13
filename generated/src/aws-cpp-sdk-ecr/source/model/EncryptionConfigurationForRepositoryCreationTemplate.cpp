/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/EncryptionConfigurationForRepositoryCreationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

EncryptionConfigurationForRepositoryCreationTemplate::EncryptionConfigurationForRepositoryCreationTemplate(JsonView jsonValue)
{
  *this = jsonValue;
}

EncryptionConfigurationForRepositoryCreationTemplate& EncryptionConfigurationForRepositoryCreationTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encryptionType"))
  {
    m_encryptionType = EncryptionTypeMapper::GetEncryptionTypeForName(jsonValue.GetString("encryptionType"));
    m_encryptionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsKey"))
  {
    m_kmsKey = jsonValue.GetString("kmsKey");
    m_kmsKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue EncryptionConfigurationForRepositoryCreationTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionTypeHasBeenSet)
  {
   payload.WithString("encryptionType", EncryptionTypeMapper::GetNameForEncryptionType(m_encryptionType));
  }

  if(m_kmsKeyHasBeenSet)
  {
   payload.WithString("kmsKey", m_kmsKey);

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
