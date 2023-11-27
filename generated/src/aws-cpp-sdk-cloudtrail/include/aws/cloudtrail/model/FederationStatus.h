/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{
  enum class FederationStatus
  {
    NOT_SET,
    ENABLING,
    ENABLED,
    DISABLING,
    DISABLED
  };

namespace FederationStatusMapper
{
AWS_CLOUDTRAIL_API FederationStatus GetFederationStatusForName(const Aws::String& name);

AWS_CLOUDTRAIL_API Aws::String GetNameForFederationStatus(FederationStatus value);
} // namespace FederationStatusMapper
} // namespace Model
} // namespace CloudTrail
} // namespace Aws
