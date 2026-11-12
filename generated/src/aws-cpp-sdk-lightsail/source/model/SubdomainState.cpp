/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lightsail/model/SubdomainState.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {
namespace SubdomainStateMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int UNATTACHED_HASH = HashingUtils::HashString("UNATTACHED");
static const int ATTACHING_HASH = HashingUtils::HashString("ATTACHING");
static const int ATTACHED_HASH = HashingUtils::HashString("ATTACHED");
static const int DETACHING_HASH = HashingUtils::HashString("DETACHING");
static const int TRANSFERRING_HASH = HashingUtils::HashString("TRANSFERRING");
static const int IMPLICIT_HASH = HashingUtils::HashString("IMPLICIT");

SubdomainState GetSubdomainStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return SubdomainState::CREATING;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return SubdomainState::CREATE_FAILED;
  } else if (hashCode == UNATTACHED_HASH) {
    return SubdomainState::UNATTACHED;
  } else if (hashCode == ATTACHING_HASH) {
    return SubdomainState::ATTACHING;
  } else if (hashCode == ATTACHED_HASH) {
    return SubdomainState::ATTACHED;
  } else if (hashCode == DETACHING_HASH) {
    return SubdomainState::DETACHING;
  } else if (hashCode == TRANSFERRING_HASH) {
    return SubdomainState::TRANSFERRING;
  } else if (hashCode == IMPLICIT_HASH) {
    return SubdomainState::IMPLICIT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SubdomainState>(hashCode);
  }

  return SubdomainState::NOT_SET;
}

Aws::String GetNameForSubdomainState(SubdomainState enumValue) {
  switch (enumValue) {
    case SubdomainState::NOT_SET:
      return {};
    case SubdomainState::CREATING:
      return "CREATING";
    case SubdomainState::CREATE_FAILED:
      return "CREATE_FAILED";
    case SubdomainState::UNATTACHED:
      return "UNATTACHED";
    case SubdomainState::ATTACHING:
      return "ATTACHING";
    case SubdomainState::ATTACHED:
      return "ATTACHED";
    case SubdomainState::DETACHING:
      return "DETACHING";
    case SubdomainState::TRANSFERRING:
      return "TRANSFERRING";
    case SubdomainState::IMPLICIT:
      return "IMPLICIT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SubdomainStateMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
