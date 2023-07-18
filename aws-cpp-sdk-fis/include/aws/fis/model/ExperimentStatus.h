/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FIS
{
namespace Model
{
  enum class ExperimentStatus
  {
    NOT_SET,
    pending,
    initiating,
    running,
    completed,
    stopping,
    stopped,
    failed
  };

namespace ExperimentStatusMapper
{
AWS_FIS_API ExperimentStatus GetExperimentStatusForName(const Aws::String& name);

AWS_FIS_API Aws::String GetNameForExperimentStatus(ExperimentStatus value);
} // namespace ExperimentStatusMapper
} // namespace Model
} // namespace FIS
} // namespace Aws
