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
  enum class ErrorMessageType
  {
    NOT_SET,
    DETAILED
  };

namespace ErrorMessageTypeMapper
{
AWS_CLEANROOMS_API ErrorMessageType GetErrorMessageTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForErrorMessageType(ErrorMessageType value);
} // namespace ErrorMessageTypeMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
