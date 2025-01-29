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
  enum class IngressAddressListEmailAttribute
  {
    NOT_SET,
    RECIPIENT
  };

namespace IngressAddressListEmailAttributeMapper
{
AWS_MAILMANAGER_API IngressAddressListEmailAttribute GetIngressAddressListEmailAttributeForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForIngressAddressListEmailAttribute(IngressAddressListEmailAttribute value);
} // namespace IngressAddressListEmailAttributeMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
