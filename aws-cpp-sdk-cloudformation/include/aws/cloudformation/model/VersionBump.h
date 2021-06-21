/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{
  enum class VersionBump
  {
    NOT_SET,
    MAJOR,
    MINOR
  };

namespace VersionBumpMapper
{
AWS_CLOUDFORMATION_API VersionBump GetVersionBumpForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForVersionBump(VersionBump value);
} // namespace VersionBumpMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
