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
  enum class UserDesignation
  {
    NOT_SET,
    PROJECT_OWNER,
    PROJECT_CONTRIBUTOR
  };

namespace UserDesignationMapper
{
AWS_DATAZONE_API UserDesignation GetUserDesignationForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForUserDesignation(UserDesignation value);
} // namespace UserDesignationMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
