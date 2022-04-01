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
  enum class SamlConfigurationStatus
  {
    NOT_SET,
    CONFIGURED,
    NOT_CONFIGURED
  };

namespace SamlConfigurationStatusMapper
{
AWS_MANAGEDGRAFANA_API SamlConfigurationStatus GetSamlConfigurationStatusForName(const Aws::String& name);

AWS_MANAGEDGRAFANA_API Aws::String GetNameForSamlConfigurationStatus(SamlConfigurationStatus value);
} // namespace SamlConfigurationStatusMapper
} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
