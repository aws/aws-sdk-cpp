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
  enum class CustomerPolicyScopeIdType
  {
    NOT_SET,
    ACCOUNT,
    ORG_UNIT
  };

namespace CustomerPolicyScopeIdTypeMapper
{
AWS_FMS_API CustomerPolicyScopeIdType GetCustomerPolicyScopeIdTypeForName(const Aws::String& name);

AWS_FMS_API Aws::String GetNameForCustomerPolicyScopeIdType(CustomerPolicyScopeIdType value);
} // namespace CustomerPolicyScopeIdTypeMapper
} // namespace Model
} // namespace FMS
} // namespace Aws
