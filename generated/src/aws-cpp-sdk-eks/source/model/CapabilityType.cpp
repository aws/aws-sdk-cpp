/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eks/model/CapabilityType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {
namespace CapabilityTypeMapper {

static const int ACK_HASH = HashingUtils::HashString("ACK");
static const int KRO_HASH = HashingUtils::HashString("KRO");
static const int ARGOCD_HASH = HashingUtils::HashString("ARGOCD");

CapabilityType GetCapabilityTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACK_HASH) {
    return CapabilityType::ACK;
  } else if (hashCode == KRO_HASH) {
    return CapabilityType::KRO;
  } else if (hashCode == ARGOCD_HASH) {
    return CapabilityType::ARGOCD;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapabilityType>(hashCode);
  }

  return CapabilityType::NOT_SET;
}

Aws::String GetNameForCapabilityType(CapabilityType enumValue) {
  switch (enumValue) {
    case CapabilityType::NOT_SET:
      return {};
    case CapabilityType::ACK:
      return "ACK";
    case CapabilityType::KRO:
      return "KRO";
    case CapabilityType::ARGOCD:
      return "ARGOCD";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapabilityTypeMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
