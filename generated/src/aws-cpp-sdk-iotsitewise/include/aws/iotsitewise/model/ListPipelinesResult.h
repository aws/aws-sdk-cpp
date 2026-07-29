/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/PipelineSummary.h>

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
 * <p>Response structure for ListPipelines operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListPipelinesResponse">AWS
 * API Reference</a></p>
 */
class ListPipelinesResult {
 public:
  AWS_IOTSITEWISE_API ListPipelinesResult() = default;
  AWS_IOTSITEWISE_API ListPipelinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOTSITEWISE_API ListPipelinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list that summarizes each pipeline in the workspace.</p>
   */
  inline const Aws::Vector<PipelineSummary>& GetPipelineSummaries() const { return m_pipelineSummaries; }
  template <typename PipelineSummariesT = Aws::Vector<PipelineSummary>>
  void SetPipelineSummaries(PipelineSummariesT&& value) {
    m_pipelineSummariesHasBeenSet = true;
    m_pipelineSummaries = std::forward<PipelineSummariesT>(value);
  }
  template <typename PipelineSummariesT = Aws::Vector<PipelineSummary>>
  ListPipelinesResult& WithPipelineSummaries(PipelineSummariesT&& value) {
    SetPipelineSummaries(std::forward<PipelineSummariesT>(value));
    return *this;
  }
  template <typename PipelineSummariesT = PipelineSummary>
  ListPipelinesResult& AddPipelineSummaries(PipelineSummariesT&& value) {
    m_pipelineSummariesHasBeenSet = true;
    m_pipelineSummaries.emplace_back(std::forward<PipelineSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to be used for the next set of paginated results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListPipelinesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListPipelinesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<PipelineSummary> m_pipelineSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_pipelineSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
