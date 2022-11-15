/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{
  enum class ApplicationVersionLifecycle
  {
    NOT_SET,
    Creating,
    Available,
    Failed
  };

namespace ApplicationVersionLifecycleMapper
{
AWS_MAINFRAMEMODERNIZATION_API ApplicationVersionLifecycle GetApplicationVersionLifecycleForName(const Aws::String& name);

AWS_MAINFRAMEMODERNIZATION_API Aws::String GetNameForApplicationVersionLifecycle(ApplicationVersionLifecycle value);
} // namespace ApplicationVersionLifecycleMapper
} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
