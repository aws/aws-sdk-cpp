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
  enum class ScanType
  {
    NOT_SET,
    FULL,
    PARTIAL
  };

namespace ScanTypeMapper
{
AWS_CLOUDFORMATION_API ScanType GetScanTypeForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForScanType(ScanType value);
} // namespace ScanTypeMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
