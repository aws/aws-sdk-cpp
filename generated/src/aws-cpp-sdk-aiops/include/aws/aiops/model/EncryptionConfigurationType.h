/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/aiops/AIOps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AIOps
{
namespace Model
{
  enum class EncryptionConfigurationType
  {
    NOT_SET,
    AWS_OWNED_KEY,
    CUSTOMER_MANAGED_KMS_KEY
  };

namespace EncryptionConfigurationTypeMapper
{
AWS_AIOPS_API EncryptionConfigurationType GetEncryptionConfigurationTypeForName(const Aws::String& name);

AWS_AIOPS_API Aws::String GetNameForEncryptionConfigurationType(EncryptionConfigurationType value);
} // namespace EncryptionConfigurationTypeMapper
} // namespace Model
} // namespace AIOps
} // namespace Aws
