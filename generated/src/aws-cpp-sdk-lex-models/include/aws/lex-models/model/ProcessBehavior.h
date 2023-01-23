/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{
  enum class ProcessBehavior
  {
    NOT_SET,
    SAVE,
    BUILD
  };

namespace ProcessBehaviorMapper
{
AWS_LEXMODELBUILDINGSERVICE_API ProcessBehavior GetProcessBehaviorForName(const Aws::String& name);

AWS_LEXMODELBUILDINGSERVICE_API Aws::String GetNameForProcessBehavior(ProcessBehavior value);
} // namespace ProcessBehaviorMapper
} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
