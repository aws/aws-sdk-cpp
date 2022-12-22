/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/LandCoverSegmentationConfigInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

LandCoverSegmentationConfigInput::LandCoverSegmentationConfigInput()
{
}

LandCoverSegmentationConfigInput::LandCoverSegmentationConfigInput(JsonView jsonValue)
{
  *this = jsonValue;
}

LandCoverSegmentationConfigInput& LandCoverSegmentationConfigInput::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue LandCoverSegmentationConfigInput::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
