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
  enum class IngressIpv6Attribute
  {
    NOT_SET,
    SENDER_IPV6
  };

namespace IngressIpv6AttributeMapper
{
AWS_MAILMANAGER_API IngressIpv6Attribute GetIngressIpv6AttributeForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForIngressIpv6Attribute(IngressIpv6Attribute value);
} // namespace IngressIpv6AttributeMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
