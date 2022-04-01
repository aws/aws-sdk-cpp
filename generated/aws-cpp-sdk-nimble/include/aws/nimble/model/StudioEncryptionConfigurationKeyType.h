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
  enum class StudioEncryptionConfigurationKeyType
  {
    NOT_SET,
    AWS_OWNED_KEY,
    CUSTOMER_MANAGED_KEY
  };

namespace StudioEncryptionConfigurationKeyTypeMapper
{
AWS_NIMBLESTUDIO_API StudioEncryptionConfigurationKeyType GetStudioEncryptionConfigurationKeyTypeForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForStudioEncryptionConfigurationKeyType(StudioEncryptionConfigurationKeyType value);
} // namespace StudioEncryptionConfigurationKeyTypeMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
