/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{
  enum class SlaStatus
  {
    NOT_SET,
    Active,
    Overdue,
    Met,
    NotMet
  };

namespace SlaStatusMapper
{
AWS_CONNECTCASES_API SlaStatus GetSlaStatusForName(const Aws::String& name);

AWS_CONNECTCASES_API Aws::String GetNameForSlaStatus(SlaStatus value);
} // namespace SlaStatusMapper
} // namespace Model
} // namespace ConnectCases
} // namespace Aws
