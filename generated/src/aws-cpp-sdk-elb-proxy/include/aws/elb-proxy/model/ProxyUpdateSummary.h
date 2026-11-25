/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>
#include <aws/elb-proxy/model/ProxyUpdatePropagationStatus.h>
#include <aws/elb-proxy/model/ProxyUpdateType.h>
#include <aws/elb-proxy/model/ProxyUpdateValidationStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ELBProxy {
namespace Model {

/**
 * <p>Summary information about a proxy update.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/ProxyUpdateSummary">AWS
 * API Reference</a></p>
 */
class ProxyUpdateSummary {
 public:
  AWS_ELBPROXY_API ProxyUpdateSummary() = default;
  AWS_ELBPROXY_API ProxyUpdateSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API ProxyUpdateSummary& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The ID of the update.</p>
   */
  inline const Aws::String& GetUpdateId() const { return m_updateId; }
  inline bool UpdateIdHasBeenSet() const { return m_updateIdHasBeenSet; }
  template <typename UpdateIdT = Aws::String>
  void SetUpdateId(UpdateIdT&& value) {
    m_updateIdHasBeenSet = true;
    m_updateId = std::forward<UpdateIdT>(value);
  }
  template <typename UpdateIdT = Aws::String>
  ProxyUpdateSummary& WithUpdateId(UpdateIdT&& value) {
    SetUpdateId(std::forward<UpdateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the update.</p>
   */
  inline ProxyUpdateType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ProxyUpdateType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ProxyUpdateSummary& WithType(ProxyUpdateType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the configuration submitted with the update works.</p>
   */
  inline ProxyUpdateValidationStatus GetValidationStatus() const { return m_validationStatus; }
  inline bool ValidationStatusHasBeenSet() const { return m_validationStatusHasBeenSet; }
  inline void SetValidationStatus(ProxyUpdateValidationStatus value) {
    m_validationStatusHasBeenSet = true;
    m_validationStatus = value;
  }
  inline ProxyUpdateSummary& WithValidationStatus(ProxyUpdateValidationStatus value) {
    SetValidationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the configuration submitted with the update was applied to all proxy
   * nodes.</p>
   */
  inline ProxyUpdatePropagationStatus GetPropagationStatus() const { return m_propagationStatus; }
  inline bool PropagationStatusHasBeenSet() const { return m_propagationStatusHasBeenSet; }
  inline void SetPropagationStatus(ProxyUpdatePropagationStatus value) {
    m_propagationStatusHasBeenSet = true;
    m_propagationStatus = value;
  }
  inline ProxyUpdateSummary& WithPropagationStatus(ProxyUpdatePropagationStatus value) {
    SetPropagationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the update was submitted.</p>
   */
  inline const Aws::Utils::DateTime& GetSubmittedAt() const { return m_submittedAt; }
  inline bool SubmittedAtHasBeenSet() const { return m_submittedAtHasBeenSet; }
  template <typename SubmittedAtT = Aws::Utils::DateTime>
  void SetSubmittedAt(SubmittedAtT&& value) {
    m_submittedAtHasBeenSet = true;
    m_submittedAt = std::forward<SubmittedAtT>(value);
  }
  template <typename SubmittedAtT = Aws::Utils::DateTime>
  ProxyUpdateSummary& WithSubmittedAt(SubmittedAtT&& value) {
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
  inline bool ValidatedAtHasBeenSet() const { return m_validatedAtHasBeenSet; }
  template <typename ValidatedAtT = Aws::Utils::DateTime>
  void SetValidatedAt(ValidatedAtT&& value) {
    m_validatedAtHasBeenSet = true;
    m_validatedAt = std::forward<ValidatedAtT>(value);
  }
  template <typename ValidatedAtT = Aws::Utils::DateTime>
  ProxyUpdateSummary& WithValidatedAt(ValidatedAtT&& value) {
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
  inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  void SetCompletedAt(CompletedAtT&& value) {
    m_completedAtHasBeenSet = true;
    m_completedAt = std::forward<CompletedAtT>(value);
  }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  ProxyUpdateSummary& WithCompletedAt(CompletedAtT&& value) {
    SetCompletedAt(std::forward<CompletedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_updateId;

  ProxyUpdateType m_type{ProxyUpdateType::NOT_SET};

  ProxyUpdateValidationStatus m_validationStatus{ProxyUpdateValidationStatus::NOT_SET};

  ProxyUpdatePropagationStatus m_propagationStatus{ProxyUpdatePropagationStatus::NOT_SET};

  Aws::Utils::DateTime m_submittedAt{};

  Aws::Utils::DateTime m_validatedAt{};

  Aws::Utils::DateTime m_completedAt{};
  bool m_updateIdHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_validationStatusHasBeenSet = false;
  bool m_propagationStatusHasBeenSet = false;
  bool m_submittedAtHasBeenSet = false;
  bool m_validatedAtHasBeenSet = false;
  bool m_completedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
