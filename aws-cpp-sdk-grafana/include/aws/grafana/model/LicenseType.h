/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{
  enum class LicenseType
  {
    NOT_SET,
    ENTERPRISE,
    ENTERPRISE_FREE_TRIAL
  };

namespace LicenseTypeMapper
{
AWS_MANAGEDGRAFANA_API LicenseType GetLicenseTypeForName(const Aws::String& name);

AWS_MANAGEDGRAFANA_API Aws::String GetNameForLicenseType(LicenseType value);
} // namespace LicenseTypeMapper
} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
