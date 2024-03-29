﻿/**
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
  enum class LabelDecorator
  {
    NOT_SET,
    required,
    optional,
    none
  };

namespace LabelDecoratorMapper
{
AWS_AMPLIFYUIBUILDER_API LabelDecorator GetLabelDecoratorForName(const Aws::String& name);

AWS_AMPLIFYUIBUILDER_API Aws::String GetNameForLabelDecorator(LabelDecorator value);
} // namespace LabelDecoratorMapper
} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
