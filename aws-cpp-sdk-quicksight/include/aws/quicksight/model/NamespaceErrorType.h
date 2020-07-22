/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class NamespaceErrorType
  {
    NOT_SET,
    PERMISSION_DENIED,
    INTERNAL_SERVICE_ERROR
  };

namespace NamespaceErrorTypeMapper
{
AWS_QUICKSIGHT_API NamespaceErrorType GetNamespaceErrorTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForNamespaceErrorType(NamespaceErrorType value);
} // namespace NamespaceErrorTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
