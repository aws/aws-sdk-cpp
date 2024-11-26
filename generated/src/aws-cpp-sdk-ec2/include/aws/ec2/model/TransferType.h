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
  enum class TransferType
  {
    NOT_SET,
    time_based,
    standard
  };

namespace TransferTypeMapper
{
AWS_EC2_API TransferType GetTransferTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTransferType(TransferType value);
} // namespace TransferTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
