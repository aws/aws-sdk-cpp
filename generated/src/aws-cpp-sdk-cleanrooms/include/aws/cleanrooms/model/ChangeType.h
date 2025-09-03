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
  enum class ChangeType
  {
    NOT_SET,
    ADD_MEMBER
  };

namespace ChangeTypeMapper
{
AWS_CLEANROOMS_API ChangeType GetChangeTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForChangeType(ChangeType value);
} // namespace ChangeTypeMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
