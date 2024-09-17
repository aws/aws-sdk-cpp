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
  enum class ArchiveBooleanEmailAttribute
  {
    NOT_SET,
    HAS_ATTACHMENTS
  };

namespace ArchiveBooleanEmailAttributeMapper
{
AWS_MAILMANAGER_API ArchiveBooleanEmailAttribute GetArchiveBooleanEmailAttributeForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForArchiveBooleanEmailAttribute(ArchiveBooleanEmailAttribute value);
} // namespace ArchiveBooleanEmailAttributeMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
