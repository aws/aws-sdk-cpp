/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{
  enum class OperationType
  {
    NOT_SET,
    READONLY,
    MUTATION
  };

namespace OperationTypeMapper
{
AWS_CODECATALYST_API OperationType GetOperationTypeForName(const Aws::String& name);

AWS_CODECATALYST_API Aws::String GetNameForOperationType(OperationType value);
} // namespace OperationTypeMapper
} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
