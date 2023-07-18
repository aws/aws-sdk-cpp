/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{
  enum class StreamingImageEncryptionConfigurationKeyType
  {
    NOT_SET,
    CUSTOMER_MANAGED_KEY
  };

namespace StreamingImageEncryptionConfigurationKeyTypeMapper
{
AWS_NIMBLESTUDIO_API StreamingImageEncryptionConfigurationKeyType GetStreamingImageEncryptionConfigurationKeyTypeForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForStreamingImageEncryptionConfigurationKeyType(StreamingImageEncryptionConfigurationKeyType value);
} // namespace StreamingImageEncryptionConfigurationKeyTypeMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
