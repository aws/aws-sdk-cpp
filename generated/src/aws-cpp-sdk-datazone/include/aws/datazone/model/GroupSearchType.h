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
  enum class GroupSearchType
  {
    NOT_SET,
    SSO_GROUP,
    DATAZONE_SSO_GROUP
  };

namespace GroupSearchTypeMapper
{
AWS_DATAZONE_API GroupSearchType GetGroupSearchTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForGroupSearchType(GroupSearchType value);
} // namespace GroupSearchTypeMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
