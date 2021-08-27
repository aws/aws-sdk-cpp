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
  enum class SelectiveAuth
  {
    NOT_SET,
    Enabled,
    Disabled
  };

namespace SelectiveAuthMapper
{
AWS_DIRECTORYSERVICE_API SelectiveAuth GetSelectiveAuthForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForSelectiveAuth(SelectiveAuth value);
} // namespace SelectiveAuthMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
