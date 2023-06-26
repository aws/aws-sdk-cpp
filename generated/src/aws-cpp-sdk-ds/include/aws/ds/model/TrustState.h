/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{
  enum class TrustState
  {
    NOT_SET,
    Creating,
    Created,
    Verifying,
    VerifyFailed,
    Verified,
    Updating,
    UpdateFailed,
    Updated,
    Deleting,
    Deleted,
    Failed
  };

namespace TrustStateMapper
{
AWS_DIRECTORYSERVICE_API TrustState GetTrustStateForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForTrustState(TrustState value);
} // namespace TrustStateMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
