/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/AcmeContact.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {
namespace AcmeContactMapper {

static const int REQUIRED_HASH = HashingUtils::HashString("REQUIRED");
static const int NOT_REQUIRED_HASH = HashingUtils::HashString("NOT_REQUIRED");

AcmeContact GetAcmeContactForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REQUIRED_HASH) {
    return AcmeContact::REQUIRED;
  } else if (hashCode == NOT_REQUIRED_HASH) {
    return AcmeContact::NOT_REQUIRED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AcmeContact>(hashCode);
  }

  return AcmeContact::NOT_SET;
}

Aws::String GetNameForAcmeContact(AcmeContact enumValue) {
  switch (enumValue) {
    case AcmeContact::NOT_SET:
      return {};
    case AcmeContact::REQUIRED:
      return "REQUIRED";
    case AcmeContact::NOT_REQUIRED:
      return "NOT_REQUIRED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AcmeContactMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
