/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/DataSegmentRelationshipSummary.h>

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
class ListDatasetDataSegmentRelationshipsResult {
 public:
  AWS_IOTSITEWISE_API ListDatasetDataSegmentRelationshipsResult() = default;
  AWS_IOTSITEWISE_API ListDatasetDataSegmentRelationshipsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOTSITEWISE_API ListDatasetDataSegmentRelationshipsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list that summarizes each data segment relationship.</p>
   */
  inline const Aws::Vector<DataSegmentRelationshipSummary>& GetDataSegmentRelationshipSummaries() const {
    return m_dataSegmentRelationshipSummaries;
  }
  template <typename DataSegmentRelationshipSummariesT = Aws::Vector<DataSegmentRelationshipSummary>>
  void SetDataSegmentRelationshipSummaries(DataSegmentRelationshipSummariesT&& value) {
    m_dataSegmentRelationshipSummariesHasBeenSet = true;
    m_dataSegmentRelationshipSummaries = std::forward<DataSegmentRelationshipSummariesT>(value);
  }
  template <typename DataSegmentRelationshipSummariesT = Aws::Vector<DataSegmentRelationshipSummary>>
  ListDatasetDataSegmentRelationshipsResult& WithDataSegmentRelationshipSummaries(DataSegmentRelationshipSummariesT&& value) {
    SetDataSegmentRelationshipSummaries(std::forward<DataSegmentRelationshipSummariesT>(value));
    return *this;
  }
  template <typename DataSegmentRelationshipSummariesT = DataSegmentRelationshipSummary>
  ListDatasetDataSegmentRelationshipsResult& AddDataSegmentRelationshipSummaries(DataSegmentRelationshipSummariesT&& value) {
    m_dataSegmentRelationshipSummariesHasBeenSet = true;
    m_dataSegmentRelationshipSummaries.emplace_back(std::forward<DataSegmentRelationshipSummariesT>(value));
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
  ListDatasetDataSegmentRelationshipsResult& WithNextToken(NextTokenT&& value) {
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
  ListDatasetDataSegmentRelationshipsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DataSegmentRelationshipSummary> m_dataSegmentRelationshipSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_dataSegmentRelationshipSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
