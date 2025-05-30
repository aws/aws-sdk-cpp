﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ProjectEnvironment.h>
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

ProjectEnvironment::ProjectEnvironment(JsonView jsonValue)
{
  *this = jsonValue;
}

ProjectEnvironment& ProjectEnvironment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = EnvironmentTypeMapper::GetEnvironmentTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("image"))
  {
    m_image = jsonValue.GetString("image");
    m_imageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computeType"))
  {
    m_computeType = ComputeTypeMapper::GetComputeTypeForName(jsonValue.GetString("computeType"));
    m_computeTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computeConfiguration"))
  {
    m_computeConfiguration = jsonValue.GetObject("computeConfiguration");
    m_computeConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fleet"))
  {
    m_fleet = jsonValue.GetObject("fleet");
    m_fleetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentVariables"))
  {
    Aws::Utils::Array<JsonView> environmentVariablesJsonList = jsonValue.GetArray("environmentVariables");
    for(unsigned environmentVariablesIndex = 0; environmentVariablesIndex < environmentVariablesJsonList.GetLength(); ++environmentVariablesIndex)
    {
      m_environmentVariables.push_back(environmentVariablesJsonList[environmentVariablesIndex].AsObject());
    }
    m_environmentVariablesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("privilegedMode"))
  {
    m_privilegedMode = jsonValue.GetBool("privilegedMode");
    m_privilegedModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("certificate"))
  {
    m_certificate = jsonValue.GetString("certificate");
    m_certificateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("registryCredential"))
  {
    m_registryCredential = jsonValue.GetObject("registryCredential");
    m_registryCredentialHasBeenSet = true;
  }
  if(jsonValue.ValueExists("imagePullCredentialsType"))
  {
    m_imagePullCredentialsType = ImagePullCredentialsTypeMapper::GetImagePullCredentialsTypeForName(jsonValue.GetString("imagePullCredentialsType"));
    m_imagePullCredentialsTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dockerServer"))
  {
    m_dockerServer = jsonValue.GetObject("dockerServer");
    m_dockerServerHasBeenSet = true;
  }
  return *this;
}

JsonValue ProjectEnvironment::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", EnvironmentTypeMapper::GetNameForEnvironmentType(m_type));
  }

  if(m_imageHasBeenSet)
  {
   payload.WithString("image", m_image);

  }

  if(m_computeTypeHasBeenSet)
  {
   payload.WithString("computeType", ComputeTypeMapper::GetNameForComputeType(m_computeType));
  }

  if(m_computeConfigurationHasBeenSet)
  {
   payload.WithObject("computeConfiguration", m_computeConfiguration.Jsonize());

  }

  if(m_fleetHasBeenSet)
  {
   payload.WithObject("fleet", m_fleet.Jsonize());

  }

  if(m_environmentVariablesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> environmentVariablesJsonList(m_environmentVariables.size());
   for(unsigned environmentVariablesIndex = 0; environmentVariablesIndex < environmentVariablesJsonList.GetLength(); ++environmentVariablesIndex)
   {
     environmentVariablesJsonList[environmentVariablesIndex].AsObject(m_environmentVariables[environmentVariablesIndex].Jsonize());
   }
   payload.WithArray("environmentVariables", std::move(environmentVariablesJsonList));

  }

  if(m_privilegedModeHasBeenSet)
  {
   payload.WithBool("privilegedMode", m_privilegedMode);

  }

  if(m_certificateHasBeenSet)
  {
   payload.WithString("certificate", m_certificate);

  }

  if(m_registryCredentialHasBeenSet)
  {
   payload.WithObject("registryCredential", m_registryCredential.Jsonize());

  }

  if(m_imagePullCredentialsTypeHasBeenSet)
  {
   payload.WithString("imagePullCredentialsType", ImagePullCredentialsTypeMapper::GetNameForImagePullCredentialsType(m_imagePullCredentialsType));
  }

  if(m_dockerServerHasBeenSet)
  {
   payload.WithObject("dockerServer", m_dockerServer.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
