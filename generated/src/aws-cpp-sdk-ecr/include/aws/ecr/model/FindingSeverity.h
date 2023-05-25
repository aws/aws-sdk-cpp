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
  enum class FindingSeverity
  {
    NOT_SET,
    INFORMATIONAL,
    LOW,
    MEDIUM,
    HIGH,
    CRITICAL,
    UNDEFINED
  };

namespace FindingSeverityMapper
{
AWS_ECR_API FindingSeverity GetFindingSeverityForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForFindingSeverity(FindingSeverity value);
} // namespace FindingSeverityMapper
} // namespace Model
} // namespace ECR
} // namespace Aws
