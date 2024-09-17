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
  enum class FileStatusType
  {
    NOT_SET,
    APPROVED,
    REJECTED,
    PROCESSING,
    FAILED
  };

namespace FileStatusTypeMapper
{
AWS_CONNECT_API FileStatusType GetFileStatusTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForFileStatusType(FileStatusType value);
} // namespace FileStatusTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
