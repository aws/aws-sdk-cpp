/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Cloud9
{
namespace Model
{
  enum class ManagedCredentialsStatus
  {
    NOT_SET,
    ENABLED_ON_CREATE,
    ENABLED_BY_OWNER,
    DISABLED_BY_DEFAULT,
    DISABLED_BY_OWNER,
    DISABLED_BY_COLLABORATOR,
    PENDING_REMOVAL_BY_COLLABORATOR,
    PENDING_START_REMOVAL_BY_COLLABORATOR,
    PENDING_REMOVAL_BY_OWNER,
    PENDING_START_REMOVAL_BY_OWNER,
    FAILED_REMOVAL_BY_COLLABORATOR,
    FAILED_REMOVAL_BY_OWNER
  };

namespace ManagedCredentialsStatusMapper
{
AWS_CLOUD9_API ManagedCredentialsStatus GetManagedCredentialsStatusForName(const Aws::String& name);

AWS_CLOUD9_API Aws::String GetNameForManagedCredentialsStatus(ManagedCredentialsStatus value);
} // namespace ManagedCredentialsStatusMapper
} // namespace Model
} // namespace Cloud9
} // namespace Aws
