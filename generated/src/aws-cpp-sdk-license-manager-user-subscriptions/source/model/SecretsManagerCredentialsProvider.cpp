/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/SecretsManagerCredentialsProvider.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

SecretsManagerCredentialsProvider::SecretsManagerCredentialsProvider(JsonView jsonValue)
{
  *this = jsonValue;
}

SecretsManagerCredentialsProvider& SecretsManagerCredentialsProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SecretId"))
  {
    m_secretId = jsonValue.GetString("SecretId");
    m_secretIdHasBeenSet = true;
  }
  return *this;
}

JsonValue SecretsManagerCredentialsProvider::Jsonize() const
{
  JsonValue payload;

  if(m_secretIdHasBeenSet)
  {
   payload.WithString("SecretId", m_secretId);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
