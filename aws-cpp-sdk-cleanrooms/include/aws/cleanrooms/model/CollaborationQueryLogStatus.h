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
  enum class CollaborationQueryLogStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace CollaborationQueryLogStatusMapper
{
AWS_CLEANROOMS_API CollaborationQueryLogStatus GetCollaborationQueryLogStatusForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForCollaborationQueryLogStatus(CollaborationQueryLogStatus value);
} // namespace CollaborationQueryLogStatusMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
