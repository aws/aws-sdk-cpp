/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{
  enum class ActivationOverrideBehavior
  {
    NOT_SET,
    DISTRIBUTED_GRANTS_ONLY,
    ALL_GRANTS_PERMITTED_BY_ISSUER
  };

namespace ActivationOverrideBehaviorMapper
{
AWS_LICENSEMANAGER_API ActivationOverrideBehavior GetActivationOverrideBehaviorForName(const Aws::String& name);

AWS_LICENSEMANAGER_API Aws::String GetNameForActivationOverrideBehavior(ActivationOverrideBehavior value);
} // namespace ActivationOverrideBehaviorMapper
} // namespace Model
} // namespace LicenseManager
} // namespace Aws
