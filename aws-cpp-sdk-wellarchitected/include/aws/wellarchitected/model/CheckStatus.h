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
  enum class CheckStatus
  {
    NOT_SET,
    OKAY,
    WARNING,
    ERROR_,
    NOT_AVAILABLE,
    FETCH_FAILED
  };

namespace CheckStatusMapper
{
AWS_WELLARCHITECTED_API CheckStatus GetCheckStatusForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForCheckStatus(CheckStatus value);
} // namespace CheckStatusMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
