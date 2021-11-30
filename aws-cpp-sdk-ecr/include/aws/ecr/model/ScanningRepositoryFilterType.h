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
  enum class ScanningRepositoryFilterType
  {
    NOT_SET,
    WILDCARD
  };

namespace ScanningRepositoryFilterTypeMapper
{
AWS_ECR_API ScanningRepositoryFilterType GetScanningRepositoryFilterTypeForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForScanningRepositoryFilterType(ScanningRepositoryFilterType value);
} // namespace ScanningRepositoryFilterTypeMapper
} // namespace Model
} // namespace ECR
} // namespace Aws
