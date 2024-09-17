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
  enum class IngressTlsProtocolOperator
  {
    NOT_SET,
    MINIMUM_TLS_VERSION,
    IS
  };

namespace IngressTlsProtocolOperatorMapper
{
AWS_MAILMANAGER_API IngressTlsProtocolOperator GetIngressTlsProtocolOperatorForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForIngressTlsProtocolOperator(IngressTlsProtocolOperator value);
} // namespace IngressTlsProtocolOperatorMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
