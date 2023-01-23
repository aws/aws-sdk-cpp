/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{
  enum class UserStackAssociationErrorCode
  {
    NOT_SET,
    STACK_NOT_FOUND,
    USER_NAME_NOT_FOUND,
    DIRECTORY_NOT_FOUND,
    INTERNAL_ERROR
  };

namespace UserStackAssociationErrorCodeMapper
{
AWS_APPSTREAM_API UserStackAssociationErrorCode GetUserStackAssociationErrorCodeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForUserStackAssociationErrorCode(UserStackAssociationErrorCode value);
} // namespace UserStackAssociationErrorCodeMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
