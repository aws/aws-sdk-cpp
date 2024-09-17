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
  enum class IngressTlsProtocolAttribute
  {
    NOT_SET,
    TLS1_2,
    TLS1_3
  };

namespace IngressTlsProtocolAttributeMapper
{
AWS_MAILMANAGER_API IngressTlsProtocolAttribute GetIngressTlsProtocolAttributeForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForIngressTlsProtocolAttribute(IngressTlsProtocolAttribute value);
} // namespace IngressTlsProtocolAttributeMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
