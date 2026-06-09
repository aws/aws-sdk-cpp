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
 * <p>Output of the <code>StartSession</code> operation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StartSessionOutput">AWS
 * API Reference</a></p>
 */
class StartSessionResult {
 public:
  AWS_EMR_API StartSessionResult() = default;
  AWS_EMR_API StartSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_EMR_API StartSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The output contains the ID of the session.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  StartSessionResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the cluster that the session was started on.</p>
   */
  inline const Aws::String& GetClusterId() const { return m_clusterId; }
  template <typename ClusterIdT = Aws::String>
  void SetClusterId(ClusterIdT&& value) {
    m_clusterIdHasBeenSet = true;
    m_clusterId = std::forward<ClusterIdT>(value);
  }
  template <typename ClusterIdT = Aws::String>
  StartSessionResult& WithClusterId(ClusterIdT&& value) {
    SetClusterId(std::forward<ClusterIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output contains the ARN of the session.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  StartSessionResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID that owns the session.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  StartSessionResult& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the session at the time the request returned. When a session is
   * first created, it enters the <code>SUBMITTED</code> state.</p>
   */
  inline SessionState GetState() const { return m_state; }
  inline void SetState(SessionState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline StartSessionResult& WithState(SessionState value) {
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
  StartSessionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_id;

  Aws::String m_clusterId;

  Aws::String m_arn;

  Aws::String m_accountId;

  SessionState m_state{SessionState::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_idHasBeenSet = false;
  bool m_clusterIdHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMR
}  // namespace Aws
