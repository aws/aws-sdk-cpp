/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/Kendra_EXPORTS.h>

namespace Aws {
namespace kendra {
namespace Model {
enum class FsxFileSystemType { NOT_SET, WINDOWS };

namespace FsxFileSystemTypeMapper {
AWS_KENDRA_API FsxFileSystemType GetFsxFileSystemTypeForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForFsxFileSystemType(FsxFileSystemType value);
}  // namespace FsxFileSystemTypeMapper
}  // namespace Model
}  // namespace kendra
}  // namespace Aws
