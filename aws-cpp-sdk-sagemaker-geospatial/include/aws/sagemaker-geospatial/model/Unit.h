/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{
  enum class Unit
  {
    NOT_SET,
    METERS
  };

namespace UnitMapper
{
AWS_SAGEMAKERGEOSPATIAL_API Unit GetUnitForName(const Aws::String& name);

AWS_SAGEMAKERGEOSPATIAL_API Aws::String GetNameForUnit(Unit value);
} // namespace UnitMapper
} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
