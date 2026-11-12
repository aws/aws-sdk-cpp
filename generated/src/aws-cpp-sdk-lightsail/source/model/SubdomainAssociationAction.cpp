/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lightsail/model/SubdomainAssociationAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {
namespace SubdomainAssociationActionMapper {

static const int ASSOCIATE_HASH = HashingUtils::HashString("ASSOCIATE");
static const int DISASSOCIATE_HASH = HashingUtils::HashString("DISASSOCIATE");
static const int TRANSFER_HASH = HashingUtils::HashString("TRANSFER");

SubdomainAssociationAction GetSubdomainAssociationActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ASSOCIATE_HASH) {
    return SubdomainAssociationAction::ASSOCIATE;
  } else if (hashCode == DISASSOCIATE_HASH) {
    return SubdomainAssociationAction::DISASSOCIATE;
  } else if (hashCode == TRANSFER_HASH) {
    return SubdomainAssociationAction::TRANSFER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SubdomainAssociationAction>(hashCode);
  }

  return SubdomainAssociationAction::NOT_SET;
}

Aws::String GetNameForSubdomainAssociationAction(SubdomainAssociationAction enumValue) {
  switch (enumValue) {
    case SubdomainAssociationAction::NOT_SET:
      return {};
    case SubdomainAssociationAction::ASSOCIATE:
      return "ASSOCIATE";
    case SubdomainAssociationAction::DISASSOCIATE:
      return "DISASSOCIATE";
    case SubdomainAssociationAction::TRANSFER:
      return "TRANSFER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SubdomainAssociationActionMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
