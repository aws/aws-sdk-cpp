/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{
  enum class TargetType
  {
    NOT_SET,
    ACCOUNT
  };

namespace TargetTypeMapper
{
AWS_DIRECTORYSERVICE_API TargetType GetTargetTypeForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForTargetType(TargetType value);
} // namespace TargetTypeMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
