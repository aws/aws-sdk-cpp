/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FMS
{
namespace Model
{
  enum class FailedItemReason
  {
    NOT_SET,
    NOT_VALID_ARN,
    NOT_VALID_PARTITION,
    NOT_VALID_REGION,
    NOT_VALID_SERVICE,
    NOT_VALID_RESOURCE_TYPE,
    NOT_VALID_ACCOUNT_ID
  };

namespace FailedItemReasonMapper
{
AWS_FMS_API FailedItemReason GetFailedItemReasonForName(const Aws::String& name);

AWS_FMS_API Aws::String GetNameForFailedItemReason(FailedItemReason value);
} // namespace FailedItemReasonMapper
} // namespace Model
} // namespace FMS
} // namespace Aws
