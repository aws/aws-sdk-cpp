/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class AutoImportPolicyType
  {
    NOT_SET,
    NONE,
    NEW_,
    NEW_CHANGED
  };

namespace AutoImportPolicyTypeMapper
{
AWS_FSX_API AutoImportPolicyType GetAutoImportPolicyTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForAutoImportPolicyType(AutoImportPolicyType value);
} // namespace AutoImportPolicyTypeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
