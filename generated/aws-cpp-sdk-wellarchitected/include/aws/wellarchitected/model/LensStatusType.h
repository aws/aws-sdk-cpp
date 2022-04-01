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
  enum class LensStatusType
  {
    NOT_SET,
    ALL,
    DRAFT,
    PUBLISHED
  };

namespace LensStatusTypeMapper
{
AWS_WELLARCHITECTED_API LensStatusType GetLensStatusTypeForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForLensStatusType(LensStatusType value);
} // namespace LensStatusTypeMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
