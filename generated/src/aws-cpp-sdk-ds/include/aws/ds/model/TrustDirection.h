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
  enum class TrustDirection
  {
    NOT_SET,
    One_Way_Outgoing,
    One_Way_Incoming,
    Two_Way
  };

namespace TrustDirectionMapper
{
AWS_DIRECTORYSERVICE_API TrustDirection GetTrustDirectionForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForTrustDirection(TrustDirection value);
} // namespace TrustDirectionMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
