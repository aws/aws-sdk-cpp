/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Amplify
{
namespace Model
{
  enum class DomainStatus
  {
    NOT_SET,
    PENDING_VERIFICATION,
    IN_PROGRESS,
    AVAILABLE,
    PENDING_DEPLOYMENT,
    FAILED,
    CREATING,
    REQUESTING_CERTIFICATE,
    UPDATING
  };

namespace DomainStatusMapper
{
AWS_AMPLIFY_API DomainStatus GetDomainStatusForName(const Aws::String& name);

AWS_AMPLIFY_API Aws::String GetNameForDomainStatus(DomainStatus value);
} // namespace DomainStatusMapper
} // namespace Model
} // namespace Amplify
} // namespace Aws
