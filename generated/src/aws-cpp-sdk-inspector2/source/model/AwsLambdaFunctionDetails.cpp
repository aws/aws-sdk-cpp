/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/AwsLambdaFunctionDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

AwsLambdaFunctionDetails::AwsLambdaFunctionDetails() : 
    m_architecturesHasBeenSet(false),
    m_codeSha256HasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_lastModifiedAtHasBeenSet(false),
    m_layersHasBeenSet(false),
    m_packageType(PackageType::NOT_SET),
    m_packageTypeHasBeenSet(false),
    m_runtime(Runtime::NOT_SET),
    m_runtimeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_vpcConfigHasBeenSet(false)
{
}

AwsLambdaFunctionDetails::AwsLambdaFunctionDetails(JsonView jsonValue) : 
    m_architecturesHasBeenSet(false),
    m_codeSha256HasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_lastModifiedAtHasBeenSet(false),
    m_layersHasBeenSet(false),
    m_packageType(PackageType::NOT_SET),
    m_packageTypeHasBeenSet(false),
    m_runtime(Runtime::NOT_SET),
    m_runtimeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_vpcConfigHasBeenSet(false)
{
  *this = jsonValue;
}

AwsLambdaFunctionDetails& AwsLambdaFunctionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("architectures"))
  {
    Aws::Utils::Array<JsonView> architecturesJsonList = jsonValue.GetArray("architectures");
    for(unsigned architecturesIndex = 0; architecturesIndex < architecturesJsonList.GetLength(); ++architecturesIndex)
    {
      m_architectures.push_back(ArchitectureMapper::GetArchitectureForName(architecturesJsonList[architecturesIndex].AsString()));
    }
    m_architecturesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codeSha256"))
  {
    m_codeSha256 = jsonValue.GetString("codeSha256");

    m_codeSha256HasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("executionRoleArn");

    m_executionRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("functionName"))
  {
    m_functionName = jsonValue.GetString("functionName");

    m_functionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedAt"))
  {
    m_lastModifiedAt = jsonValue.GetDouble("lastModifiedAt");

    m_lastModifiedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("layers"))
  {
    Aws::Utils::Array<JsonView> layersJsonList = jsonValue.GetArray("layers");
    for(unsigned layersIndex = 0; layersIndex < layersJsonList.GetLength(); ++layersIndex)
    {
      m_layers.push_back(layersJsonList[layersIndex].AsString());
    }
    m_layersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("packageType"))
  {
    m_packageType = PackageTypeMapper::GetPackageTypeForName(jsonValue.GetString("packageType"));

    m_packageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runtime"))
  {
    m_runtime = RuntimeMapper::GetRuntimeForName(jsonValue.GetString("runtime"));

    m_runtimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("vpcConfig");

    m_vpcConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsLambdaFunctionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_architecturesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> architecturesJsonList(m_architectures.size());
   for(unsigned architecturesIndex = 0; architecturesIndex < architecturesJsonList.GetLength(); ++architecturesIndex)
   {
     architecturesJsonList[architecturesIndex].AsString(ArchitectureMapper::GetNameForArchitecture(m_architectures[architecturesIndex]));
   }
   payload.WithArray("architectures", std::move(architecturesJsonList));

  }

  if(m_codeSha256HasBeenSet)
  {
   payload.WithString("codeSha256", m_codeSha256);

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("executionRoleArn", m_executionRoleArn);

  }

  if(m_functionNameHasBeenSet)
  {
   payload.WithString("functionName", m_functionName);

  }

  if(m_lastModifiedAtHasBeenSet)
  {
   payload.WithDouble("lastModifiedAt", m_lastModifiedAt.SecondsWithMSPrecision());
  }

  if(m_layersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> layersJsonList(m_layers.size());
   for(unsigned layersIndex = 0; layersIndex < layersJsonList.GetLength(); ++layersIndex)
   {
     layersJsonList[layersIndex].AsString(m_layers[layersIndex]);
   }
   payload.WithArray("layers", std::move(layersJsonList));

  }

  if(m_packageTypeHasBeenSet)
  {
   payload.WithString("packageType", PackageTypeMapper::GetNameForPackageType(m_packageType));
  }

  if(m_runtimeHasBeenSet)
  {
   payload.WithString("runtime", RuntimeMapper::GetNameForRuntime(m_runtime));
  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("vpcConfig", m_vpcConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
