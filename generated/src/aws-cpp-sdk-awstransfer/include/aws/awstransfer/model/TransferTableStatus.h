/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Transfer
{
namespace Model
{
  enum class TransferTableStatus
  {
    NOT_SET,
    QUEUED,
    IN_PROGRESS,
    COMPLETED,
    FAILED
  };

namespace TransferTableStatusMapper
{
AWS_TRANSFER_API TransferTableStatus GetTransferTableStatusForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForTransferTableStatus(TransferTableStatus value);
} // namespace TransferTableStatusMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
