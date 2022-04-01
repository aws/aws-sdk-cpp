/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/KmsEncryptionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace HealthLake
{
namespace Model
{

KmsEncryptionConfig::KmsEncryptionConfig() : 
    m_cmkType(CmkType::NOT_SET),
    m_cmkTypeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

KmsEncryptionConfig::KmsEncryptionConfig(JsonView jsonValue) : 
    m_cmkType(CmkType::NOT_SET),
    m_cmkTypeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

KmsEncryptionConfig& KmsEncryptionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CmkType"))
  {
    m_cmkType = CmkTypeMapper::GetCmkTypeForName(jsonValue.GetString("CmkType"));

    m_cmkTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue KmsEncryptionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_cmkTypeHasBeenSet)
  {
   payload.WithString("CmkType", CmkTypeMapper::GetNameForCmkType(m_cmkType));
  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace HealthLake
} // namespace Aws
