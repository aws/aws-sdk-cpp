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
  enum class ComputationModelType
  {
    NOT_SET,
    ANOMALY_DETECTION
  };

namespace ComputationModelTypeMapper
{
AWS_IOTSITEWISE_API ComputationModelType GetComputationModelTypeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForComputationModelType(ComputationModelType value);
} // namespace ComputationModelTypeMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
