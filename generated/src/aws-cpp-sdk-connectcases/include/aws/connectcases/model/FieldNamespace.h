/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{
  enum class FieldNamespace
  {
    NOT_SET,
    System,
    Custom
  };

namespace FieldNamespaceMapper
{
AWS_CONNECTCASES_API FieldNamespace GetFieldNamespaceForName(const Aws::String& name);

AWS_CONNECTCASES_API Aws::String GetNameForFieldNamespace(FieldNamespace value);
} // namespace FieldNamespaceMapper
} // namespace Model
} // namespace ConnectCases
} // namespace Aws
