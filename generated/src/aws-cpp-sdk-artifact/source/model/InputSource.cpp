/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/InputSource.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Artifact {
namespace Model {
namespace InputSourceMapper {

static const int TEXT_HASH = HashingUtils::HashString("TEXT");
static const int FILE_HASH = HashingUtils::HashString("FILE");

InputSource GetInputSourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TEXT_HASH) {
    return InputSource::TEXT;
  } else if (hashCode == FILE_HASH) {
    return InputSource::FILE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InputSource>(hashCode);
  }

  return InputSource::NOT_SET;
}

Aws::String GetNameForInputSource(InputSource enumValue) {
  switch (enumValue) {
    case InputSource::NOT_SET:
      return {};
    case InputSource::TEXT:
      return "TEXT";
    case InputSource::FILE:
      return "FILE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InputSourceMapper
}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
