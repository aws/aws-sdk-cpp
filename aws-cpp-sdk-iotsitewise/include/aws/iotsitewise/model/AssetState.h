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
  enum class AssetState
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    UPDATING,
    DELETING,
    FAILED
  };

namespace AssetStateMapper
{
AWS_IOTSITEWISE_API AssetState GetAssetStateForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForAssetState(AssetState value);
} // namespace AssetStateMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
