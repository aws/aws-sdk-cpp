/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FMS
{
namespace Model
{
  enum class RemediationActionType
  {
    NOT_SET,
    REMOVE,
    MODIFY
  };

namespace RemediationActionTypeMapper
{
AWS_FMS_API RemediationActionType GetRemediationActionTypeForName(const Aws::String& name);

AWS_FMS_API Aws::String GetNameForRemediationActionType(RemediationActionType value);
} // namespace RemediationActionTypeMapper
} // namespace Model
} // namespace FMS
} // namespace Aws
