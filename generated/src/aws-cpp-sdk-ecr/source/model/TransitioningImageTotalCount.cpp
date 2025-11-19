/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecr/model/TransitioningImageTotalCount.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {

TransitioningImageTotalCount::TransitioningImageTotalCount(JsonView jsonValue) { *this = jsonValue; }

TransitioningImageTotalCount& TransitioningImageTotalCount::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("targetStorageClass")) {
    m_targetStorageClass =
        LifecyclePolicyTargetStorageClassMapper::GetLifecyclePolicyTargetStorageClassForName(jsonValue.GetString("targetStorageClass"));
    m_targetStorageClassHasBeenSet = true;
  }
  if (jsonValue.ValueExists("imageTotalCount")) {
    m_imageTotalCount = jsonValue.GetInteger("imageTotalCount");
    m_imageTotalCountHasBeenSet = true;
  }
  return *this;
}

JsonValue TransitioningImageTotalCount::Jsonize() const {
  JsonValue payload;

  if (m_targetStorageClassHasBeenSet) {
    payload.WithString("targetStorageClass",
                       LifecyclePolicyTargetStorageClassMapper::GetNameForLifecyclePolicyTargetStorageClass(m_targetStorageClass));
  }

  if (m_imageTotalCountHasBeenSet) {
    payload.WithInteger("imageTotalCount", m_imageTotalCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
