/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECR
{
namespace Model
{
  enum class ScanType
  {
    NOT_SET,
    BASIC,
    ENHANCED
  };

namespace ScanTypeMapper
{
AWS_ECR_API ScanType GetScanTypeForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForScanType(ScanType value);
} // namespace ScanTypeMapper
} // namespace Model
} // namespace ECR
} // namespace Aws
