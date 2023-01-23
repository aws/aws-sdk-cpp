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
  enum class ScanningConfigurationFailureCode
  {
    NOT_SET,
    REPOSITORY_NOT_FOUND
  };

namespace ScanningConfigurationFailureCodeMapper
{
AWS_ECR_API ScanningConfigurationFailureCode GetScanningConfigurationFailureCodeForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForScanningConfigurationFailureCode(ScanningConfigurationFailureCode value);
} // namespace ScanningConfigurationFailureCodeMapper
} // namespace Model
} // namespace ECR
} // namespace Aws
