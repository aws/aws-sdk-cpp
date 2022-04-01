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
  enum class AssetModelState
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    UPDATING,
    PROPAGATING,
    DELETING,
    FAILED
  };

namespace AssetModelStateMapper
{
AWS_IOTSITEWISE_API AssetModelState GetAssetModelStateForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForAssetModelState(AssetModelState value);
} // namespace AssetModelStateMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
