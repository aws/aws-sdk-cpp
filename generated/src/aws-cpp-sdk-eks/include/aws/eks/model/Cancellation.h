/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/CancellationStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EKS {
namespace Model {

/**
 * <p>Contains information about the latest cancellation of an update to an Amazon
 * EKS cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/Cancellation">AWS
 * API Reference</a></p>
 */
class Cancellation {
 public:
  AWS_EKS_API Cancellation() = default;
  AWS_EKS_API Cancellation(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Cancellation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current status of the cancellation. Valid values are
   * <code>InProgress</code>, <code>Failed</code>, and <code>Successful</code>.</p>
   */
  inline CancellationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(CancellationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Cancellation& WithStatus(CancellationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message providing additional details about the cancellation, such as the
   * reason for the cancellation or failure details.</p>
   */
  inline const Aws::String& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = Aws::String>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = Aws::String>
  Cancellation& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}
 private:
  CancellationStatus m_status{CancellationStatus::NOT_SET};

  Aws::String m_reason;
  bool m_statusHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
