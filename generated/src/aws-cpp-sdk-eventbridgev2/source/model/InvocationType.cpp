/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/model/InvocationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
namespace InvocationTypeMapper {

static const int EVENT_HASH = HashingUtils::HashString("EVENT");
static const int REQUEST_RESPONSE_HASH = HashingUtils::HashString("REQUEST_RESPONSE");

InvocationType GetInvocationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EVENT_HASH) {
    return InvocationType::EVENT;
  } else if (hashCode == REQUEST_RESPONSE_HASH) {
    return InvocationType::REQUEST_RESPONSE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InvocationType>(hashCode);
  }

  return InvocationType::NOT_SET;
}

Aws::String GetNameForInvocationType(InvocationType enumValue) {
  switch (enumValue) {
    case InvocationType::NOT_SET:
      return {};
    case InvocationType::EVENT:
      return "EVENT";
    case InvocationType::REQUEST_RESPONSE:
      return "REQUEST_RESPONSE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InvocationTypeMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
