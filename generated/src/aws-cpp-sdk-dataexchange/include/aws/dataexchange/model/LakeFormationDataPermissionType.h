/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataExchange
{
namespace Model
{
  enum class LakeFormationDataPermissionType
  {
    NOT_SET,
    LFTagPolicy
  };

namespace LakeFormationDataPermissionTypeMapper
{
AWS_DATAEXCHANGE_API LakeFormationDataPermissionType GetLakeFormationDataPermissionTypeForName(const Aws::String& name);

AWS_DATAEXCHANGE_API Aws::String GetNameForLakeFormationDataPermissionType(LakeFormationDataPermissionType value);
} // namespace LakeFormationDataPermissionTypeMapper
} // namespace Model
} // namespace DataExchange
} // namespace Aws
