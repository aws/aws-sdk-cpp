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
  enum class UserAssignment
  {
    NOT_SET,
    AUTOMATIC,
    MANUAL
  };

namespace UserAssignmentMapper
{
AWS_DATAZONE_API UserAssignment GetUserAssignmentForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForUserAssignment(UserAssignment value);
} // namespace UserAssignmentMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
