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
  enum class DifferenceStatus
  {
    NOT_SET,
    UPDATED,
    NEW_,
    DELETED
  };

namespace DifferenceStatusMapper
{
AWS_WELLARCHITECTED_API DifferenceStatus GetDifferenceStatusForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForDifferenceStatus(DifferenceStatus value);
} // namespace DifferenceStatusMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
