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
  enum class ShareMethod
  {
    NOT_SET,
    ORGANIZATIONS,
    HANDSHAKE
  };

namespace ShareMethodMapper
{
AWS_DIRECTORYSERVICE_API ShareMethod GetShareMethodForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForShareMethod(ShareMethod value);
} // namespace ShareMethodMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
