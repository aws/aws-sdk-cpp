/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MailManager
{
namespace Model
{
  enum class ActionFailurePolicy
  {
    NOT_SET,
    CONTINUE,
    DROP
  };

namespace ActionFailurePolicyMapper
{
AWS_MAILMANAGER_API ActionFailurePolicy GetActionFailurePolicyForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForActionFailurePolicy(ActionFailurePolicy value);
} // namespace ActionFailurePolicyMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
