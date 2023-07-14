/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class DomainConfigurationStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace DomainConfigurationStatusMapper
{
AWS_IOT_API DomainConfigurationStatus GetDomainConfigurationStatusForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForDomainConfigurationStatus(DomainConfigurationStatus value);
} // namespace DomainConfigurationStatusMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
