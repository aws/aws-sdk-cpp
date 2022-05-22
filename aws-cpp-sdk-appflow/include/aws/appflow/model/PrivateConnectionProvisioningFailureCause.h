/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{
  enum class PrivateConnectionProvisioningFailureCause
  {
    NOT_SET,
    CONNECTOR_AUTHENTICATION,
    CONNECTOR_SERVER,
    INTERNAL_SERVER,
    ACCESS_DENIED,
    VALIDATION
  };

namespace PrivateConnectionProvisioningFailureCauseMapper
{
AWS_APPFLOW_API PrivateConnectionProvisioningFailureCause GetPrivateConnectionProvisioningFailureCauseForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForPrivateConnectionProvisioningFailureCause(PrivateConnectionProvisioningFailureCause value);
} // namespace PrivateConnectionProvisioningFailureCauseMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
