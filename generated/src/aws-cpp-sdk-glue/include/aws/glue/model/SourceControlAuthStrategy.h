/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class SourceControlAuthStrategy
  {
    NOT_SET,
    PERSONAL_ACCESS_TOKEN,
    AWS_SECRETS_MANAGER
  };

namespace SourceControlAuthStrategyMapper
{
AWS_GLUE_API SourceControlAuthStrategy GetSourceControlAuthStrategyForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForSourceControlAuthStrategy(SourceControlAuthStrategy value);
} // namespace SourceControlAuthStrategyMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
