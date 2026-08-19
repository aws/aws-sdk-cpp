/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/eks/EKS_EXPORTS.h>

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
 * <p>The scheduled events during which Amazon EKS may automatically activate a
 * certificate authority, computed from its validity period. These events help
 * ensure that a cluster's signing certificate authority is rotated before its
 * certificate expires.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CertificateAuthorityScheduledEvents">AWS
 * API Reference</a></p>
 */
class CertificateAuthorityScheduledEvents {
 public:
  AWS_EKS_API CertificateAuthorityScheduledEvents() = default;
  AWS_EKS_API CertificateAuthorityScheduledEvents(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API CertificateAuthorityScheduledEvents& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The earliest Unix epoch timestamp in seconds at which Amazon EKS may
   * automatically activate this certificate authority.</p>
   */
  inline const Aws::Utils::DateTime& GetFirstAutoActivation() const { return m_firstAutoActivation; }
  inline bool FirstAutoActivationHasBeenSet() const { return m_firstAutoActivationHasBeenSet; }
  template <typename FirstAutoActivationT = Aws::Utils::DateTime>
  void SetFirstAutoActivation(FirstAutoActivationT&& value) {
    m_firstAutoActivationHasBeenSet = true;
    m_firstAutoActivation = std::forward<FirstAutoActivationT>(value);
  }
  template <typename FirstAutoActivationT = Aws::Utils::DateTime>
  CertificateAuthorityScheduledEvents& WithFirstAutoActivation(FirstAutoActivationT&& value) {
    SetFirstAutoActivation(std::forward<FirstAutoActivationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix epoch timestamp in seconds by which Amazon EKS will automatically
   * activate this certificate authority if you haven't already activated it.</p>
   */
  inline const Aws::Utils::DateTime& GetFinalAutoActivation() const { return m_finalAutoActivation; }
  inline bool FinalAutoActivationHasBeenSet() const { return m_finalAutoActivationHasBeenSet; }
  template <typename FinalAutoActivationT = Aws::Utils::DateTime>
  void SetFinalAutoActivation(FinalAutoActivationT&& value) {
    m_finalAutoActivationHasBeenSet = true;
    m_finalAutoActivation = std::forward<FinalAutoActivationT>(value);
  }
  template <typename FinalAutoActivationT = Aws::Utils::DateTime>
  CertificateAuthorityScheduledEvents& WithFinalAutoActivation(FinalAutoActivationT&& value) {
    SetFinalAutoActivation(std::forward<FinalAutoActivationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_firstAutoActivation{};

  Aws::Utils::DateTime m_finalAutoActivation{};
  bool m_firstAutoActivationHasBeenSet = false;
  bool m_finalAutoActivationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
