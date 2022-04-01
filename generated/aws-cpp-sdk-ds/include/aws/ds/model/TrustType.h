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
  enum class TrustType
  {
    NOT_SET,
    Forest,
    External
  };

namespace TrustTypeMapper
{
AWS_DIRECTORYSERVICE_API TrustType GetTrustTypeForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForTrustType(TrustType value);
} // namespace TrustTypeMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
