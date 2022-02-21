/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{
  enum class WorkflowType
  {
    NOT_SET,
    APPFLOW_INTEGRATION
  };

namespace WorkflowTypeMapper
{
AWS_CUSTOMERPROFILES_API WorkflowType GetWorkflowTypeForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForWorkflowType(WorkflowType value);
} // namespace WorkflowTypeMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
