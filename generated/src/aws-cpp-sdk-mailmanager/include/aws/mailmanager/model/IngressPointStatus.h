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
  enum class IngressPointStatus
  {
    NOT_SET,
    PROVISIONING,
    DEPROVISIONING,
    UPDATING,
    ACTIVE,
    CLOSED,
    FAILED
  };

namespace IngressPointStatusMapper
{
AWS_MAILMANAGER_API IngressPointStatus GetIngressPointStatusForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForIngressPointStatus(IngressPointStatus value);
} // namespace IngressPointStatusMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
