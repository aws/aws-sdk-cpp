/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glacier
{
namespace Model
{
  enum class CannedACL
  {
    NOT_SET,
    private_,
    public_read,
    public_read_write,
    aws_exec_read,
    authenticated_read,
    bucket_owner_read,
    bucket_owner_full_control
  };

namespace CannedACLMapper
{
AWS_GLACIER_API CannedACL GetCannedACLForName(const Aws::String& name);

AWS_GLACIER_API Aws::String GetNameForCannedACL(CannedACL value);
} // namespace CannedACLMapper
} // namespace Model
} // namespace Glacier
} // namespace Aws
