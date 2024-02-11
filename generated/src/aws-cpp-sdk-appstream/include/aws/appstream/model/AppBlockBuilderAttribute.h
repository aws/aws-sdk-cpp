/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{
  enum class AppBlockBuilderAttribute
  {
    NOT_SET,
    IAM_ROLE_ARN,
    ACCESS_ENDPOINTS,
    VPC_CONFIGURATION_SECURITY_GROUP_IDS
  };

namespace AppBlockBuilderAttributeMapper
{
AWS_APPSTREAM_API AppBlockBuilderAttribute GetAppBlockBuilderAttributeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForAppBlockBuilderAttribute(AppBlockBuilderAttribute value);
} // namespace AppBlockBuilderAttributeMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
