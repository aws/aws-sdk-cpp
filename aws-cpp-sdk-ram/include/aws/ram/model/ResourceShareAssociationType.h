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
  enum class ResourceShareAssociationType
  {
    NOT_SET,
    PRINCIPAL,
    RESOURCE
  };

namespace ResourceShareAssociationTypeMapper
{
AWS_RAM_API ResourceShareAssociationType GetResourceShareAssociationTypeForName(const Aws::String& name);

AWS_RAM_API Aws::String GetNameForResourceShareAssociationType(ResourceShareAssociationType value);
} // namespace ResourceShareAssociationTypeMapper
} // namespace Model
} // namespace RAM
} // namespace Aws
