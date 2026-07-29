/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/DataSegmentSummary.h>

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
class ListDatasetDataSegmentsResult {
 public:
  AWS_IOTSITEWISE_API ListDatasetDataSegmentsResult() = default;
  AWS_IOTSITEWISE_API ListDatasetDataSegmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOTSITEWISE_API ListDatasetDataSegmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list that summarizes each data segment.</p>
   */
  inline const Aws::Vector<DataSegmentSummary>& GetDataSegments() const { return m_dataSegments; }
  template <typename DataSegmentsT = Aws::Vector<DataSegmentSummary>>
  void SetDataSegments(DataSegmentsT&& value) {
    m_dataSegmentsHasBeenSet = true;
    m_dataSegments = std::forward<DataSegmentsT>(value);
  }
  template <typename DataSegmentsT = Aws::Vector<DataSegmentSummary>>
  ListDatasetDataSegmentsResult& WithDataSegments(DataSegmentsT&& value) {
    SetDataSegments(std::forward<DataSegmentsT>(value));
    return *this;
  }
  template <typename DataSegmentsT = DataSegmentSummary>
  ListDatasetDataSegmentsResult& AddDataSegments(DataSegmentsT&& value) {
    m_dataSegmentsHasBeenSet = true;
    m_dataSegments.emplace_back(std::forward<DataSegmentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results, or null if there are no additional
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDatasetDataSegmentsResult& WithNextToken(NextTokenT&& value) {
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
  ListDatasetDataSegmentsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DataSegmentSummary> m_dataSegments;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_dataSegmentsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
