/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/CloudProvider.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace CloudProviderMapper {

static const int AWS_HASH = HashingUtils::HashString("AWS");
static const int AZURE_HASH = HashingUtils::HashString("AZURE");
static const int NOT_APPLICABLE_HASH = HashingUtils::HashString("NOT_APPLICABLE");

CloudProvider GetCloudProviderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_HASH) {
    return CloudProvider::AWS;
  } else if (hashCode == AZURE_HASH) {
    return CloudProvider::AZURE;
  } else if (hashCode == NOT_APPLICABLE_HASH) {
    return CloudProvider::NOT_APPLICABLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CloudProvider>(hashCode);
  }

  return CloudProvider::NOT_SET;
}

Aws::String GetNameForCloudProvider(CloudProvider enumValue) {
  switch (enumValue) {
    case CloudProvider::NOT_SET:
      return {};
    case CloudProvider::AWS:
      return "AWS";
    case CloudProvider::AZURE:
      return "AZURE";
    case CloudProvider::NOT_APPLICABLE:
      return "NOT_APPLICABLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CloudProviderMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
