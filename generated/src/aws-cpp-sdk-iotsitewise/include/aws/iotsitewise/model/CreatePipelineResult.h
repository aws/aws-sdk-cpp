/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ResourceStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {
/**
 * <p>Response structure for CreatePipeline operation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreatePipelineResponse">AWS
 * API Reference</a></p>
 */
class CreatePipelineResult {
 public:
  AWS_IOTSITEWISE_API CreatePipelineResult() = default;
  AWS_IOTSITEWISE_API CreatePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOTSITEWISE_API CreatePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the created pipeline.</p>
   */
  inline const Aws::String& GetPipelineName() const { return m_pipelineName; }
  template <typename PipelineNameT = Aws::String>
  void SetPipelineName(PipelineNameT&& value) {
    m_pipelineNameHasBeenSet = true;
    m_pipelineName = std::forward<PipelineNameT>(value);
  }
  template <typename PipelineNameT = Aws::String>
  CreatePipelineResult& WithPipelineName(PipelineNameT&& value) {
    SetPipelineName(std::forward<PipelineNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the created pipeline.</p>
   */
  inline const Aws::String& GetPipelineArn() const { return m_pipelineArn; }
  template <typename PipelineArnT = Aws::String>
  void SetPipelineArn(PipelineArnT&& value) {
    m_pipelineArnHasBeenSet = true;
    m_pipelineArn = std::forward<PipelineArnT>(value);
  }
  template <typename PipelineArnT = Aws::String>
  CreatePipelineResult& WithPipelineArn(PipelineArnT&& value) {
    SetPipelineArn(std::forward<PipelineArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the newly created pipeline.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  CreatePipelineResult& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current lifecycle status of the pipeline.</p>
   */
  inline const ResourceStatus& GetStatus() const { return m_status; }
  template <typename StatusT = ResourceStatus>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = ResourceStatus>
  CreatePipelineResult& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
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
  CreatePipelineResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_pipelineName;

  Aws::String m_pipelineArn;

  Aws::String m_version;

  ResourceStatus m_status;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_pipelineNameHasBeenSet = false;
  bool m_pipelineArnHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
