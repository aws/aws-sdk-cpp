/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/Provider.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace ProviderMapper {

static const int AWS_HASH = HashingUtils::HashString("AWS");
static const int AZURE_HASH = HashingUtils::HashString("AZURE");

Provider GetProviderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_HASH) {
    return Provider::AWS;
  } else if (hashCode == AZURE_HASH) {
    return Provider::AZURE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Provider>(hashCode);
  }

  return Provider::NOT_SET;
}

Aws::String GetNameForProvider(Provider enumValue) {
  switch (enumValue) {
    case Provider::NOT_SET:
      return {};
    case Provider::AWS:
      return "AWS";
    case Provider::AZURE:
      return "AZURE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProviderMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
