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
  enum class RCTAppliedFor
  {
    NOT_SET,
    REPLICATION,
    PULL_THROUGH_CACHE
  };

namespace RCTAppliedForMapper
{
AWS_ECR_API RCTAppliedFor GetRCTAppliedForForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForRCTAppliedFor(RCTAppliedFor value);
} // namespace RCTAppliedForMapper
} // namespace Model
} // namespace ECR
} // namespace Aws
