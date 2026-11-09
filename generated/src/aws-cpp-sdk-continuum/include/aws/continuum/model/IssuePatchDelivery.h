/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/DeliveryReason.h>
#include <aws/continuum/model/IssuePatchDeliveryStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {

/**
 * <p>Customer delivery of the patches Continuum produced for an issue, summarized
 * across the issue's PATCH artifacts when the issue is read. Each artifact keeps
 * its own <code>delivery.destination</code> with the full detail; this summary
 * lets a caller see a failed delivery without listing artifacts.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/IssuePatchDelivery">AWS
 * API Reference</a></p>
 */
class IssuePatchDelivery {
 public:
  AWS_CONTINUUM_API IssuePatchDelivery() = default;
  AWS_CONTINUUM_API IssuePatchDelivery(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API IssuePatchDelivery& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The overall result, in priority order: FAILED when any patch's destination
   * delivery failed or exhausted its retries; otherwise PENDING while any is still
   * in progress; otherwise SUCCEEDED when at least one was delivered; otherwise
   * SKIPPED.</p>
   */
  inline IssuePatchDeliveryStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(IssuePatchDeliveryStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline IssuePatchDelivery& WithStatus(IssuePatchDeliveryStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of the issue's patches that have a destination delivery.</p>
   */
  inline int GetPatchCount() const { return m_patchCount; }
  inline bool PatchCountHasBeenSet() const { return m_patchCountHasBeenSet; }
  inline void SetPatchCount(int value) {
    m_patchCountHasBeenSet = true;
    m_patchCount = value;
  }
  inline IssuePatchDelivery& WithPatchCount(int value) {
    SetPatchCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of those patches delivered to their destination.</p>
   */
  inline int GetSucceededCount() const { return m_succeededCount; }
  inline bool SucceededCountHasBeenSet() const { return m_succeededCountHasBeenSet; }
  inline void SetSucceededCount(int value) {
    m_succeededCountHasBeenSet = true;
    m_succeededCount = value;
  }
  inline IssuePatchDelivery& WithSucceededCount(int value) {
    SetSucceededCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of those patches whose delivery failed or exhausted its retries.</p>
   */
  inline int GetFailedCount() const { return m_failedCount; }
  inline bool FailedCountHasBeenSet() const { return m_failedCountHasBeenSet; }
  inline void SetFailedCount(int value) {
    m_failedCountHasBeenSet = true;
    m_failedCount = value;
  }
  inline IssuePatchDelivery& WithFailedCount(int value) {
    SetFailedCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Distinct reasons of the failed deliveries, in ascending order. Present only
   * when failedCount is greater than zero.</p>
   */
  inline const Aws::Vector<DeliveryReason>& GetFailureReasons() const { return m_failureReasons; }
  inline bool FailureReasonsHasBeenSet() const { return m_failureReasonsHasBeenSet; }
  template <typename FailureReasonsT = Aws::Vector<DeliveryReason>>
  void SetFailureReasons(FailureReasonsT&& value) {
    m_failureReasonsHasBeenSet = true;
    m_failureReasons = std::forward<FailureReasonsT>(value);
  }
  template <typename FailureReasonsT = Aws::Vector<DeliveryReason>>
  IssuePatchDelivery& WithFailureReasons(FailureReasonsT&& value) {
    SetFailureReasons(std::forward<FailureReasonsT>(value));
    return *this;
  }
  inline IssuePatchDelivery& AddFailureReasons(DeliveryReason value) {
    m_failureReasonsHasBeenSet = true;
    m_failureReasons.push_back(value);
    return *this;
  }
  ///@}
 private:
  IssuePatchDeliveryStatus m_status{IssuePatchDeliveryStatus::NOT_SET};

  int m_patchCount{0};

  int m_succeededCount{0};

  int m_failedCount{0};

  Aws::Vector<DeliveryReason> m_failureReasons;
  bool m_statusHasBeenSet = false;
  bool m_patchCountHasBeenSet = false;
  bool m_succeededCountHasBeenSet = false;
  bool m_failedCountHasBeenSet = false;
  bool m_failureReasonsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
