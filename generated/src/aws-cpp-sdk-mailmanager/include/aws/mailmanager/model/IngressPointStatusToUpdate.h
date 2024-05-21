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
  enum class IngressPointStatusToUpdate
  {
    NOT_SET,
    ACTIVE,
    CLOSED
  };

namespace IngressPointStatusToUpdateMapper
{
AWS_MAILMANAGER_API IngressPointStatusToUpdate GetIngressPointStatusToUpdateForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForIngressPointStatusToUpdate(IngressPointStatusToUpdate value);
} // namespace IngressPointStatusToUpdateMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
