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
  enum class GovernanceType
  {
    NOT_SET,
    AWS_MANAGED,
    USER_MANAGED
  };

namespace GovernanceTypeMapper
{
AWS_DATAZONE_API GovernanceType GetGovernanceTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForGovernanceType(GovernanceType value);
} // namespace GovernanceTypeMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
