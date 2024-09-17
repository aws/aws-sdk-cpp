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
  enum class MailFrom
  {
    NOT_SET,
    REPLACE,
    PRESERVE
  };

namespace MailFromMapper
{
AWS_MAILMANAGER_API MailFrom GetMailFromForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForMailFrom(MailFrom value);
} // namespace MailFromMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
