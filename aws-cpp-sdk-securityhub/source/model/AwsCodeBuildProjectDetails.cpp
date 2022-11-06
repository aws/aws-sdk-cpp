/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCodeBuildProjectDetails.h>
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

AwsCodeBuildProjectDetails::AwsCodeBuildProjectDetails() : 
    m_encryptionKeyHasBeenSet(false),
    m_artifactsHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_logsConfigHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_secondaryArtifactsHasBeenSet(false)
{
}

AwsCodeBuildProjectDetails::AwsCodeBuildProjectDetails(JsonView jsonValue) : 
    m_encryptionKeyHasBeenSet(false),
    m_artifactsHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_logsConfigHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_secondaryArtifactsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCodeBuildProjectDetails& AwsCodeBuildProjectDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EncryptionKey"))
  {
    m_encryptionKey = jsonValue.GetString("EncryptionKey");

    m_encryptionKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Artifacts"))
  {
    Aws::Utils::Array<JsonView> artifactsJsonList = jsonValue.GetArray("Artifacts");
    for(unsigned artifactsIndex = 0; artifactsIndex < artifactsJsonList.GetLength(); ++artifactsIndex)
    {
      m_artifacts.push_back(artifactsJsonList[artifactsIndex].AsObject());
    }
    m_artifactsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Environment"))
  {
    m_environment = jsonValue.GetObject("Environment");

    m_environmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetObject("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceRole"))
  {
    m_serviceRole = jsonValue.GetString("ServiceRole");

    m_serviceRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogsConfig"))
  {
    m_logsConfig = jsonValue.GetObject("LogsConfig");

    m_logsConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");

    m_vpcConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecondaryArtifacts"))
  {
    Aws::Utils::Array<JsonView> secondaryArtifactsJsonList = jsonValue.GetArray("SecondaryArtifacts");
    for(unsigned secondaryArtifactsIndex = 0; secondaryArtifactsIndex < secondaryArtifactsJsonList.GetLength(); ++secondaryArtifactsIndex)
    {
      m_secondaryArtifacts.push_back(secondaryArtifactsJsonList[secondaryArtifactsIndex].AsObject());
    }
    m_secondaryArtifactsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCodeBuildProjectDetails::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionKeyHasBeenSet)
  {
   payload.WithString("EncryptionKey", m_encryptionKey);

  }

  if(m_artifactsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> artifactsJsonList(m_artifacts.size());
   for(unsigned artifactsIndex = 0; artifactsIndex < artifactsJsonList.GetLength(); ++artifactsIndex)
   {
     artifactsJsonList[artifactsIndex].AsObject(m_artifacts[artifactsIndex].Jsonize());
   }
   payload.WithArray("Artifacts", std::move(artifactsJsonList));

  }

  if(m_environmentHasBeenSet)
  {
   payload.WithObject("Environment", m_environment.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("Source", m_source.Jsonize());

  }

  if(m_serviceRoleHasBeenSet)
  {
   payload.WithString("ServiceRole", m_serviceRole);

  }

  if(m_logsConfigHasBeenSet)
  {
   payload.WithObject("LogsConfig", m_logsConfig.Jsonize());

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_secondaryArtifactsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> secondaryArtifactsJsonList(m_secondaryArtifacts.size());
   for(unsigned secondaryArtifactsIndex = 0; secondaryArtifactsIndex < secondaryArtifactsJsonList.GetLength(); ++secondaryArtifactsIndex)
   {
     secondaryArtifactsJsonList[secondaryArtifactsIndex].AsObject(m_secondaryArtifacts[secondaryArtifactsIndex].Jsonize());
   }
   payload.WithArray("SecondaryArtifacts", std::move(secondaryArtifactsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
