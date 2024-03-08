/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EntityResolution
{
namespace Model
{
  enum class ResolutionType
  {
    NOT_SET,
    RULE_MATCHING,
    ML_MATCHING,
    PROVIDER
  };

namespace ResolutionTypeMapper
{
AWS_ENTITYRESOLUTION_API ResolutionType GetResolutionTypeForName(const Aws::String& name);

AWS_ENTITYRESOLUTION_API Aws::String GetNameForResolutionType(ResolutionType value);
} // namespace ResolutionTypeMapper
} // namespace Model
} // namespace EntityResolution
} // namespace Aws
