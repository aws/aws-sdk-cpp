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
  enum class IngressStringEmailAttribute
  {
    NOT_SET,
    RECIPIENT
  };

namespace IngressStringEmailAttributeMapper
{
AWS_MAILMANAGER_API IngressStringEmailAttribute GetIngressStringEmailAttributeForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForIngressStringEmailAttribute(IngressStringEmailAttribute value);
} // namespace IngressStringEmailAttributeMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
