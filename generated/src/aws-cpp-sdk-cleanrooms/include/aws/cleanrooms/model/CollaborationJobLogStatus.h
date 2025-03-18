/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class CollaborationJobLogStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace CollaborationJobLogStatusMapper
{
AWS_CLEANROOMS_API CollaborationJobLogStatus GetCollaborationJobLogStatusForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForCollaborationJobLogStatus(CollaborationJobLogStatus value);
} // namespace CollaborationJobLogStatusMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
