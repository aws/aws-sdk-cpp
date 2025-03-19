/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/CredentialsProvider.h>
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

CredentialsProvider::CredentialsProvider(JsonView jsonValue)
{
  *this = jsonValue;
}

CredentialsProvider& CredentialsProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SecretsManagerCredentialsProvider"))
  {
    m_secretsManagerCredentialsProvider = jsonValue.GetObject("SecretsManagerCredentialsProvider");
    m_secretsManagerCredentialsProviderHasBeenSet = true;
  }
  return *this;
}

JsonValue CredentialsProvider::Jsonize() const
{
  JsonValue payload;

  if(m_secretsManagerCredentialsProviderHasBeenSet)
  {
   payload.WithObject("SecretsManagerCredentialsProvider", m_secretsManagerCredentialsProvider.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
