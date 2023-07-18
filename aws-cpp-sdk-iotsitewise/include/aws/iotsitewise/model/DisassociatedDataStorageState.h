/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{
  enum class DisassociatedDataStorageState
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace DisassociatedDataStorageStateMapper
{
AWS_IOTSITEWISE_API DisassociatedDataStorageState GetDisassociatedDataStorageStateForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForDisassociatedDataStorageState(DisassociatedDataStorageState value);
} // namespace DisassociatedDataStorageStateMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
