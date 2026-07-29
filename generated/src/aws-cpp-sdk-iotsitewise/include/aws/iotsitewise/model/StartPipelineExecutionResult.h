/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

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
 * <p>Response structure for StartPipelineExecution operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/StartPipelineExecutionResponse">AWS
 * API Reference</a></p>
 */
class StartPipelineExecutionResult {
 public:
  AWS_IOTSITEWISE_API StartPipelineExecutionResult() = default;
  AWS_IOTSITEWISE_API StartPipelineExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOTSITEWISE_API StartPipelineExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the created pipeline execution.</p>
   */
  inline const Aws::String& GetPipelineExecutionId() const { return m_pipelineExecutionId; }
  template <typename PipelineExecutionIdT = Aws::String>
  void SetPipelineExecutionId(PipelineExecutionIdT&& value) {
    m_pipelineExecutionIdHasBeenSet = true;
    m_pipelineExecutionId = std::forward<PipelineExecutionIdT>(value);
  }
  template <typename PipelineExecutionIdT = Aws::String>
  StartPipelineExecutionResult& WithPipelineExecutionId(PipelineExecutionIdT&& value) {
    SetPipelineExecutionId(std::forward<PipelineExecutionIdT>(value));
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
  StartPipelineExecutionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_pipelineExecutionId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_pipelineExecutionIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
