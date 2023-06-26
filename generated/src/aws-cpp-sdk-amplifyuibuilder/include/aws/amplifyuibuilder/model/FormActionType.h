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
  enum class FormActionType
  {
    NOT_SET,
    create,
    update
  };

namespace FormActionTypeMapper
{
AWS_AMPLIFYUIBUILDER_API FormActionType GetFormActionTypeForName(const Aws::String& name);

AWS_AMPLIFYUIBUILDER_API Aws::String GetNameForFormActionType(FormActionType value);
} // namespace FormActionTypeMapper
} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
