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
  enum class AcceptAction
  {
    NOT_SET,
    ALLOW,
    DENY
  };

namespace AcceptActionMapper
{
AWS_MAILMANAGER_API AcceptAction GetAcceptActionForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForAcceptAction(AcceptAction value);
} // namespace AcceptActionMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
