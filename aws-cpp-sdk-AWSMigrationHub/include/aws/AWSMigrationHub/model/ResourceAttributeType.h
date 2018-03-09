/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
