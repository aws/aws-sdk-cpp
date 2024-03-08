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
  enum class InventorySearchScope
  {
    NOT_SET,
    ASSET,
    GLOSSARY,
    GLOSSARY_TERM
  };

namespace InventorySearchScopeMapper
{
AWS_DATAZONE_API InventorySearchScope GetInventorySearchScopeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForInventorySearchScope(InventorySearchScope value);
} // namespace InventorySearchScopeMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
