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
  enum class ProtectedJobType
  {
    NOT_SET,
    PYSPARK
  };

namespace ProtectedJobTypeMapper
{
AWS_CLEANROOMS_API ProtectedJobType GetProtectedJobTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForProtectedJobType(ProtectedJobType value);
} // namespace ProtectedJobTypeMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
