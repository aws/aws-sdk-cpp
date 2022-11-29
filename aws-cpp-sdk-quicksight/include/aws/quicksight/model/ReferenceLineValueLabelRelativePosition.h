/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class ReferenceLineValueLabelRelativePosition
  {
    NOT_SET,
    BEFORE_CUSTOM_LABEL,
    AFTER_CUSTOM_LABEL
  };

namespace ReferenceLineValueLabelRelativePositionMapper
{
AWS_QUICKSIGHT_API ReferenceLineValueLabelRelativePosition GetReferenceLineValueLabelRelativePositionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForReferenceLineValueLabelRelativePosition(ReferenceLineValueLabelRelativePosition value);
} // namespace ReferenceLineValueLabelRelativePositionMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
