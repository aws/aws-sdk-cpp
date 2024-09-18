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
  enum class GroupType
  {
    NOT_SET,
    Distribution,
    Security
  };

namespace GroupTypeMapper
{
AWS_DIRECTORYSERVICEDATA_API GroupType GetGroupTypeForName(const Aws::String& name);

AWS_DIRECTORYSERVICEDATA_API Aws::String GetNameForGroupType(GroupType value);
} // namespace GroupTypeMapper
} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
