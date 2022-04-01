/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{
  enum class EncryptionMethod
  {
    NOT_SET,
    AES_128,
    SAMPLE_AES
  };

namespace EncryptionMethodMapper
{
AWS_MEDIAPACKAGEVOD_API EncryptionMethod GetEncryptionMethodForName(const Aws::String& name);

AWS_MEDIAPACKAGEVOD_API Aws::String GetNameForEncryptionMethod(EncryptionMethod value);
} // namespace EncryptionMethodMapper
} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
