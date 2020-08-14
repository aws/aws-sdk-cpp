/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ContainerDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ContainerDefinition::ContainerDefinition() : 
    m_containerHostnameHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_imageConfigHasBeenSet(false),
    m_mode(ContainerMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_modelDataUrlHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_modelPackageNameHasBeenSet(false)
{
}

ContainerDefinition::ContainerDefinition(JsonView jsonValue) : 
    m_containerHostnameHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_imageConfigHasBeenSet(false),
    m_mode(ContainerMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_modelDataUrlHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_modelPackageNameHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerDefinition& ContainerDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContainerHostname"))
  {
    m_containerHostname = jsonValue.GetString("ContainerHostname");

    m_containerHostnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Image"))
  {
    m_image = jsonValue.GetString("Image");

    m_imageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageConfig"))
  {
    m_imageConfig = jsonValue.GetObject("ImageConfig");

    m_imageConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = ContainerModeMapper::GetContainerModeForName(jsonValue.GetString("Mode"));

    m_modeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelDataUrl"))
  {
    m_modelDataUrl = jsonValue.GetString("ModelDataUrl");

    m_modelDataUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Environment"))
  {
    Aws::Map<Aws::String, JsonView> environmentJsonMap = jsonValue.GetObject("Environment").GetAllObjects();
    for(auto& environmentItem : environmentJsonMap)
    {
      m_environment[environmentItem.first] = environmentItem.second.AsString();
    }
    m_environmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelPackageName"))
  {
    m_modelPackageName = jsonValue.GetString("ModelPackageName");

    m_modelPackageNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_containerHostnameHasBeenSet)
  {
   payload.WithString("ContainerHostname", m_containerHostname);

  }

  if(m_imageHasBeenSet)
  {
   payload.WithString("Image", m_image);

  }

  if(m_imageConfigHasBeenSet)
  {
   payload.WithObject("ImageConfig", m_imageConfig.Jsonize());

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", ContainerModeMapper::GetNameForContainerMode(m_mode));
  }

  if(m_modelDataUrlHasBeenSet)
  {
   payload.WithString("ModelDataUrl", m_modelDataUrl);

  }

  if(m_environmentHasBeenSet)
  {
   JsonValue environmentJsonMap;
   for(auto& environmentItem : m_environment)
   {
     environmentJsonMap.WithString(environmentItem.first, environmentItem.second);
   }
   payload.WithObject("Environment", std::move(environmentJsonMap));

  }

  if(m_modelPackageNameHasBeenSet)
  {
   payload.WithString("ModelPackageName", m_modelPackageName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
