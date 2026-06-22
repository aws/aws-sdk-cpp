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
enum class ContactEvaluationAttributeKey { NOT_SET, ContactAgentId };

namespace ContactEvaluationAttributeKeyMapper {
AWS_CONNECT_API ContactEvaluationAttributeKey GetContactEvaluationAttributeKeyForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForContactEvaluationAttributeKey(ContactEvaluationAttributeKey value);
}  // namespace ContactEvaluationAttributeKeyMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
