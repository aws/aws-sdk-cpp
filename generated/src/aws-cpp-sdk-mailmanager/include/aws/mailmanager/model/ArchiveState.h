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
  enum class ArchiveState
  {
    NOT_SET,
    ACTIVE,
    PENDING_DELETION
  };

namespace ArchiveStateMapper
{
AWS_MAILMANAGER_API ArchiveState GetArchiveStateForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForArchiveState(ArchiveState value);
} // namespace ArchiveStateMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
