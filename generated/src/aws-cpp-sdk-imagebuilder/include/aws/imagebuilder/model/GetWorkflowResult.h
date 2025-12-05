/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/LatestVersionReferences.h>
#include <aws/imagebuilder/model/Workflow.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace imagebuilder {
namespace Model {
class GetWorkflowResult {
 public:
  AWS_IMAGEBUILDER_API GetWorkflowResult() = default;
  AWS_IMAGEBUILDER_API GetWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IMAGEBUILDER_API GetWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The workflow resource specified in the request.</p>
   */
  inline const Workflow& GetWorkflow() const { return m_workflow; }
  template <typename WorkflowT = Workflow>
  void SetWorkflow(WorkflowT&& value) {
    m_workflowHasBeenSet = true;
    m_workflow = std::forward<WorkflowT>(value);
  }
  template <typename WorkflowT = Workflow>
  GetWorkflowResult& WithWorkflow(WorkflowT&& value) {
    SetWorkflow(std::forward<WorkflowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource ARNs with different wildcard variations of semantic
   * versioning.</p>
   */
  inline const LatestVersionReferences& GetLatestVersionReferences() const { return m_latestVersionReferences; }
  template <typename LatestVersionReferencesT = LatestVersionReferences>
  void SetLatestVersionReferences(LatestVersionReferencesT&& value) {
    m_latestVersionReferencesHasBeenSet = true;
    m_latestVersionReferences = std::forward<LatestVersionReferencesT>(value);
  }
  template <typename LatestVersionReferencesT = LatestVersionReferences>
  GetWorkflowResult& WithLatestVersionReferences(LatestVersionReferencesT&& value) {
    SetLatestVersionReferences(std::forward<LatestVersionReferencesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetWorkflowResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Workflow m_workflow;

  LatestVersionReferences m_latestVersionReferences;

  Aws::String m_requestId;
  bool m_workflowHasBeenSet = false;
  bool m_latestVersionReferencesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
