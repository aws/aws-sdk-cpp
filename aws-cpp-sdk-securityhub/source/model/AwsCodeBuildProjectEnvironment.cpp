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

#include <aws/securityhub/model/AwsCodeBuildProjectEnvironment.h>
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

AwsCodeBuildProjectEnvironment::AwsCodeBuildProjectEnvironment() : 
    m_certificateHasBeenSet(false),
    m_imagePullCredentialsTypeHasBeenSet(false),
    m_registryCredentialHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

AwsCodeBuildProjectEnvironment::AwsCodeBuildProjectEnvironment(JsonView jsonValue) : 
    m_certificateHasBeenSet(false),
    m_imagePullCredentialsTypeHasBeenSet(false),
    m_registryCredentialHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCodeBuildProjectEnvironment& AwsCodeBuildProjectEnvironment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Certificate"))
  {
    m_certificate = jsonValue.GetString("Certificate");

    m_certificateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImagePullCredentialsType"))
  {
    m_imagePullCredentialsType = jsonValue.GetString("ImagePullCredentialsType");

    m_imagePullCredentialsTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistryCredential"))
  {
    m_registryCredential = jsonValue.GetObject("RegistryCredential");

    m_registryCredentialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCodeBuildProjectEnvironment::Jsonize() const
{
  JsonValue payload;

  if(m_certificateHasBeenSet)
  {
   payload.WithString("Certificate", m_certificate);

  }

  if(m_imagePullCredentialsTypeHasBeenSet)
  {
   payload.WithString("ImagePullCredentialsType", m_imagePullCredentialsType);

  }

  if(m_registryCredentialHasBeenSet)
  {
   payload.WithObject("RegistryCredential", m_registryCredential.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
