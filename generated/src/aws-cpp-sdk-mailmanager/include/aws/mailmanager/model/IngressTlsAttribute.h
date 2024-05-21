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
  enum class IngressTlsAttribute
  {
    NOT_SET,
    TLS_PROTOCOL
  };

namespace IngressTlsAttributeMapper
{
AWS_MAILMANAGER_API IngressTlsAttribute GetIngressTlsAttributeForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForIngressTlsAttribute(IngressTlsAttribute value);
} // namespace IngressTlsAttributeMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
