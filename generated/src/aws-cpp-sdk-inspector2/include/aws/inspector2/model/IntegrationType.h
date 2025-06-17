/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class IntegrationType
  {
    NOT_SET,
    GITLAB_SELF_MANAGED,
    GITHUB
  };

namespace IntegrationTypeMapper
{
AWS_INSPECTOR2_API IntegrationType GetIntegrationTypeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForIntegrationType(IntegrationType value);
} // namespace IntegrationTypeMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
