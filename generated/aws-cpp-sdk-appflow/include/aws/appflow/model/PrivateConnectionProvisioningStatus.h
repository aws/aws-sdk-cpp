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
  enum class PrivateConnectionProvisioningStatus
  {
    NOT_SET,
    FAILED,
    PENDING,
    CREATED
  };

namespace PrivateConnectionProvisioningStatusMapper
{
AWS_APPFLOW_API PrivateConnectionProvisioningStatus GetPrivateConnectionProvisioningStatusForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForPrivateConnectionProvisioningStatus(PrivateConnectionProvisioningStatus value);
} // namespace PrivateConnectionProvisioningStatusMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
