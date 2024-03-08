/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Amplify
{
namespace Model
{
  enum class UpdateStatus
  {
    NOT_SET,
    REQUESTING_CERTIFICATE,
    PENDING_VERIFICATION,
    IMPORTING_CUSTOM_CERTIFICATE,
    PENDING_DEPLOYMENT,
    AWAITING_APP_CNAME,
    UPDATE_COMPLETE,
    UPDATE_FAILED
  };

namespace UpdateStatusMapper
{
AWS_AMPLIFY_API UpdateStatus GetUpdateStatusForName(const Aws::String& name);

AWS_AMPLIFY_API Aws::String GetNameForUpdateStatus(UpdateStatus value);
} // namespace UpdateStatusMapper
} // namespace Model
} // namespace Amplify
} // namespace Aws
