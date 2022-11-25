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
  enum class AddressTransferStatus
  {
    NOT_SET,
    pending,
    disabled,
    accepted
  };

namespace AddressTransferStatusMapper
{
AWS_EC2_API AddressTransferStatus GetAddressTransferStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForAddressTransferStatus(AddressTransferStatus value);
} // namespace AddressTransferStatusMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
