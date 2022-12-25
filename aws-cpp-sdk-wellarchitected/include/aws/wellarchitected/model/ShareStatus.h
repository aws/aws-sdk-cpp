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
  enum class ShareStatus
  {
    NOT_SET,
    ACCEPTED,
    REJECTED,
    PENDING,
    REVOKED,
    EXPIRED,
    ASSOCIATING,
    ASSOCIATED,
    FAILED
  };

namespace ShareStatusMapper
{
AWS_WELLARCHITECTED_API ShareStatus GetShareStatusForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForShareStatus(ShareStatus value);
} // namespace ShareStatusMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
