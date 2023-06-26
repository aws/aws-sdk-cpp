/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/EncryptionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruSecurity
{
namespace Model
{

EncryptionConfig::EncryptionConfig() : 
    m_kmsKeyArnHasBeenSet(false)
{
}

EncryptionConfig::EncryptionConfig(JsonView jsonValue) : 
    m_kmsKeyArnHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionConfig& EncryptionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
