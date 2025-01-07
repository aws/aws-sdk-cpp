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
  enum class ComputeEnvironments
  {
    NOT_SET,
    SPARK,
    ATHENA,
    PYTHON
  };

namespace ComputeEnvironmentsMapper
{
AWS_DATAZONE_API ComputeEnvironments GetComputeEnvironmentsForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForComputeEnvironments(ComputeEnvironments value);
} // namespace ComputeEnvironmentsMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
