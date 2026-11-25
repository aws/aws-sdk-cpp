/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>
#include <aws/elb-proxy/model/ProxyUpdateDetails.h>
#include <aws/elb-proxy/model/ProxyUpdateState.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ELBProxy {
namespace Model {
class GetProxyUpdateResult {
 public:
  AWS_ELBPROXY_API GetProxyUpdateResult() = default;
  AWS_ELBPROXY_API GetProxyUpdateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_ELBPROXY_API GetProxyUpdateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the proxy.</p>
   */
  inline const Aws::String& GetProxyArn() const { return m_proxyArn; }
  template <typename ProxyArnT = Aws::String>
  void SetProxyArn(ProxyArnT&& value) {
    m_proxyArnHasBeenSet = true;
    m_proxyArn = std::forward<ProxyArnT>(value);
  }
  template <typename ProxyArnT = Aws::String>
  GetProxyUpdateResult& WithProxyArn(ProxyArnT&& value) {
    SetProxyArn(std::forward<ProxyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the update.</p>
   */
  inline const Aws::String& GetUpdateId() const { return m_updateId; }
  template <typename UpdateIdT = Aws::String>
  void SetUpdateId(UpdateIdT&& value) {
    m_updateIdHasBeenSet = true;
    m_updateId = std::forward<UpdateIdT>(value);
  }
  template <typename UpdateIdT = Aws::String>
  GetProxyUpdateResult& WithUpdateId(UpdateIdT&& value) {
    SetUpdateId(std::forward<UpdateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the update.</p>
   */
  inline const ProxyUpdateState& GetState() const { return m_state; }
  template <typename StateT = ProxyUpdateState>
  void SetState(StateT&& value) {
    m_stateHasBeenSet = true;
    m_state = std::forward<StateT>(value);
  }
  template <typename StateT = ProxyUpdateState>
  GetProxyUpdateResult& WithState(StateT&& value) {
    SetState(std::forward<StateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the update.</p>
   */
  inline const ProxyUpdateDetails& GetDetails() const { return m_details; }
  template <typename DetailsT = ProxyUpdateDetails>
  void SetDetails(DetailsT&& value) {
    m_detailsHasBeenSet = true;
    m_details = std::forward<DetailsT>(value);
  }
  template <typename DetailsT = ProxyUpdateDetails>
  GetProxyUpdateResult& WithDetails(DetailsT&& value) {
    SetDetails(std::forward<DetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the update was submitted.</p>
   */
  inline const Aws::Utils::DateTime& GetSubmittedAt() const { return m_submittedAt; }
  template <typename SubmittedAtT = Aws::Utils::DateTime>
  void SetSubmittedAt(SubmittedAtT&& value) {
    m_submittedAtHasBeenSet = true;
    m_submittedAt = std::forward<SubmittedAtT>(value);
  }
  template <typename SubmittedAtT = Aws::Utils::DateTime>
  GetProxyUpdateResult& WithSubmittedAt(SubmittedAtT&& value) {
    SetSubmittedAt(std::forward<SubmittedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the update was first successfully applied to a proxy
   * node. This value is absent until the update is valid.</p>
   */
  inline const Aws::Utils::DateTime& GetValidatedAt() const { return m_validatedAt; }
  template <typename ValidatedAtT = Aws::Utils::DateTime>
  void SetValidatedAt(ValidatedAtT&& value) {
    m_validatedAtHasBeenSet = true;
    m_validatedAt = std::forward<ValidatedAtT>(value);
  }
  template <typename ValidatedAtT = Aws::Utils::DateTime>
  GetProxyUpdateResult& WithValidatedAt(ValidatedAtT&& value) {
    SetValidatedAt(std::forward<ValidatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the update's propagation status became
   * <code>complete</code>, <code>failed</code>, or <code>cancelled</code>. This
   * value is absent while the update is <code>in-progress</code> or
   * <code>skipped</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  void SetCompletedAt(CompletedAtT&& value) {
    m_completedAtHasBeenSet = true;
    m_completedAt = std::forward<CompletedAtT>(value);
  }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  GetProxyUpdateResult& WithCompletedAt(CompletedAtT&& value) {
    SetCompletedAt(std::forward<CompletedAtT>(value));
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
  GetProxyUpdateResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_proxyArn;

  Aws::String m_updateId;

  ProxyUpdateState m_state;

  ProxyUpdateDetails m_details;

  Aws::Utils::DateTime m_submittedAt{};

  Aws::Utils::DateTime m_validatedAt{};

  Aws::Utils::DateTime m_completedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_proxyArnHasBeenSet = false;
  bool m_updateIdHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_detailsHasBeenSet = false;
  bool m_submittedAtHasBeenSet = false;
  bool m_validatedAtHasBeenSet = false;
  bool m_completedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
