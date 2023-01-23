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
  enum class CancelBatchErrorCode
  {
    NOT_SET,
    fleetRequestIdDoesNotExist,
    fleetRequestIdMalformed,
    fleetRequestNotInCancellableState,
    unexpectedError
  };

namespace CancelBatchErrorCodeMapper
{
AWS_EC2_API CancelBatchErrorCode GetCancelBatchErrorCodeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForCancelBatchErrorCode(CancelBatchErrorCode value);
} // namespace CancelBatchErrorCodeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
