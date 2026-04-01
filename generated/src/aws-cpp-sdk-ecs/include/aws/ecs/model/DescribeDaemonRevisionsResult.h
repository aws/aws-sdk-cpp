/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DaemonRevision.h>
#include <aws/ecs/model/Failure.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {
class DescribeDaemonRevisionsResult {
 public:
  AWS_ECS_API DescribeDaemonRevisionsResult() = default;
  AWS_ECS_API DescribeDaemonRevisionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ECS_API DescribeDaemonRevisionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of daemon revisions.</p>
   */
  inline const Aws::Vector<DaemonRevision>& GetDaemonRevisions() const { return m_daemonRevisions; }
  template <typename DaemonRevisionsT = Aws::Vector<DaemonRevision>>
  void SetDaemonRevisions(DaemonRevisionsT&& value) {
    m_daemonRevisionsHasBeenSet = true;
    m_daemonRevisions = std::forward<DaemonRevisionsT>(value);
  }
  template <typename DaemonRevisionsT = Aws::Vector<DaemonRevision>>
  DescribeDaemonRevisionsResult& WithDaemonRevisions(DaemonRevisionsT&& value) {
    SetDaemonRevisions(std::forward<DaemonRevisionsT>(value));
    return *this;
  }
  template <typename DaemonRevisionsT = DaemonRevision>
  DescribeDaemonRevisionsResult& AddDaemonRevisions(DaemonRevisionsT&& value) {
    m_daemonRevisionsHasBeenSet = true;
    m_daemonRevisions.emplace_back(std::forward<DaemonRevisionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Any failures associated with the call.</p>
   */
  inline const Aws::Vector<Failure>& GetFailures() const { return m_failures; }
  template <typename FailuresT = Aws::Vector<Failure>>
  void SetFailures(FailuresT&& value) {
    m_failuresHasBeenSet = true;
    m_failures = std::forward<FailuresT>(value);
  }
  template <typename FailuresT = Aws::Vector<Failure>>
  DescribeDaemonRevisionsResult& WithFailures(FailuresT&& value) {
    SetFailures(std::forward<FailuresT>(value));
    return *this;
  }
  template <typename FailuresT = Failure>
  DescribeDaemonRevisionsResult& AddFailures(FailuresT&& value) {
    m_failuresHasBeenSet = true;
    m_failures.emplace_back(std::forward<FailuresT>(value));
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
  DescribeDaemonRevisionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DaemonRevision> m_daemonRevisions;

  Aws::Vector<Failure> m_failures;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_daemonRevisionsHasBeenSet = false;
  bool m_failuresHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
