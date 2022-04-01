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
  enum class ExperimentActionStatus
  {
    NOT_SET,
    pending,
    initiating,
    running,
    completed,
    cancelled,
    stopping,
    stopped,
    failed
  };

namespace ExperimentActionStatusMapper
{
AWS_FIS_API ExperimentActionStatus GetExperimentActionStatusForName(const Aws::String& name);

AWS_FIS_API Aws::String GetNameForExperimentActionStatus(ExperimentActionStatus value);
} // namespace ExperimentActionStatusMapper
} // namespace Model
} // namespace FIS
} // namespace Aws
