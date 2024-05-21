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
  enum class ArchiveBooleanOperator
  {
    NOT_SET,
    IS_TRUE,
    IS_FALSE
  };

namespace ArchiveBooleanOperatorMapper
{
AWS_MAILMANAGER_API ArchiveBooleanOperator GetArchiveBooleanOperatorForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForArchiveBooleanOperator(ArchiveBooleanOperator value);
} // namespace ArchiveBooleanOperatorMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
