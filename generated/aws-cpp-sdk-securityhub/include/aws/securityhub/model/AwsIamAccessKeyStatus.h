/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class AwsIamAccessKeyStatus
  {
    NOT_SET,
    Active,
    Inactive
  };

namespace AwsIamAccessKeyStatusMapper
{
AWS_SECURITYHUB_API AwsIamAccessKeyStatus GetAwsIamAccessKeyStatusForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForAwsIamAccessKeyStatus(AwsIamAccessKeyStatus value);
} // namespace AwsIamAccessKeyStatusMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
