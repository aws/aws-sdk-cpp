/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/inspector2/model/CisSecurityLevel.h>
#include <aws/inspector2/model/CisScanStatus.h>
#include <aws/inspector2/model/CisTargets.h>
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
    AWS_INSPECTOR2_API CisScan();
    AWS_INSPECTOR2_API CisScan(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisScan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CIS scan's failed checks.</p>
     */
    inline int GetFailedChecks() const{ return m_failedChecks; }
    inline bool FailedChecksHasBeenSet() const { return m_failedChecksHasBeenSet; }
    inline void SetFailedChecks(int value) { m_failedChecksHasBeenSet = true; m_failedChecks = value; }
    inline CisScan& WithFailedChecks(int value) { SetFailedChecks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan's ARN.</p>
     */
    inline const Aws::String& GetScanArn() const{ return m_scanArn; }
    inline bool ScanArnHasBeenSet() const { return m_scanArnHasBeenSet; }
    inline void SetScanArn(const Aws::String& value) { m_scanArnHasBeenSet = true; m_scanArn = value; }
    inline void SetScanArn(Aws::String&& value) { m_scanArnHasBeenSet = true; m_scanArn = std::move(value); }
    inline void SetScanArn(const char* value) { m_scanArnHasBeenSet = true; m_scanArn.assign(value); }
    inline CisScan& WithScanArn(const Aws::String& value) { SetScanArn(value); return *this;}
    inline CisScan& WithScanArn(Aws::String&& value) { SetScanArn(std::move(value)); return *this;}
    inline CisScan& WithScanArn(const char* value) { SetScanArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan's configuration ARN.</p>
     */
    inline const Aws::String& GetScanConfigurationArn() const{ return m_scanConfigurationArn; }
    inline bool ScanConfigurationArnHasBeenSet() const { return m_scanConfigurationArnHasBeenSet; }
    inline void SetScanConfigurationArn(const Aws::String& value) { m_scanConfigurationArnHasBeenSet = true; m_scanConfigurationArn = value; }
    inline void SetScanConfigurationArn(Aws::String&& value) { m_scanConfigurationArnHasBeenSet = true; m_scanConfigurationArn = std::move(value); }
    inline void SetScanConfigurationArn(const char* value) { m_scanConfigurationArnHasBeenSet = true; m_scanConfigurationArn.assign(value); }
    inline CisScan& WithScanConfigurationArn(const Aws::String& value) { SetScanConfigurationArn(value); return *this;}
    inline CisScan& WithScanConfigurationArn(Aws::String&& value) { SetScanConfigurationArn(std::move(value)); return *this;}
    inline CisScan& WithScanConfigurationArn(const char* value) { SetScanConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan's date.</p>
     */
    inline const Aws::Utils::DateTime& GetScanDate() const{ return m_scanDate; }
    inline bool ScanDateHasBeenSet() const { return m_scanDateHasBeenSet; }
    inline void SetScanDate(const Aws::Utils::DateTime& value) { m_scanDateHasBeenSet = true; m_scanDate = value; }
    inline void SetScanDate(Aws::Utils::DateTime&& value) { m_scanDateHasBeenSet = true; m_scanDate = std::move(value); }
    inline CisScan& WithScanDate(const Aws::Utils::DateTime& value) { SetScanDate(value); return *this;}
    inline CisScan& WithScanDate(Aws::Utils::DateTime&& value) { SetScanDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The the name of the scan configuration that's associated with this scan.</p>
     */
    inline const Aws::String& GetScanName() const{ return m_scanName; }
    inline bool ScanNameHasBeenSet() const { return m_scanNameHasBeenSet; }
    inline void SetScanName(const Aws::String& value) { m_scanNameHasBeenSet = true; m_scanName = value; }
    inline void SetScanName(Aws::String&& value) { m_scanNameHasBeenSet = true; m_scanName = std::move(value); }
    inline void SetScanName(const char* value) { m_scanNameHasBeenSet = true; m_scanName.assign(value); }
    inline CisScan& WithScanName(const Aws::String& value) { SetScanName(value); return *this;}
    inline CisScan& WithScanName(Aws::String&& value) { SetScanName(std::move(value)); return *this;}
    inline CisScan& WithScanName(const char* value) { SetScanName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account or organization that schedules the CIS scan.</p>
     */
    inline const Aws::String& GetScheduledBy() const{ return m_scheduledBy; }
    inline bool ScheduledByHasBeenSet() const { return m_scheduledByHasBeenSet; }
    inline void SetScheduledBy(const Aws::String& value) { m_scheduledByHasBeenSet = true; m_scheduledBy = value; }
    inline void SetScheduledBy(Aws::String&& value) { m_scheduledByHasBeenSet = true; m_scheduledBy = std::move(value); }
    inline void SetScheduledBy(const char* value) { m_scheduledByHasBeenSet = true; m_scheduledBy.assign(value); }
    inline CisScan& WithScheduledBy(const Aws::String& value) { SetScheduledBy(value); return *this;}
    inline CisScan& WithScheduledBy(Aws::String&& value) { SetScheduledBy(std::move(value)); return *this;}
    inline CisScan& WithScheduledBy(const char* value) { SetScheduledBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The security level for the CIS scan. Security level refers to the Benchmark
     * levels that CIS assigns to a profile. </p>
     */
    inline const CisSecurityLevel& GetSecurityLevel() const{ return m_securityLevel; }
    inline bool SecurityLevelHasBeenSet() const { return m_securityLevelHasBeenSet; }
    inline void SetSecurityLevel(const CisSecurityLevel& value) { m_securityLevelHasBeenSet = true; m_securityLevel = value; }
    inline void SetSecurityLevel(CisSecurityLevel&& value) { m_securityLevelHasBeenSet = true; m_securityLevel = std::move(value); }
    inline CisScan& WithSecurityLevel(const CisSecurityLevel& value) { SetSecurityLevel(value); return *this;}
    inline CisScan& WithSecurityLevel(CisSecurityLevel&& value) { SetSecurityLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan's status.</p>
     */
    inline const CisScanStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const CisScanStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(CisScanStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CisScan& WithStatus(const CisScanStatus& value) { SetStatus(value); return *this;}
    inline CisScan& WithStatus(CisScanStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan's targets.</p>
     */
    inline const CisTargets& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const CisTargets& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(CisTargets&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline CisScan& WithTargets(const CisTargets& value) { SetTargets(value); return *this;}
    inline CisScan& WithTargets(CisTargets&& value) { SetTargets(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan's total checks.</p>
     */
    inline int GetTotalChecks() const{ return m_totalChecks; }
    inline bool TotalChecksHasBeenSet() const { return m_totalChecksHasBeenSet; }
    inline void SetTotalChecks(int value) { m_totalChecksHasBeenSet = true; m_totalChecks = value; }
    inline CisScan& WithTotalChecks(int value) { SetTotalChecks(value); return *this;}
    ///@}
  private:

    int m_failedChecks;
    bool m_failedChecksHasBeenSet = false;

    Aws::String m_scanArn;
    bool m_scanArnHasBeenSet = false;

    Aws::String m_scanConfigurationArn;
    bool m_scanConfigurationArnHasBeenSet = false;

    Aws::Utils::DateTime m_scanDate;
    bool m_scanDateHasBeenSet = false;

    Aws::String m_scanName;
    bool m_scanNameHasBeenSet = false;

    Aws::String m_scheduledBy;
    bool m_scheduledByHasBeenSet = false;

    CisSecurityLevel m_securityLevel;
    bool m_securityLevelHasBeenSet = false;

    CisScanStatus m_status;
    bool m_statusHasBeenSet = false;

    CisTargets m_targets;
    bool m_targetsHasBeenSet = false;

    int m_totalChecks;
    bool m_totalChecksHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
