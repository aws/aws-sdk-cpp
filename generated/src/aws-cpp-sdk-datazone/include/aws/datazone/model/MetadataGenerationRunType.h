/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class MetadataGenerationRunType
  {
    NOT_SET,
    BUSINESS_DESCRIPTIONS
  };

namespace MetadataGenerationRunTypeMapper
{
AWS_DATAZONE_API MetadataGenerationRunType GetMetadataGenerationRunTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForMetadataGenerationRunType(MetadataGenerationRunType value);
} // namespace MetadataGenerationRunTypeMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
