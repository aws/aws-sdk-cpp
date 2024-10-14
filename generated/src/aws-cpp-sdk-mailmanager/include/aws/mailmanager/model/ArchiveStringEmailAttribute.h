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
  enum class ArchiveStringEmailAttribute
  {
    NOT_SET,
    TO,
    FROM,
    CC,
    SUBJECT,
    ENVELOPE_TO,
    ENVELOPE_FROM
  };

namespace ArchiveStringEmailAttributeMapper
{
AWS_MAILMANAGER_API ArchiveStringEmailAttribute GetArchiveStringEmailAttributeForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForArchiveStringEmailAttribute(ArchiveStringEmailAttribute value);
} // namespace ArchiveStringEmailAttributeMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
