/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class Owner
  {
    NOT_SET,
    CUSTOM_LAMBDA,
    AWS,
    CUSTOM_POLICY
  };

namespace OwnerMapper
{
AWS_CONFIGSERVICE_API Owner GetOwnerForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForOwner(Owner value);
} // namespace OwnerMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
