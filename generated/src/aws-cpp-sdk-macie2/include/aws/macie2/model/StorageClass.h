/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class StorageClass
  {
    NOT_SET,
    STANDARD,
    REDUCED_REDUNDANCY,
    STANDARD_IA,
    INTELLIGENT_TIERING,
    DEEP_ARCHIVE,
    ONEZONE_IA,
    GLACIER,
    GLACIER_IR,
    OUTPOSTS
  };

namespace StorageClassMapper
{
AWS_MACIE2_API StorageClass GetStorageClassForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForStorageClass(StorageClass value);
} // namespace StorageClassMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
