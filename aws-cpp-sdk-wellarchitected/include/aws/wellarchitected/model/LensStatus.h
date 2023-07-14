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
  enum class LensStatus
  {
    NOT_SET,
    CURRENT,
    NOT_CURRENT,
    DEPRECATED,
    DELETED,
    UNSHARED
  };

namespace LensStatusMapper
{
AWS_WELLARCHITECTED_API LensStatus GetLensStatusForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForLensStatus(LensStatus value);
} // namespace LensStatusMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
