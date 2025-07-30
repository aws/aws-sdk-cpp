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
  enum class HybridUpdateType
  {
    NOT_SET,
    SelfManagedInstances,
    HybridAdministratorAccount
  };

namespace HybridUpdateTypeMapper
{
AWS_DIRECTORYSERVICE_API HybridUpdateType GetHybridUpdateTypeForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForHybridUpdateType(HybridUpdateType value);
} // namespace HybridUpdateTypeMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
