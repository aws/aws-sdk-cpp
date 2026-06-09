/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/FileFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace FileFormatMapper {

static const int PDF_HASH = HashingUtils::HashString("PDF");
static const int IPYNB_HASH = HashingUtils::HashString("IPYNB");

FileFormat GetFileFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PDF_HASH) {
    return FileFormat::PDF;
  } else if (hashCode == IPYNB_HASH) {
    return FileFormat::IPYNB;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FileFormat>(hashCode);
  }

  return FileFormat::NOT_SET;
}

Aws::String GetNameForFileFormat(FileFormat enumValue) {
  switch (enumValue) {
    case FileFormat::NOT_SET:
      return {};
    case FileFormat::PDF:
      return "PDF";
    case FileFormat::IPYNB:
      return "IPYNB";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FileFormatMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
