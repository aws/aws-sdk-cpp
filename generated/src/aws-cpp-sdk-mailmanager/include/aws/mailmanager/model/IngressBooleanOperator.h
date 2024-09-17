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
  enum class IngressBooleanOperator
  {
    NOT_SET,
    IS_TRUE,
    IS_FALSE
  };

namespace IngressBooleanOperatorMapper
{
AWS_MAILMANAGER_API IngressBooleanOperator GetIngressBooleanOperatorForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForIngressBooleanOperator(IngressBooleanOperator value);
} // namespace IngressBooleanOperatorMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
