/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataSync
{
namespace Model
{
  enum class TransferMode
  {
    NOT_SET,
    CHANGED,
    ALL
  };

namespace TransferModeMapper
{
AWS_DATASYNC_API TransferMode GetTransferModeForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForTransferMode(TransferMode value);
} // namespace TransferModeMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
