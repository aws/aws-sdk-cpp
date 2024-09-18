/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectoryServiceData
{
namespace Model
{
  enum class GroupScope
  {
    NOT_SET,
    DomainLocal,
    Global,
    Universal,
    BuiltinLocal
  };

namespace GroupScopeMapper
{
AWS_DIRECTORYSERVICEDATA_API GroupScope GetGroupScopeForName(const Aws::String& name);

AWS_DIRECTORYSERVICEDATA_API Aws::String GetNameForGroupScope(GroupScope value);
} // namespace GroupScopeMapper
} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
