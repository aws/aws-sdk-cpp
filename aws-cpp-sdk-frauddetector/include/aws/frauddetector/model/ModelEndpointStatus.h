/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{
  enum class ModelEndpointStatus
  {
    NOT_SET,
    ASSOCIATED,
    DISSOCIATED
  };

namespace ModelEndpointStatusMapper
{
AWS_FRAUDDETECTOR_API ModelEndpointStatus GetModelEndpointStatusForName(const Aws::String& name);

AWS_FRAUDDETECTOR_API Aws::String GetNameForModelEndpointStatus(ModelEndpointStatus value);
} // namespace ModelEndpointStatusMapper
} // namespace Model
} // namespace FraudDetector
} // namespace Aws
