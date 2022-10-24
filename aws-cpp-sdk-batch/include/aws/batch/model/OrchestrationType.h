/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Batch
{
namespace Model
{
  enum class OrchestrationType
  {
    NOT_SET,
    ECS,
    EKS
  };

namespace OrchestrationTypeMapper
{
AWS_BATCH_API OrchestrationType GetOrchestrationTypeForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForOrchestrationType(OrchestrationType value);
} // namespace OrchestrationTypeMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
