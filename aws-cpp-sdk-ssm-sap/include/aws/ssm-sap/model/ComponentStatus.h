/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SsmSap
{
namespace Model
{
  enum class ComponentStatus
  {
    NOT_SET,
    ACTIVATED
  };

namespace ComponentStatusMapper
{
AWS_SSMSAP_API ComponentStatus GetComponentStatusForName(const Aws::String& name);

AWS_SSMSAP_API Aws::String GetNameForComponentStatus(ComponentStatus value);
} // namespace ComponentStatusMapper
} // namespace Model
} // namespace SsmSap
} // namespace Aws
