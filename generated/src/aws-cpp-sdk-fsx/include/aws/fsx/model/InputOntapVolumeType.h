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
  enum class InputOntapVolumeType
  {
    NOT_SET,
    RW,
    DP
  };

namespace InputOntapVolumeTypeMapper
{
AWS_FSX_API InputOntapVolumeType GetInputOntapVolumeTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForInputOntapVolumeType(InputOntapVolumeType value);
} // namespace InputOntapVolumeTypeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
