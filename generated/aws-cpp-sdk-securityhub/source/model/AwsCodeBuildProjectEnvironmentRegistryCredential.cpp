/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCodeBuildProjectEnvironmentRegistryCredential.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsCodeBuildProjectEnvironmentRegistryCredential::AwsCodeBuildProjectEnvironmentRegistryCredential() : 
    m_credentialHasBeenSet(false),
    m_credentialProviderHasBeenSet(false)
{
}

AwsCodeBuildProjectEnvironmentRegistryCredential::AwsCodeBuildProjectEnvironmentRegistryCredential(JsonView jsonValue) : 
    m_credentialHasBeenSet(false),
    m_credentialProviderHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCodeBuildProjectEnvironmentRegistryCredential& AwsCodeBuildProjectEnvironmentRegistryCredential::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Credential"))
  {
    m_credential = jsonValue.GetString("Credential");

    m_credentialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CredentialProvider"))
  {
    m_credentialProvider = jsonValue.GetString("CredentialProvider");

    m_credentialProviderHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCodeBuildProjectEnvironmentRegistryCredential::Jsonize() const
{
  JsonValue payload;

  if(m_credentialHasBeenSet)
  {
   payload.WithString("Credential", m_credential);

  }

  if(m_credentialProviderHasBeenSet)
  {
   payload.WithString("CredentialProvider", m_credentialProvider);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
