/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RAM
{
namespace Model
{
  enum class ResourceShareAssociationStatus
  {
    NOT_SET,
    ASSOCIATING,
    ASSOCIATED,
    FAILED,
    DISASSOCIATING,
    DISASSOCIATED
  };

namespace ResourceShareAssociationStatusMapper
{
AWS_RAM_API ResourceShareAssociationStatus GetResourceShareAssociationStatusForName(const Aws::String& name);

AWS_RAM_API Aws::String GetNameForResourceShareAssociationStatus(ResourceShareAssociationStatus value);
} // namespace ResourceShareAssociationStatusMapper
} // namespace Model
} // namespace RAM
} // namespace Aws
