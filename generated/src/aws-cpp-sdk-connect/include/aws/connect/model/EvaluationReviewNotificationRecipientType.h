/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class EvaluationReviewNotificationRecipientType { NOT_SET, USER_ID };

namespace EvaluationReviewNotificationRecipientTypeMapper {
AWS_CONNECT_API EvaluationReviewNotificationRecipientType GetEvaluationReviewNotificationRecipientTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationReviewNotificationRecipientType(EvaluationReviewNotificationRecipientType value);
}  // namespace EvaluationReviewNotificationRecipientTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
