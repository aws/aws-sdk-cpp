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
  enum class DirectoryType
  {
    NOT_SET,
    SimpleAD,
    ADConnector,
    MicrosoftAD,
    SharedMicrosoftAD
  };

namespace DirectoryTypeMapper
{
AWS_DIRECTORYSERVICE_API DirectoryType GetDirectoryTypeForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForDirectoryType(DirectoryType value);
} // namespace DirectoryTypeMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
