/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class OpenZFSFileSystemUserType
  {
    NOT_SET,
    POSIX
  };

namespace OpenZFSFileSystemUserTypeMapper
{
AWS_FSX_API OpenZFSFileSystemUserType GetOpenZFSFileSystemUserTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForOpenZFSFileSystemUserType(OpenZFSFileSystemUserType value);
} // namespace OpenZFSFileSystemUserTypeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
