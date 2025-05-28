/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class SnapshotReturnCodes
  {
    NOT_SET,
    success,
    skipped,
    missing_permissions,
    internal_error,
    client_error
  };

namespace SnapshotReturnCodesMapper
{
AWS_EC2_API SnapshotReturnCodes GetSnapshotReturnCodesForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForSnapshotReturnCodes(SnapshotReturnCodes value);
} // namespace SnapshotReturnCodesMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
