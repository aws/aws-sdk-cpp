/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace imagebuilder {
namespace Model {

/**
 */
class GetWorkflowStepExecutionRequest : public ImagebuilderRequest {
 public:
  AWS_IMAGEBUILDER_API GetWorkflowStepExecutionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetWorkflowStepExecution"; }

  AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;

  AWS_IMAGEBUILDER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The unique identifier for the runtime instance of the workflow step that you
   * want to get runtime details for. To get the identifiers for the steps that ran
   * in a workflow, call <a>ListWorkflowStepExecutions</a>.</p>
   */
  inline const Aws::String& GetStepExecutionId() const { return m_stepExecutionId; }
  inline bool StepExecutionIdHasBeenSet() const { return m_stepExecutionIdHasBeenSet; }
  template <typename StepExecutionIdT = Aws::String>
  void SetStepExecutionId(StepExecutionIdT&& value) {
    m_stepExecutionIdHasBeenSet = true;
    m_stepExecutionId = std::forward<StepExecutionIdT>(value);
  }
  template <typename StepExecutionIdT = Aws::String>
  GetWorkflowStepExecutionRequest& WithStepExecutionId(StepExecutionIdT&& value) {
    SetStepExecutionId(std::forward<StepExecutionIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_stepExecutionId;
  bool m_stepExecutionIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
