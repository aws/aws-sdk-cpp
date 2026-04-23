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

#include <aws/codebuild/model/RegistryCredential.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

RegistryCredential::RegistryCredential() : 
    m_credentialHasBeenSet(false),
    m_credentialProvider(CredentialProviderType::NOT_SET),
    m_credentialProviderHasBeenSet(false)
{
}

RegistryCredential::RegistryCredential(JsonView jsonValue) : 
    m_credentialHasBeenSet(false),
    m_credentialProvider(CredentialProviderType::NOT_SET),
    m_credentialProviderHasBeenSet(false)
{
  *this = jsonValue;
}

RegistryCredential& RegistryCredential::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("credential"))
  {
    m_credential = jsonValue.GetString("credential");

    m_credentialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("credentialProvider"))
  {
    m_credentialProvider = CredentialProviderTypeMapper::GetCredentialProviderTypeForName(jsonValue.GetString("credentialProvider"));

    m_credentialProviderHasBeenSet = true;
  }

  return *this;
}

JsonValue RegistryCredential::Jsonize() const
{
  JsonValue payload;

  if(m_credentialHasBeenSet)
  {
   payload.WithString("credential", m_credential);

  }

  if(m_credentialProviderHasBeenSet)
  {
   payload.WithString("credentialProvider", CredentialProviderTypeMapper::GetNameForCredentialProviderType(m_credentialProvider));
  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
