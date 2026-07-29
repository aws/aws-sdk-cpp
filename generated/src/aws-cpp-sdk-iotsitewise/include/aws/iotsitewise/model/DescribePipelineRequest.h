/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Request structure for DescribePipeline operation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribePipelineRequest">AWS
 * API Reference</a></p>
 */
class DescribePipelineRequest : public IoTSiteWiseRequest {
 public:
  AWS_IOTSITEWISE_API DescribePipelineRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribePipeline"; }

  AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

  AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The name of the workspace.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  DescribePipelineRequest& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the pipeline.</p>
   */
  inline const Aws::String& GetPipelineName() const { return m_pipelineName; }
  inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
  template <typename PipelineNameT = Aws::String>
  void SetPipelineName(PipelineNameT&& value) {
    m_pipelineNameHasBeenSet = true;
    m_pipelineName = std::forward<PipelineNameT>(value);
  }
  template <typename PipelineNameT = Aws::String>
  DescribePipelineRequest& WithPipelineName(PipelineNameT&& value) {
    SetPipelineName(std::forward<PipelineNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version number of the pipeline to retrieve. If not specified, returns the
   * latest version.</p>
   */
  inline const Aws::String& GetPipelineVersion() const { return m_pipelineVersion; }
  inline bool PipelineVersionHasBeenSet() const { return m_pipelineVersionHasBeenSet; }
  template <typename PipelineVersionT = Aws::String>
  void SetPipelineVersion(PipelineVersionT&& value) {
    m_pipelineVersionHasBeenSet = true;
    m_pipelineVersion = std::forward<PipelineVersionT>(value);
  }
  template <typename PipelineVersionT = Aws::String>
  DescribePipelineRequest& WithPipelineVersion(PipelineVersionT&& value) {
    SetPipelineVersion(std::forward<PipelineVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workspaceName;

  Aws::String m_pipelineName;

  Aws::String m_pipelineVersion;
  bool m_workspaceNameHasBeenSet = false;
  bool m_pipelineNameHasBeenSet = false;
  bool m_pipelineVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
