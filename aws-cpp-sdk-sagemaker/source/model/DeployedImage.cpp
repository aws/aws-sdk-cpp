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
