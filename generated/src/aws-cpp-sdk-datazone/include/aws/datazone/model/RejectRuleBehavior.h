/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class RejectRuleBehavior
  {
    NOT_SET,
    ALL,
    NONE
  };

namespace RejectRuleBehaviorMapper
{
AWS_DATAZONE_API RejectRuleBehavior GetRejectRuleBehaviorForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForRejectRuleBehavior(RejectRuleBehavior value);
} // namespace RejectRuleBehaviorMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
