/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{
  enum class StorageClass
  {
    NOT_SET,
    STANDARD_IA,
    ONEZONE_IA,
    INTELLIGENT_TIERING,
    GLACIER_IR,
    GLACIER,
    DEEP_ARCHIVE,
    EXPIRE
  };

namespace StorageClassMapper
{
AWS_SECURITYLAKE_API StorageClass GetStorageClassForName(const Aws::String& name);

AWS_SECURITYLAKE_API Aws::String GetNameForStorageClass(StorageClass value);
} // namespace StorageClassMapper
} // namespace Model
} // namespace SecurityLake
} // namespace Aws
