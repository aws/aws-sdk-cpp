/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class FileUseCaseType
  {
    NOT_SET,
    EMAIL_MESSAGE,
    ATTACHMENT
  };

namespace FileUseCaseTypeMapper
{
AWS_CONNECT_API FileUseCaseType GetFileUseCaseTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForFileUseCaseType(FileUseCaseType value);
} // namespace FileUseCaseTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
