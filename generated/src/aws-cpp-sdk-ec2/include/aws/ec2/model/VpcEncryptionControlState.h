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
  enum class VpcEncryptionControlState
  {
    NOT_SET,
    enforce_in_progress,
    monitor_in_progress,
    enforce_failed,
    monitor_failed,
    deleting,
    deleted,
    available,
    creating,
    delete_failed
  };

namespace VpcEncryptionControlStateMapper
{
AWS_EC2_API VpcEncryptionControlState GetVpcEncryptionControlStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForVpcEncryptionControlState(VpcEncryptionControlState value);
} // namespace VpcEncryptionControlStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
