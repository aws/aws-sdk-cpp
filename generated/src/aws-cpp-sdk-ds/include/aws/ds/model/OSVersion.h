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
  enum class OSVersion
  {
    NOT_SET,
    SERVER_2012,
    SERVER_2019
  };

namespace OSVersionMapper
{
AWS_DIRECTORYSERVICE_API OSVersion GetOSVersionForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForOSVersion(OSVersion value);
} // namespace OSVersionMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
