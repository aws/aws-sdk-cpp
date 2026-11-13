/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ImageBuilderAttribute.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {
namespace ImageBuilderAttributeMapper {

static const int AGENT_ACCESS_CONFIG_HASH = HashingUtils::HashString("AGENT_ACCESS_CONFIG");

ImageBuilderAttribute GetImageBuilderAttributeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AGENT_ACCESS_CONFIG_HASH) {
    return ImageBuilderAttribute::AGENT_ACCESS_CONFIG;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ImageBuilderAttribute>(hashCode);
  }

  return ImageBuilderAttribute::NOT_SET;
}

Aws::String GetNameForImageBuilderAttribute(ImageBuilderAttribute enumValue) {
  switch (enumValue) {
    case ImageBuilderAttribute::NOT_SET:
      return {};
    case ImageBuilderAttribute::AGENT_ACCESS_CONFIG:
      return "AGENT_ACCESS_CONFIG";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ImageBuilderAttributeMapper
}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
