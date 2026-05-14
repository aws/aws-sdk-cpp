/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class FileFormat { NOT_SET, PDF, IPYNB };

namespace FileFormatMapper {
AWS_DATAZONE_API FileFormat GetFileFormatForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForFileFormat(FileFormat value);
}  // namespace FileFormatMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
