/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ACM
{
namespace Model
{
  enum class DomainStatus
  {
    NOT_SET,
    PENDING_VALIDATION,
    SUCCESS,
    FAILED
  };

namespace DomainStatusMapper
{
AWS_ACM_API DomainStatus GetDomainStatusForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForDomainStatus(DomainStatus value);
} // namespace DomainStatusMapper
} // namespace Model
} // namespace ACM
} // namespace Aws
