/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/KubernetesUserDetails.h>
#include <aws/guardduty/model/KubernetesWorkloadDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Details about Kubernetes resources such as a Kubernetes user or workload
   * resource involved in a Kubernetes finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/KubernetesDetails">AWS
   * API Reference</a></p>
   */
  class KubernetesDetails
  {
  public:
    AWS_GUARDDUTY_API KubernetesDetails() = default;
    AWS_GUARDDUTY_API KubernetesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API KubernetesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about the Kubernetes user involved in a Kubernetes finding.</p>
     */
    inline const KubernetesUserDetails& GetKubernetesUserDetails() const { return m_kubernetesUserDetails; }
    inline bool KubernetesUserDetailsHasBeenSet() const { return m_kubernetesUserDetailsHasBeenSet; }
    template<typename KubernetesUserDetailsT = KubernetesUserDetails>
    void SetKubernetesUserDetails(KubernetesUserDetailsT&& value) { m_kubernetesUserDetailsHasBeenSet = true; m_kubernetesUserDetails = std::forward<KubernetesUserDetailsT>(value); }
    template<typename KubernetesUserDetailsT = KubernetesUserDetails>
    KubernetesDetails& WithKubernetesUserDetails(KubernetesUserDetailsT&& value) { SetKubernetesUserDetails(std::forward<KubernetesUserDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the Kubernetes workload involved in a Kubernetes finding.</p>
     */
    inline const KubernetesWorkloadDetails& GetKubernetesWorkloadDetails() const { return m_kubernetesWorkloadDetails; }
    inline bool KubernetesWorkloadDetailsHasBeenSet() const { return m_kubernetesWorkloadDetailsHasBeenSet; }
    template<typename KubernetesWorkloadDetailsT = KubernetesWorkloadDetails>
    void SetKubernetesWorkloadDetails(KubernetesWorkloadDetailsT&& value) { m_kubernetesWorkloadDetailsHasBeenSet = true; m_kubernetesWorkloadDetails = std::forward<KubernetesWorkloadDetailsT>(value); }
    template<typename KubernetesWorkloadDetailsT = KubernetesWorkloadDetails>
    KubernetesDetails& WithKubernetesWorkloadDetails(KubernetesWorkloadDetailsT&& value) { SetKubernetesWorkloadDetails(std::forward<KubernetesWorkloadDetailsT>(value)); return *this;}
    ///@}
  private:

    KubernetesUserDetails m_kubernetesUserDetails;
    bool m_kubernetesUserDetailsHasBeenSet = false;

    KubernetesWorkloadDetails m_kubernetesWorkloadDetails;
    bool m_kubernetesWorkloadDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
