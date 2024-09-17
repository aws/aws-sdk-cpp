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
  enum class MetadataGenerationTargetType
  {
    NOT_SET,
    ASSET
  };

namespace MetadataGenerationTargetTypeMapper
{
AWS_DATAZONE_API MetadataGenerationTargetType GetMetadataGenerationTargetTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForMetadataGenerationTargetType(MetadataGenerationTargetType value);
} // namespace MetadataGenerationTargetTypeMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
