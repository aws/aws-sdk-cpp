/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{
  enum class DeprecatedStatus
  {
    NOT_SET,
    LIVE,
    DEPRECATED
  };

namespace DeprecatedStatusMapper
{
AWS_CLOUDFORMATION_API DeprecatedStatus GetDeprecatedStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForDeprecatedStatus(DeprecatedStatus value);
} // namespace DeprecatedStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
