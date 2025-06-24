/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/aiops/model/EncryptionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AIOps
{
namespace Model
{

EncryptionConfiguration::EncryptionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

EncryptionConfiguration& EncryptionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = EncryptionConfigurationTypeMapper::GetEncryptionConfigurationTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  return *this;
}

JsonValue EncryptionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", EncryptionConfigurationTypeMapper::GetNameForEncryptionConfigurationType(m_type));
  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace AIOps
} // namespace Aws
