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
  enum class FormButtonsPosition
  {
    NOT_SET,
    top,
    bottom,
    top_and_bottom
  };

namespace FormButtonsPositionMapper
{
AWS_AMPLIFYUIBUILDER_API FormButtonsPosition GetFormButtonsPositionForName(const Aws::String& name);

AWS_AMPLIFYUIBUILDER_API Aws::String GetNameForFormButtonsPosition(FormButtonsPosition value);
} // namespace FormButtonsPositionMapper
} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
