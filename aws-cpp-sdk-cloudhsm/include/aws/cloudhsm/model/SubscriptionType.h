/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudHSM
{
namespace Model
{
  enum class SubscriptionType
  {
    NOT_SET,
    PRODUCTION
  };

namespace SubscriptionTypeMapper
{
AWS_CLOUDHSM_API SubscriptionType GetSubscriptionTypeForName(const Aws::String& name);

AWS_CLOUDHSM_API Aws::String GetNameForSubscriptionType(SubscriptionType value);
} // namespace SubscriptionTypeMapper
} // namespace Model
} // namespace CloudHSM
} // namespace Aws
