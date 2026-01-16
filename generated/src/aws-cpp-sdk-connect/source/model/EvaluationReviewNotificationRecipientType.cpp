/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationReviewNotificationRecipientType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace EvaluationReviewNotificationRecipientTypeMapper {

static const int USER_ID_HASH = HashingUtils::HashString("USER_ID");

EvaluationReviewNotificationRecipientType GetEvaluationReviewNotificationRecipientTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == USER_ID_HASH) {
    return EvaluationReviewNotificationRecipientType::USER_ID;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationReviewNotificationRecipientType>(hashCode);
  }

  return EvaluationReviewNotificationRecipientType::NOT_SET;
}

Aws::String GetNameForEvaluationReviewNotificationRecipientType(EvaluationReviewNotificationRecipientType enumValue) {
  switch (enumValue) {
    case EvaluationReviewNotificationRecipientType::NOT_SET:
      return {};
    case EvaluationReviewNotificationRecipientType::USER_ID:
      return "USER_ID";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationReviewNotificationRecipientTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
