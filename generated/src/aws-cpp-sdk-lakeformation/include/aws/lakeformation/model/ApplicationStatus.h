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
  enum class ApplicationStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace ApplicationStatusMapper
{
AWS_LAKEFORMATION_API ApplicationStatus GetApplicationStatusForName(const Aws::String& name);

AWS_LAKEFORMATION_API Aws::String GetNameForApplicationStatus(ApplicationStatus value);
} // namespace ApplicationStatusMapper
} // namespace Model
} // namespace LakeFormation
} // namespace Aws
