/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelPackageContainerDefinition.h>
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

ModelPackageContainerDefinition::ModelPackageContainerDefinition() : 
    m_containerHostnameHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_imageDigestHasBeenSet(false),
    m_modelDataUrlHasBeenSet(false),
    m_productIdHasBeenSet(false)
{
}

ModelPackageContainerDefinition::ModelPackageContainerDefinition(JsonView jsonValue) : 
    m_containerHostnameHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_imageDigestHasBeenSet(false),
    m_modelDataUrlHasBeenSet(false),
    m_productIdHasBeenSet(false)
{
  *this = jsonValue;
}

ModelPackageContainerDefinition& ModelPackageContainerDefinition::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ImageDigest"))
  {
    m_imageDigest = jsonValue.GetString("ImageDigest");

    m_imageDigestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelDataUrl"))
  {
    m_modelDataUrl = jsonValue.GetString("ModelDataUrl");

    m_modelDataUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductId"))
  {
    m_productId = jsonValue.GetString("ProductId");

    m_productIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelPackageContainerDefinition::Jsonize() const
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

  if(m_imageDigestHasBeenSet)
  {
   payload.WithString("ImageDigest", m_imageDigest);

  }

  if(m_modelDataUrlHasBeenSet)
  {
   payload.WithString("ModelDataUrl", m_modelDataUrl);

  }

  if(m_productIdHasBeenSet)
  {
   payload.WithString("ProductId", m_productId);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
