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
  enum class ComputationModelState
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    UPDATING,
    DELETING,
    FAILED
  };

namespace ComputationModelStateMapper
{
AWS_IOTSITEWISE_API ComputationModelState GetComputationModelStateForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForComputationModelState(ComputationModelState value);
} // namespace ComputationModelStateMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
