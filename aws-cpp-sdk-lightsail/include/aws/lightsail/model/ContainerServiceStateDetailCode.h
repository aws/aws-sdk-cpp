/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class ContainerServiceStateDetailCode
  {
    NOT_SET,
    CREATING_SYSTEM_RESOURCES,
    CREATING_NETWORK_INFRASTRUCTURE,
    PROVISIONING_CERTIFICATE,
    PROVISIONING_SERVICE,
    CREATING_DEPLOYMENT,
    EVALUATING_HEALTH_CHECK,
    ACTIVATING_DEPLOYMENT,
    CERTIFICATE_LIMIT_EXCEEDED,
    UNKNOWN_ERROR
  };

namespace ContainerServiceStateDetailCodeMapper
{
AWS_LIGHTSAIL_API ContainerServiceStateDetailCode GetContainerServiceStateDetailCodeForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForContainerServiceStateDetailCode(ContainerServiceStateDetailCode value);
} // namespace ContainerServiceStateDetailCodeMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
