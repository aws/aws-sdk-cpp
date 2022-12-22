/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/TrustedAdvisorIntegrationStatus.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>Discovery configuration associated to the workload.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/WorkloadDiscoveryConfig">AWS
   * API Reference</a></p>
   */
  class WorkloadDiscoveryConfig
  {
  public:
    AWS_WELLARCHITECTED_API WorkloadDiscoveryConfig();
    AWS_WELLARCHITECTED_API WorkloadDiscoveryConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API WorkloadDiscoveryConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Discovery integration status in respect to Trusted Advisor for the
     * workload.</p>
     */
    inline const TrustedAdvisorIntegrationStatus& GetTrustedAdvisorIntegrationStatus() const{ return m_trustedAdvisorIntegrationStatus; }

    /**
     * <p>Discovery integration status in respect to Trusted Advisor for the
     * workload.</p>
     */
    inline bool TrustedAdvisorIntegrationStatusHasBeenSet() const { return m_trustedAdvisorIntegrationStatusHasBeenSet; }

    /**
     * <p>Discovery integration status in respect to Trusted Advisor for the
     * workload.</p>
     */
    inline void SetTrustedAdvisorIntegrationStatus(const TrustedAdvisorIntegrationStatus& value) { m_trustedAdvisorIntegrationStatusHasBeenSet = true; m_trustedAdvisorIntegrationStatus = value; }

    /**
     * <p>Discovery integration status in respect to Trusted Advisor for the
     * workload.</p>
     */
    inline void SetTrustedAdvisorIntegrationStatus(TrustedAdvisorIntegrationStatus&& value) { m_trustedAdvisorIntegrationStatusHasBeenSet = true; m_trustedAdvisorIntegrationStatus = std::move(value); }

    /**
     * <p>Discovery integration status in respect to Trusted Advisor for the
     * workload.</p>
     */
    inline WorkloadDiscoveryConfig& WithTrustedAdvisorIntegrationStatus(const TrustedAdvisorIntegrationStatus& value) { SetTrustedAdvisorIntegrationStatus(value); return *this;}

    /**
     * <p>Discovery integration status in respect to Trusted Advisor for the
     * workload.</p>
     */
    inline WorkloadDiscoveryConfig& WithTrustedAdvisorIntegrationStatus(TrustedAdvisorIntegrationStatus&& value) { SetTrustedAdvisorIntegrationStatus(std::move(value)); return *this;}

  private:

    TrustedAdvisorIntegrationStatus m_trustedAdvisorIntegrationStatus;
    bool m_trustedAdvisorIntegrationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
