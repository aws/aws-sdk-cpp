/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeployedImage.h>
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

DeployedImage::DeployedImage() : 
    m_specifiedImageHasBeenSet(false),
    m_resolvedImageHasBeenSet(false),
    m_resolutionTimeHasBeenSet(false)
{
}

DeployedImage::DeployedImage(JsonView jsonValue) : 
    m_specifiedImageHasBeenSet(false),
    m_resolvedImageHasBeenSet(false),
    m_resolutionTimeHasBeenSet(false)
{
  *this = jsonValue;
}

DeployedImage& DeployedImage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SpecifiedImage"))
  {
    m_specifiedImage = jsonValue.GetString("SpecifiedImage");

    m_specifiedImageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResolvedImage"))
  {
    m_resolvedImage = jsonValue.GetString("ResolvedImage");

    m_resolvedImageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResolutionTime"))
  {
    m_resolutionTime = jsonValue.GetDouble("ResolutionTime");

    m_resolutionTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue DeployedImage::Jsonize() const
{
  JsonValue payload;

  if(m_specifiedImageHasBeenSet)
  {
   payload.WithString("SpecifiedImage", m_specifiedImage);

  }

  if(m_resolvedImageHasBeenSet)
  {
   payload.WithString("ResolvedImage", m_resolvedImage);

  }

  if(m_resolutionTimeHasBeenSet)
  {
   payload.WithDouble("ResolutionTime", m_resolutionTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
