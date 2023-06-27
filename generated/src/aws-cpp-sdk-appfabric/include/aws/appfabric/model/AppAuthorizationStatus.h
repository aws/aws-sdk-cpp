/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppFabric
{
namespace Model
{
  enum class AppAuthorizationStatus
  {
    NOT_SET,
    PendingConnect,
    Connected,
    ConnectionValidationFailed,
    TokenAutoRotationFailed
  };

namespace AppAuthorizationStatusMapper
{
AWS_APPFABRIC_API AppAuthorizationStatus GetAppAuthorizationStatusForName(const Aws::String& name);

AWS_APPFABRIC_API Aws::String GetNameForAppAuthorizationStatus(AppAuthorizationStatus value);
} // namespace AppAuthorizationStatusMapper
} // namespace Model
} // namespace AppFabric
} // namespace Aws
