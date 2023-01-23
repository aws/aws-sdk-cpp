/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{
  enum class ApiAccess
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace ApiAccessMapper
{
AWS_FINSPACEDATA_API ApiAccess GetApiAccessForName(const Aws::String& name);

AWS_FINSPACEDATA_API Aws::String GetNameForApiAccess(ApiAccess value);
} // namespace ApiAccessMapper
} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
