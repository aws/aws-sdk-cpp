/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{
  enum class FieldNameString
  {
    NOT_SET,
    RESOURCE_ARN,
    ROLE_ARN,
    LAST_MODIFIED
  };

namespace FieldNameStringMapper
{
AWS_LAKEFORMATION_API FieldNameString GetFieldNameStringForName(const Aws::String& name);

AWS_LAKEFORMATION_API Aws::String GetNameForFieldNameString(FieldNameString value);
} // namespace FieldNameStringMapper
} // namespace Model
} // namespace LakeFormation
} // namespace Aws
