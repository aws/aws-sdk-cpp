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
  enum class DataCollectionType
  {
    NOT_SET,
    PUBLIC_,
    PREMIUM,
    USER
  };

namespace DataCollectionTypeMapper
{
AWS_SAGEMAKERGEOSPATIAL_API DataCollectionType GetDataCollectionTypeForName(const Aws::String& name);

AWS_SAGEMAKERGEOSPATIAL_API Aws::String GetNameForDataCollectionType(DataCollectionType value);
} // namespace DataCollectionTypeMapper
} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
