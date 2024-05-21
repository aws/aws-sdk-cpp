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
  enum class IngressStringOperator
  {
    NOT_SET,
    EQUALS,
    NOT_EQUALS,
    STARTS_WITH,
    ENDS_WITH,
    CONTAINS
  };

namespace IngressStringOperatorMapper
{
AWS_MAILMANAGER_API IngressStringOperator GetIngressStringOperatorForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForIngressStringOperator(IngressStringOperator value);
} // namespace IngressStringOperatorMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
