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
  enum class IngressIpv4Attribute
  {
    NOT_SET,
    SENDER_IP
  };

namespace IngressIpv4AttributeMapper
{
AWS_MAILMANAGER_API IngressIpv4Attribute GetIngressIpv4AttributeForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForIngressIpv4Attribute(IngressIpv4Attribute value);
} // namespace IngressIpv4AttributeMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
