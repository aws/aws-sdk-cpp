/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{
  enum class Approval
  {
    NOT_SET,
    approve,
    decline
  };

namespace ApprovalMapper
{
AWS_ARCREGIONSWITCH_API Approval GetApprovalForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForApproval(Approval value);
} // namespace ApprovalMapper
} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
