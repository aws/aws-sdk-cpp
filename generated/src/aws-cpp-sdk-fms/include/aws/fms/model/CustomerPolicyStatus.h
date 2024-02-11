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
  enum class CustomerPolicyStatus
  {
    NOT_SET,
    ACTIVE,
    OUT_OF_ADMIN_SCOPE
  };

namespace CustomerPolicyStatusMapper
{
AWS_FMS_API CustomerPolicyStatus GetCustomerPolicyStatusForName(const Aws::String& name);

AWS_FMS_API Aws::String GetNameForCustomerPolicyStatus(CustomerPolicyStatus value);
} // namespace CustomerPolicyStatusMapper
} // namespace Model
} // namespace FMS
} // namespace Aws
