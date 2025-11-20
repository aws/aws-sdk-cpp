/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/VpcEncryptionControlExclusionStateInput.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace VpcEncryptionControlExclusionStateInputMapper {

static const int enable_HASH = HashingUtils::HashString("enable");
static const int disable_HASH = HashingUtils::HashString("disable");

VpcEncryptionControlExclusionStateInput GetVpcEncryptionControlExclusionStateInputForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == enable_HASH) {
    return VpcEncryptionControlExclusionStateInput::enable;
  } else if (hashCode == disable_HASH) {
    return VpcEncryptionControlExclusionStateInput::disable;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VpcEncryptionControlExclusionStateInput>(hashCode);
  }

  return VpcEncryptionControlExclusionStateInput::NOT_SET;
}

Aws::String GetNameForVpcEncryptionControlExclusionStateInput(VpcEncryptionControlExclusionStateInput enumValue) {
  switch (enumValue) {
    case VpcEncryptionControlExclusionStateInput::NOT_SET:
      return {};
    case VpcEncryptionControlExclusionStateInput::enable:
      return "enable";
    case VpcEncryptionControlExclusionStateInput::disable:
      return "disable";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VpcEncryptionControlExclusionStateInputMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
