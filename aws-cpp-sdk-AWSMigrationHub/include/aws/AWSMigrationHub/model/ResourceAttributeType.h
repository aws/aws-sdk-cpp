/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MigrationHub
{
namespace Model
{
  enum class ResourceAttributeType
  {
    NOT_SET,
    IPV4_ADDRESS,
    IPV6_ADDRESS,
    MAC_ADDRESS,
    FQDN,
    VM_MANAGER_ID,
    VM_MANAGED_OBJECT_REFERENCE,
    VM_NAME,
    VM_PATH,
    BIOS_ID,
    MOTHERBOARD_SERIAL_NUMBER
  };

namespace ResourceAttributeTypeMapper
{
AWS_MIGRATIONHUB_API ResourceAttributeType GetResourceAttributeTypeForName(const Aws::String& name);

AWS_MIGRATIONHUB_API Aws::String GetNameForResourceAttributeType(ResourceAttributeType value);
} // namespace ResourceAttributeTypeMapper
} // namespace Model
} // namespace MigrationHub
} // namespace Aws
