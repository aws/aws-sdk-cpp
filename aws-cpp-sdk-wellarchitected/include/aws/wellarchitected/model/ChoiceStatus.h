/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{
  enum class ChoiceStatus
  {
    NOT_SET,
    SELECTED,
    NOT_APPLICABLE,
    UNSELECTED
  };

namespace ChoiceStatusMapper
{
AWS_WELLARCHITECTED_API ChoiceStatus GetChoiceStatusForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForChoiceStatus(ChoiceStatus value);
} // namespace ChoiceStatusMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
