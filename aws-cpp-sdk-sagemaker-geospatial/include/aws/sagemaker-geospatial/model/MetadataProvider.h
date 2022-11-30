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
  enum class MetadataProvider
  {
    NOT_SET,
    PLANET_ORDER
  };

namespace MetadataProviderMapper
{
AWS_SAGEMAKERGEOSPATIAL_API MetadataProvider GetMetadataProviderForName(const Aws::String& name);

AWS_SAGEMAKERGEOSPATIAL_API Aws::String GetNameForMetadataProvider(MetadataProvider value);
} // namespace MetadataProviderMapper
} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
