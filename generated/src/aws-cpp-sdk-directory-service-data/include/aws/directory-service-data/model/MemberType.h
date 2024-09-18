/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectoryServiceData
{
namespace Model
{
  enum class MemberType
  {
    NOT_SET,
    USER,
    GROUP,
    COMPUTER
  };

namespace MemberTypeMapper
{
AWS_DIRECTORYSERVICEDATA_API MemberType GetMemberTypeForName(const Aws::String& name);

AWS_DIRECTORYSERVICEDATA_API Aws::String GetNameForMemberType(MemberType value);
} // namespace MemberTypeMapper
} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
