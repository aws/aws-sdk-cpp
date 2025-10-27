/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>

namespace Aws {
namespace FSx {
namespace Model {
enum class FileSystemType { NOT_SET, WINDOWS, LUSTRE, ONTAP, OPENZFS };

namespace FileSystemTypeMapper {
AWS_FSX_API FileSystemType GetFileSystemTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForFileSystemType(FileSystemType value);
}  // namespace FileSystemTypeMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
