/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mailmanager/model/LambdaInvocationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MailManager {
namespace Model {
namespace LambdaInvocationTypeMapper {

static const int EVENT_HASH = HashingUtils::HashString("EVENT");
static const int REQUEST_RESPONSE_HASH = HashingUtils::HashString("REQUEST_RESPONSE");

LambdaInvocationType GetLambdaInvocationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EVENT_HASH) {
    return LambdaInvocationType::EVENT;
  } else if (hashCode == REQUEST_RESPONSE_HASH) {
    return LambdaInvocationType::REQUEST_RESPONSE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LambdaInvocationType>(hashCode);
  }

  return LambdaInvocationType::NOT_SET;
}

Aws::String GetNameForLambdaInvocationType(LambdaInvocationType enumValue) {
  switch (enumValue) {
    case LambdaInvocationType::NOT_SET:
      return {};
    case LambdaInvocationType::EVENT:
      return "EVENT";
    case LambdaInvocationType::REQUEST_RESPONSE:
      return "REQUEST_RESPONSE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LambdaInvocationTypeMapper
}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
