/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/SecretsManagerSecretConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

SecretsManagerSecretConfiguration::SecretsManagerSecretConfiguration() : 
    m_kmsKeyIdHasBeenSet(false),
    m_secretPolicyHasBeenSet(false)
{
}

SecretsManagerSecretConfiguration::SecretsManagerSecretConfiguration(JsonView jsonValue) : 
    m_kmsKeyIdHasBeenSet(false),
    m_secretPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

SecretsManagerSecretConfiguration& SecretsManagerSecretConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secretPolicy"))
  {
    m_secretPolicy = jsonValue.GetString("secretPolicy");

    m_secretPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue SecretsManagerSecretConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_secretPolicyHasBeenSet)
  {
   payload.WithString("secretPolicy", m_secretPolicy);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
