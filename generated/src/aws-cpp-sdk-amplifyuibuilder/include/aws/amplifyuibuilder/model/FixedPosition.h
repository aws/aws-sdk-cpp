/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{
  enum class FixedPosition
  {
    NOT_SET,
    first
  };

namespace FixedPositionMapper
{
AWS_AMPLIFYUIBUILDER_API FixedPosition GetFixedPositionForName(const Aws::String& name);

AWS_AMPLIFYUIBUILDER_API Aws::String GetNameForFixedPosition(FixedPosition value);
} // namespace FixedPositionMapper
} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
