/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class MetadataConfigurationMode
  {
    NOT_SET,
    AUTOMATIC,
    USER_PROVISIONED
  };

namespace MetadataConfigurationModeMapper
{
AWS_FSX_API MetadataConfigurationMode GetMetadataConfigurationModeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForMetadataConfigurationMode(MetadataConfigurationMode value);
} // namespace MetadataConfigurationModeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
