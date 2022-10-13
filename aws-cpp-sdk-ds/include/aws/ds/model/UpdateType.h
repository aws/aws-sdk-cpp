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
  enum class UpdateType
  {
    NOT_SET,
    OS
  };

namespace UpdateTypeMapper
{
AWS_DIRECTORYSERVICE_API UpdateType GetUpdateTypeForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForUpdateType(UpdateType value);
} // namespace UpdateTypeMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
