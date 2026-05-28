/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/VolumeSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace deadline {
namespace Model {
/**
 * <p>Shared pagination field for List operation outputs (nextToken).</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListVolumesResponse">AWS
 * API Reference</a></p>
 */
class ListVolumesResult {
 public:
  AWS_DEADLINE_API ListVolumesResult() = default;
  AWS_DEADLINE_API ListVolumesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DEADLINE_API ListVolumesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The volumes on the list.</p>
   */
  inline const Aws::Vector<VolumeSummary>& GetVolumes() const { return m_volumes; }
  template <typename VolumesT = Aws::Vector<VolumeSummary>>
  void SetVolumes(VolumesT&& value) {
    m_volumesHasBeenSet = true;
    m_volumes = std::forward<VolumesT>(value);
  }
  template <typename VolumesT = Aws::Vector<VolumeSummary>>
  ListVolumesResult& WithVolumes(VolumesT&& value) {
    SetVolumes(std::forward<VolumesT>(value));
    return *this;
  }
  template <typename VolumesT = VolumeSummary>
  ListVolumesResult& AddVolumes(VolumesT&& value) {
    m_volumesHasBeenSet = true;
    m_volumes.emplace_back(std::forward<VolumesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If Deadline Cloud returns <code>nextToken</code>, then there are more results
   * available. The value of <code>nextToken</code> is a unique pagination token for
   * each page. To retrieve the next page, call the operation again using the
   * returned token. Keep all other arguments unchanged. If no results remain, then
   * <code>nextToken</code> is set to <code>null</code>. Each pagination token
   * expires after 24 hours. If you provide a token that isn't valid, then you
   * receive an HTTP 400 <code>ValidationException</code> error.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListVolumesResult& WithNextToken(NextTokenT&& value) {
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
  ListVolumesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<VolumeSummary> m_volumes;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_volumesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
