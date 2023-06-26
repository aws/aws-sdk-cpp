/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class ProtectedQueryType
  {
    NOT_SET,
    SQL
  };

namespace ProtectedQueryTypeMapper
{
AWS_CLEANROOMS_API ProtectedQueryType GetProtectedQueryTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForProtectedQueryType(ProtectedQueryType value);
} // namespace ProtectedQueryTypeMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
