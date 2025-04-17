/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class SlaAssignmentType
  {
    NOT_SET,
    CASES
  };

namespace SlaAssignmentTypeMapper
{
AWS_CONNECT_API SlaAssignmentType GetSlaAssignmentTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForSlaAssignmentType(SlaAssignmentType value);
} // namespace SlaAssignmentTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
