/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/ComponentFailureContext.h>
#include <aws/imagebuilder/model/DistributionFailureContext.h>
#include <aws/imagebuilder/model/ImageStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace imagebuilder {
namespace Model {

/**
 * <p>Contains details about the failure when the image creation process fails.
 * Properties appear in the failure context when the related information is
 * available for the failure.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ImageFailureContext">AWS
 * API Reference</a></p>
 */
class ImageFailureContext {
 public:
  AWS_IMAGEBUILDER_API ImageFailureContext() = default;
  AWS_IMAGEBUILDER_API ImageFailureContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API ImageFailureContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status that the image had when the failure occurred. This indicates the
   * stage of the image creation process where the image failed, for example
   * <code>BUILDING</code> or <code>DISTRIBUTING</code>.</p>
   */
  inline ImageStatus GetImageStatus() const { return m_imageStatus; }
  inline bool ImageStatusHasBeenSet() const { return m_imageStatusHasBeenSet; }
  inline void SetImageStatus(ImageStatus value) {
    m_imageStatusHasBeenSet = true;
    m_imageStatus = value;
  }
  inline ImageFailureContext& WithImageStatus(ImageStatus value) {
    SetImageStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the workflow execution that was running when the
   * image failed.</p>
   */
  inline const Aws::String& GetWorkflowExecutionId() const { return m_workflowExecutionId; }
  inline bool WorkflowExecutionIdHasBeenSet() const { return m_workflowExecutionIdHasBeenSet; }
  template <typename WorkflowExecutionIdT = Aws::String>
  void SetWorkflowExecutionId(WorkflowExecutionIdT&& value) {
    m_workflowExecutionIdHasBeenSet = true;
    m_workflowExecutionId = std::forward<WorkflowExecutionIdT>(value);
  }
  template <typename WorkflowExecutionIdT = Aws::String>
  ImageFailureContext& WithWorkflowExecutionId(WorkflowExecutionIdT&& value) {
    SetWorkflowExecutionId(std::forward<WorkflowExecutionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the workflow build version that was running
   * when the image failed.</p>
   */
  inline const Aws::String& GetWorkflowArn() const { return m_workflowArn; }
  inline bool WorkflowArnHasBeenSet() const { return m_workflowArnHasBeenSet; }
  template <typename WorkflowArnT = Aws::String>
  void SetWorkflowArn(WorkflowArnT&& value) {
    m_workflowArnHasBeenSet = true;
    m_workflowArn = std::forward<WorkflowArnT>(value);
  }
  template <typename WorkflowArnT = Aws::String>
  ImageFailureContext& WithWorkflowArn(WorkflowArnT&& value) {
    SetWorkflowArn(std::forward<WorkflowArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the workflow step execution that failed.</p>
   */
  inline const Aws::String& GetStepExecutionId() const { return m_stepExecutionId; }
  inline bool StepExecutionIdHasBeenSet() const { return m_stepExecutionIdHasBeenSet; }
  template <typename StepExecutionIdT = Aws::String>
  void SetStepExecutionId(StepExecutionIdT&& value) {
    m_stepExecutionIdHasBeenSet = true;
    m_stepExecutionId = std::forward<StepExecutionIdT>(value);
  }
  template <typename StepExecutionIdT = Aws::String>
  ImageFailureContext& WithStepExecutionId(StepExecutionIdT&& value) {
    SetStepExecutionId(std::forward<StepExecutionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the workflow step that failed, as it appears in the workflow
   * document.</p>
   */
  inline const Aws::String& GetFailedStep() const { return m_failedStep; }
  inline bool FailedStepHasBeenSet() const { return m_failedStepHasBeenSet; }
  template <typename FailedStepT = Aws::String>
  void SetFailedStep(FailedStepT&& value) {
    m_failedStepHasBeenSet = true;
    m_failedStep = std::forward<FailedStepT>(value);
  }
  template <typename FailedStepT = Aws::String>
  ImageFailureContext& WithFailedStep(FailedStepT&& value) {
    SetFailedStep(std::forward<FailedStepT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details about the component that failed, if the failure occurred while a
   * component was running.</p>
   */
  inline const ComponentFailureContext& GetComponentFailure() const { return m_componentFailure; }
  inline bool ComponentFailureHasBeenSet() const { return m_componentFailureHasBeenSet; }
  template <typename ComponentFailureT = ComponentFailureContext>
  void SetComponentFailure(ComponentFailureT&& value) {
    m_componentFailureHasBeenSet = true;
    m_componentFailure = std::forward<ComponentFailureT>(value);
  }
  template <typename ComponentFailureT = ComponentFailureContext>
  ImageFailureContext& WithComponentFailure(ComponentFailureT&& value) {
    SetComponentFailure(std::forward<ComponentFailureT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details about the distribution failure, if the failure occurred while
   * Image Builder distributed or configured the image.</p>
   */
  inline const DistributionFailureContext& GetDistributionFailure() const { return m_distributionFailure; }
  inline bool DistributionFailureHasBeenSet() const { return m_distributionFailureHasBeenSet; }
  template <typename DistributionFailureT = DistributionFailureContext>
  void SetDistributionFailure(DistributionFailureT&& value) {
    m_distributionFailureHasBeenSet = true;
    m_distributionFailure = std::forward<DistributionFailureT>(value);
  }
  template <typename DistributionFailureT = DistributionFailureContext>
  ImageFailureContext& WithDistributionFailure(DistributionFailureT&& value) {
    SetDistributionFailure(std::forward<DistributionFailureT>(value));
    return *this;
  }
  ///@}
 private:
  ImageStatus m_imageStatus{ImageStatus::NOT_SET};

  Aws::String m_workflowExecutionId;

  Aws::String m_workflowArn;

  Aws::String m_stepExecutionId;

  Aws::String m_failedStep;

  ComponentFailureContext m_componentFailure;

  DistributionFailureContext m_distributionFailure;
  bool m_imageStatusHasBeenSet = false;
  bool m_workflowExecutionIdHasBeenSet = false;
  bool m_workflowArnHasBeenSet = false;
  bool m_stepExecutionIdHasBeenSet = false;
  bool m_failedStepHasBeenSet = false;
  bool m_componentFailureHasBeenSet = false;
  bool m_distributionFailureHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
