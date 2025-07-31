/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CisScanStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/inspector2/model/CisTargets.h>
#include <aws/inspector2/model/CisSecurityLevel.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The CIS scan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CisScan">AWS
   * API Reference</a></p>
   */
  class CisScan
  {
  public:
    AWS_INSPECTOR2_API CisScan() = default;
    AWS_INSPECTOR2_API CisScan(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisScan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CIS scan's ARN.</p>
     */
    inline const Aws::String& GetScanArn() const { return m_scanArn; }
    inline bool ScanArnHasBeenSet() const { return m_scanArnHasBeenSet; }
    template<typename ScanArnT = Aws::String>
    void SetScanArn(ScanArnT&& value) { m_scanArnHasBeenSet = true; m_scanArn = std::forward<ScanArnT>(value); }
    template<typename ScanArnT = Aws::String>
    CisScan& WithScanArn(ScanArnT&& value) { SetScanArn(std::forward<ScanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan's configuration ARN.</p>
     */
    inline const Aws::String& GetScanConfigurationArn() const { return m_scanConfigurationArn; }
    inline bool ScanConfigurationArnHasBeenSet() const { return m_scanConfigurationArnHasBeenSet; }
    template<typename ScanConfigurationArnT = Aws::String>
    void SetScanConfigurationArn(ScanConfigurationArnT&& value) { m_scanConfigurationArnHasBeenSet = true; m_scanConfigurationArn = std::forward<ScanConfigurationArnT>(value); }
    template<typename ScanConfigurationArnT = Aws::String>
    CisScan& WithScanConfigurationArn(ScanConfigurationArnT&& value) { SetScanConfigurationArn(std::forward<ScanConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan's status.</p>
     */
    inline CisScanStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CisScanStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CisScan& WithStatus(CisScanStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The the name of the scan configuration that's associated with this scan.</p>
     */
    inline const Aws::String& GetScanName() const { return m_scanName; }
    inline bool ScanNameHasBeenSet() const { return m_scanNameHasBeenSet; }
    template<typename ScanNameT = Aws::String>
    void SetScanName(ScanNameT&& value) { m_scanNameHasBeenSet = true; m_scanName = std::forward<ScanNameT>(value); }
    template<typename ScanNameT = Aws::String>
    CisScan& WithScanName(ScanNameT&& value) { SetScanName(std::forward<ScanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan's date.</p>
     */
    inline const Aws::Utils::DateTime& GetScanDate() const { return m_scanDate; }
    inline bool ScanDateHasBeenSet() const { return m_scanDateHasBeenSet; }
    template<typename ScanDateT = Aws::Utils::DateTime>
    void SetScanDate(ScanDateT&& value) { m_scanDateHasBeenSet = true; m_scanDate = std::forward<ScanDateT>(value); }
    template<typename ScanDateT = Aws::Utils::DateTime>
    CisScan& WithScanDate(ScanDateT&& value) { SetScanDate(std::forward<ScanDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan's failed checks.</p>
     */
    inline int GetFailedChecks() const { return m_failedChecks; }
    inline bool FailedChecksHasBeenSet() const { return m_failedChecksHasBeenSet; }
    inline void SetFailedChecks(int value) { m_failedChecksHasBeenSet = true; m_failedChecks = value; }
    inline CisScan& WithFailedChecks(int value) { SetFailedChecks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan's total checks.</p>
     */
    inline int GetTotalChecks() const { return m_totalChecks; }
    inline bool TotalChecksHasBeenSet() const { return m_totalChecksHasBeenSet; }
    inline void SetTotalChecks(int value) { m_totalChecksHasBeenSet = true; m_totalChecks = value; }
    inline CisScan& WithTotalChecks(int value) { SetTotalChecks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan's targets.</p>
     */
    inline const CisTargets& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = CisTargets>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = CisTargets>
    CisScan& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account or organization that schedules the CIS scan.</p>
     */
    inline const Aws::String& GetScheduledBy() const { return m_scheduledBy; }
    inline bool ScheduledByHasBeenSet() const { return m_scheduledByHasBeenSet; }
    template<typename ScheduledByT = Aws::String>
    void SetScheduledBy(ScheduledByT&& value) { m_scheduledByHasBeenSet = true; m_scheduledBy = std::forward<ScheduledByT>(value); }
    template<typename ScheduledByT = Aws::String>
    CisScan& WithScheduledBy(ScheduledByT&& value) { SetScheduledBy(std::forward<ScheduledByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The security level for the CIS scan. Security level refers to the Benchmark
     * levels that CIS assigns to a profile. </p>
     */
    inline CisSecurityLevel GetSecurityLevel() const { return m_securityLevel; }
    inline bool SecurityLevelHasBeenSet() const { return m_securityLevelHasBeenSet; }
    inline void SetSecurityLevel(CisSecurityLevel value) { m_securityLevelHasBeenSet = true; m_securityLevel = value; }
    inline CisScan& WithSecurityLevel(CisSecurityLevel value) { SetSecurityLevel(value); return *this;}
    ///@}
  private:

    Aws::String m_scanArn;
    bool m_scanArnHasBeenSet = false;

    Aws::String m_scanConfigurationArn;
    bool m_scanConfigurationArnHasBeenSet = false;

    CisScanStatus m_status{CisScanStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_scanName;
    bool m_scanNameHasBeenSet = false;

    Aws::Utils::DateTime m_scanDate{};
    bool m_scanDateHasBeenSet = false;

    int m_failedChecks{0};
    bool m_failedChecksHasBeenSet = false;

    int m_totalChecks{0};
    bool m_totalChecksHasBeenSet = false;

    CisTargets m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::String m_scheduledBy;
    bool m_scheduledByHasBeenSet = false;

    CisSecurityLevel m_securityLevel{CisSecurityLevel::NOT_SET};
    bool m_securityLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
