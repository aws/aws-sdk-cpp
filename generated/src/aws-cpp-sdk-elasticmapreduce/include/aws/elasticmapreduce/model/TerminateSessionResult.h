/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/SessionState.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace EMR {
namespace Model {
/**
 * <p>Output of the <code>TerminateSession</code> operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/TerminateSessionOutput">AWS
 * API Reference</a></p>
 */
class TerminateSessionResult {
 public:
  AWS_EMR_API TerminateSessionResult() = default;
  AWS_EMR_API TerminateSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_EMR_API TerminateSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the cluster that the session belonged to.</p>
   */
  inline const Aws::String& GetClusterId() const { return m_clusterId; }
  template <typename ClusterIdT = Aws::String>
  void SetClusterId(ClusterIdT&& value) {
    m_clusterIdHasBeenSet = true;
    m_clusterId = std::forward<ClusterIdT>(value);
  }
  template <typename ClusterIdT = Aws::String>
  TerminateSessionResult& WithClusterId(ClusterIdT&& value) {
    SetClusterId(std::forward<ClusterIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the terminated session.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  TerminateSessionResult& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the session after the terminate request has been accepted.</p>
   */
  inline SessionState GetState() const { return m_state; }
  inline void SetState(SessionState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline TerminateSessionResult& WithState(SessionState value) {
    SetState(value);
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
  TerminateSessionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_clusterId;

  Aws::String m_sessionId;

  SessionState m_state{SessionState::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_clusterIdHasBeenSet = false;
  bool m_sessionIdHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMR
}  // namespace Aws
