/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecr/model/DescribeImagesFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {

DescribeImagesFilter::DescribeImagesFilter(JsonView jsonValue) { *this = jsonValue; }

DescribeImagesFilter& DescribeImagesFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("tagStatus")) {
    m_tagStatus = TagStatusMapper::GetTagStatusForName(jsonValue.GetString("tagStatus"));
    m_tagStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("imageStatus")) {
    m_imageStatus = ImageStatusFilterMapper::GetImageStatusFilterForName(jsonValue.GetString("imageStatus"));
    m_imageStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue DescribeImagesFilter::Jsonize() const {
  JsonValue payload;

  if (m_tagStatusHasBeenSet) {
    payload.WithString("tagStatus", TagStatusMapper::GetNameForTagStatus(m_tagStatus));
  }

  if (m_imageStatusHasBeenSet) {
    payload.WithString("imageStatus", ImageStatusFilterMapper::GetNameForImageStatusFilter(m_imageStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
