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
  enum class FormDataSourceType
  {
    NOT_SET,
    DataStore,
    Custom
  };

namespace FormDataSourceTypeMapper
{
AWS_AMPLIFYUIBUILDER_API FormDataSourceType GetFormDataSourceTypeForName(const Aws::String& name);

AWS_AMPLIFYUIBUILDER_API Aws::String GetNameForFormDataSourceType(FormDataSourceType value);
} // namespace FormDataSourceTypeMapper
} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
