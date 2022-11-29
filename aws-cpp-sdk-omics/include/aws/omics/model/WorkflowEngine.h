/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Omics
{
namespace Model
{
  enum class WorkflowEngine
  {
    NOT_SET,
    WDL,
    NEXTFLOW
  };

namespace WorkflowEngineMapper
{
AWS_OMICS_API WorkflowEngine GetWorkflowEngineForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForWorkflowEngine(WorkflowEngine value);
} // namespace WorkflowEngineMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
