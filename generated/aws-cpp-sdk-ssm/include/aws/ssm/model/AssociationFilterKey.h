/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class AssociationFilterKey
  {
    NOT_SET,
    InstanceId,
    Name,
    AssociationId,
    AssociationStatusName,
    LastExecutedBefore,
    LastExecutedAfter,
    AssociationName,
    ResourceGroupName
  };

namespace AssociationFilterKeyMapper
{
AWS_SSM_API AssociationFilterKey GetAssociationFilterKeyForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForAssociationFilterKey(AssociationFilterKey value);
} // namespace AssociationFilterKeyMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
