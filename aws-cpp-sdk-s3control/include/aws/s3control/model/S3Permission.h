/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Control
{
namespace Model
{
  enum class S3Permission
  {
    NOT_SET,
    FULL_CONTROL,
    READ,
    WRITE,
    READ_ACP,
    WRITE_ACP
  };

namespace S3PermissionMapper
{
AWS_S3CONTROL_API S3Permission GetS3PermissionForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForS3Permission(S3Permission value);
} // namespace S3PermissionMapper
} // namespace Model
} // namespace S3Control
} // namespace Aws
