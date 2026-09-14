/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/imagebuilder/model/ImageFailureContext.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace imagebuilder {
namespace Model {

ImageFailureContext::ImageFailureContext(JsonView jsonValue) { *this = jsonValue; }

ImageFailureContext& ImageFailureContext::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("imageStatus")) {
    m_imageStatus = ImageStatusMapper::GetImageStatusForName(jsonValue.GetString("imageStatus"));
    m_imageStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workflowExecutionId")) {
    m_workflowExecutionId = jsonValue.GetString("workflowExecutionId");
    m_workflowExecutionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workflowArn")) {
    m_workflowArn = jsonValue.GetString("workflowArn");
    m_workflowArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stepExecutionId")) {
    m_stepExecutionId = jsonValue.GetString("stepExecutionId");
    m_stepExecutionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failedStep")) {
    m_failedStep = jsonValue.GetString("failedStep");
    m_failedStepHasBeenSet = true;
  }
  if (jsonValue.ValueExists("componentFailure")) {
    m_componentFailure = jsonValue.GetObject("componentFailure");
    m_componentFailureHasBeenSet = true;
  }
  if (jsonValue.ValueExists("distributionFailure")) {
    m_distributionFailure = jsonValue.GetObject("distributionFailure");
    m_distributionFailureHasBeenSet = true;
  }
  return *this;
}

JsonValue ImageFailureContext::Jsonize() const {
  JsonValue payload;

  if (m_imageStatusHasBeenSet) {
    payload.WithString("imageStatus", ImageStatusMapper::GetNameForImageStatus(m_imageStatus));
  }

  if (m_workflowExecutionIdHasBeenSet) {
    payload.WithString("workflowExecutionId", m_workflowExecutionId);
  }

  if (m_workflowArnHasBeenSet) {
    payload.WithString("workflowArn", m_workflowArn);
  }

  if (m_stepExecutionIdHasBeenSet) {
    payload.WithString("stepExecutionId", m_stepExecutionId);
  }

  if (m_failedStepHasBeenSet) {
    payload.WithString("failedStep", m_failedStep);
  }

  if (m_componentFailureHasBeenSet) {
    payload.WithObject("componentFailure", m_componentFailure.Jsonize());
  }

  if (m_distributionFailureHasBeenSet) {
    payload.WithObject("distributionFailure", m_distributionFailure.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
