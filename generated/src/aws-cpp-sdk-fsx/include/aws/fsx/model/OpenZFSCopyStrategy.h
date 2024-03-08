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
  enum class OpenZFSCopyStrategy
  {
    NOT_SET,
    CLONE,
    FULL_COPY,
    INCREMENTAL_COPY
  };

namespace OpenZFSCopyStrategyMapper
{
AWS_FSX_API OpenZFSCopyStrategy GetOpenZFSCopyStrategyForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForOpenZFSCopyStrategy(OpenZFSCopyStrategy value);
} // namespace OpenZFSCopyStrategyMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
