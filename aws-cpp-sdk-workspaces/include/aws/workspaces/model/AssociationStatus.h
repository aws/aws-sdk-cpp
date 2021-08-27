/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{
  enum class AssociationStatus
  {
    NOT_SET,
    NOT_ASSOCIATED,
    ASSOCIATED_WITH_OWNER_ACCOUNT,
    ASSOCIATED_WITH_SHARED_ACCOUNT,
    PENDING_ASSOCIATION,
    PENDING_DISASSOCIATION
  };

namespace AssociationStatusMapper
{
AWS_WORKSPACES_API AssociationStatus GetAssociationStatusForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForAssociationStatus(AssociationStatus value);
} // namespace AssociationStatusMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
