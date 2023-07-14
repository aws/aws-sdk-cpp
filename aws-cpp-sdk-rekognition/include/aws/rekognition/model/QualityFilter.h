/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Rekognition
{
namespace Model
{
  enum class QualityFilter
  {
    NOT_SET,
    NONE,
    AUTO,
    LOW,
    MEDIUM,
    HIGH
  };

namespace QualityFilterMapper
{
AWS_REKOGNITION_API QualityFilter GetQualityFilterForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForQualityFilter(QualityFilter value);
} // namespace QualityFilterMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
