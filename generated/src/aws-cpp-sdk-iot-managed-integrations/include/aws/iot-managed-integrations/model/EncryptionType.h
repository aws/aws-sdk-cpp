/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{
  enum class EncryptionType
  {
    NOT_SET,
    MANAGED_INTEGRATIONS_DEFAULT_ENCRYPTION,
    CUSTOMER_KEY_ENCRYPTION
  };

namespace EncryptionTypeMapper
{
AWS_IOTMANAGEDINTEGRATIONS_API EncryptionType GetEncryptionTypeForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForEncryptionType(EncryptionType value);
} // namespace EncryptionTypeMapper
} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
