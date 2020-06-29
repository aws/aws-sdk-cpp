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
  enum class DetectorVersionStatus
  {
    NOT_SET,
    DRAFT,
    ACTIVE,
    INACTIVE
  };

namespace DetectorVersionStatusMapper
{
AWS_FRAUDDETECTOR_API DetectorVersionStatus GetDetectorVersionStatusForName(const Aws::String& name);

AWS_FRAUDDETECTOR_API Aws::String GetNameForDetectorVersionStatus(DetectorVersionStatus value);
} // namespace DetectorVersionStatusMapper
} // namespace Model
} // namespace FraudDetector
} // namespace Aws
