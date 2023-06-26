/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Detective
{
namespace Model
{
  enum class MemberDisabledReason
  {
    NOT_SET,
    VOLUME_TOO_HIGH,
    VOLUME_UNKNOWN
  };

namespace MemberDisabledReasonMapper
{
AWS_DETECTIVE_API MemberDisabledReason GetMemberDisabledReasonForName(const Aws::String& name);

AWS_DETECTIVE_API Aws::String GetNameForMemberDisabledReason(MemberDisabledReason value);
} // namespace MemberDisabledReasonMapper
} // namespace Model
} // namespace Detective
} // namespace Aws
