/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecr/model/LifecyclePolicyRuleAction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {

LifecyclePolicyRuleAction::LifecyclePolicyRuleAction(JsonView jsonValue) { *this = jsonValue; }

LifecyclePolicyRuleAction& LifecyclePolicyRuleAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = ImageActionTypeMapper::GetImageActionTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetStorageClass")) {
    m_targetStorageClass =
        LifecyclePolicyTargetStorageClassMapper::GetLifecyclePolicyTargetStorageClassForName(jsonValue.GetString("targetStorageClass"));
    m_targetStorageClassHasBeenSet = true;
  }
  return *this;
}

JsonValue LifecyclePolicyRuleAction::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", ImageActionTypeMapper::GetNameForImageActionType(m_type));
  }

  if (m_targetStorageClassHasBeenSet) {
    payload.WithString("targetStorageClass",
                       LifecyclePolicyTargetStorageClassMapper::GetNameForLifecyclePolicyTargetStorageClass(m_targetStorageClass));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
