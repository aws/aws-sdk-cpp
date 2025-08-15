/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PrometheusService
{
namespace Model
{
  enum class WorkspacePolicyStatusCode
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    UPDATING,
    DELETING
  };

namespace WorkspacePolicyStatusCodeMapper
{
AWS_PROMETHEUSSERVICE_API WorkspacePolicyStatusCode GetWorkspacePolicyStatusCodeForName(const Aws::String& name);

AWS_PROMETHEUSSERVICE_API Aws::String GetNameForWorkspacePolicyStatusCode(WorkspacePolicyStatusCode value);
} // namespace WorkspacePolicyStatusCodeMapper
} // namespace Model
} // namespace PrometheusService
} // namespace Aws
