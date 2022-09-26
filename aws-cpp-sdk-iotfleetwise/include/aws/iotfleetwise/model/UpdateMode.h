/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{
  enum class UpdateMode
  {
    NOT_SET,
    Overwrite,
    Merge
  };

namespace UpdateModeMapper
{
AWS_IOTFLEETWISE_API UpdateMode GetUpdateModeForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForUpdateMode(UpdateMode value);
} // namespace UpdateModeMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
