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
  enum class LDAPSType
  {
    NOT_SET,
    Client
  };

namespace LDAPSTypeMapper
{
AWS_DIRECTORYSERVICE_API LDAPSType GetLDAPSTypeForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForLDAPSType(LDAPSType value);
} // namespace LDAPSTypeMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
