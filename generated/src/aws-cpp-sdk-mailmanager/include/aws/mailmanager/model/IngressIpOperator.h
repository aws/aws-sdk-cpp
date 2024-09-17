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
  enum class IngressIpOperator
  {
    NOT_SET,
    CIDR_MATCHES,
    NOT_CIDR_MATCHES
  };

namespace IngressIpOperatorMapper
{
AWS_MAILMANAGER_API IngressIpOperator GetIngressIpOperatorForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForIngressIpOperator(IngressIpOperator value);
} // namespace IngressIpOperatorMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
