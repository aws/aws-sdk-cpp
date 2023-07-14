/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class CannedAccessControlList
  {
    NOT_SET,
    private_,
    public_read,
    public_read_write,
    aws_exec_read,
    authenticated_read,
    bucket_owner_read,
    bucket_owner_full_control,
    log_delivery_write
  };

namespace CannedAccessControlListMapper
{
AWS_IOT_API CannedAccessControlList GetCannedAccessControlListForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForCannedAccessControlList(CannedAccessControlList value);
} // namespace CannedAccessControlListMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
