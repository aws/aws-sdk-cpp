/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
