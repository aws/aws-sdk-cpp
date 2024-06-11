/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CisSecurityLevel.h>
#include <aws/inspector2/model/CisFindingStatus.h>
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
   * <p>The CIS scan result details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CisScanResultDetails">AWS
   * API Reference</a></p>
   */
  class CisScanResultDetails
  {
  public:
    AWS_INSPECTOR2_API CisScanResultDetails();
    AWS_INSPECTOR2_API CisScanResultDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisScanResultDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CIS scan result details' account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline CisScanResultDetails& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline CisScanResultDetails& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline CisScanResultDetails& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID that's associated with the CIS scan result details.</p>
     */
    inline const Aws::String& GetCheckDescription() const{ return m_checkDescription; }
    inline bool CheckDescriptionHasBeenSet() const { return m_checkDescriptionHasBeenSet; }
    inline void SetCheckDescription(const Aws::String& value) { m_checkDescriptionHasBeenSet = true; m_checkDescription = value; }
    inline void SetCheckDescription(Aws::String&& value) { m_checkDescriptionHasBeenSet = true; m_checkDescription = std::move(value); }
    inline void SetCheckDescription(const char* value) { m_checkDescriptionHasBeenSet = true; m_checkDescription.assign(value); }
    inline CisScanResultDetails& WithCheckDescription(const Aws::String& value) { SetCheckDescription(value); return *this;}
    inline CisScanResultDetails& WithCheckDescription(Aws::String&& value) { SetCheckDescription(std::move(value)); return *this;}
    inline CisScanResultDetails& WithCheckDescription(const char* value) { SetCheckDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan result details' check ID.</p>
     */
    inline const Aws::String& GetCheckId() const{ return m_checkId; }
    inline bool CheckIdHasBeenSet() const { return m_checkIdHasBeenSet; }
    inline void SetCheckId(const Aws::String& value) { m_checkIdHasBeenSet = true; m_checkId = value; }
    inline void SetCheckId(Aws::String&& value) { m_checkIdHasBeenSet = true; m_checkId = std::move(value); }
    inline void SetCheckId(const char* value) { m_checkIdHasBeenSet = true; m_checkId.assign(value); }
    inline CisScanResultDetails& WithCheckId(const Aws::String& value) { SetCheckId(value); return *this;}
    inline CisScanResultDetails& WithCheckId(Aws::String&& value) { SetCheckId(std::move(value)); return *this;}
    inline CisScanResultDetails& WithCheckId(const char* value) { SetCheckId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan result details' finding ARN.</p>
     */
    inline const Aws::String& GetFindingArn() const{ return m_findingArn; }
    inline bool FindingArnHasBeenSet() const { return m_findingArnHasBeenSet; }
    inline void SetFindingArn(const Aws::String& value) { m_findingArnHasBeenSet = true; m_findingArn = value; }
    inline void SetFindingArn(Aws::String&& value) { m_findingArnHasBeenSet = true; m_findingArn = std::move(value); }
    inline void SetFindingArn(const char* value) { m_findingArnHasBeenSet = true; m_findingArn.assign(value); }
    inline CisScanResultDetails& WithFindingArn(const Aws::String& value) { SetFindingArn(value); return *this;}
    inline CisScanResultDetails& WithFindingArn(Aws::String&& value) { SetFindingArn(std::move(value)); return *this;}
    inline CisScanResultDetails& WithFindingArn(const char* value) { SetFindingArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan result details' level.</p>
     */
    inline const CisSecurityLevel& GetLevel() const{ return m_level; }
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
    inline void SetLevel(const CisSecurityLevel& value) { m_levelHasBeenSet = true; m_level = value; }
    inline void SetLevel(CisSecurityLevel&& value) { m_levelHasBeenSet = true; m_level = std::move(value); }
    inline CisScanResultDetails& WithLevel(const CisSecurityLevel& value) { SetLevel(value); return *this;}
    inline CisScanResultDetails& WithLevel(CisSecurityLevel&& value) { SetLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan result details' platform.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }
    inline CisScanResultDetails& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}
    inline CisScanResultDetails& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}
    inline CisScanResultDetails& WithPlatform(const char* value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan result details' remediation.</p>
     */
    inline const Aws::String& GetRemediation() const{ return m_remediation; }
    inline bool RemediationHasBeenSet() const { return m_remediationHasBeenSet; }
    inline void SetRemediation(const Aws::String& value) { m_remediationHasBeenSet = true; m_remediation = value; }
    inline void SetRemediation(Aws::String&& value) { m_remediationHasBeenSet = true; m_remediation = std::move(value); }
    inline void SetRemediation(const char* value) { m_remediationHasBeenSet = true; m_remediation.assign(value); }
    inline CisScanResultDetails& WithRemediation(const Aws::String& value) { SetRemediation(value); return *this;}
    inline CisScanResultDetails& WithRemediation(Aws::String&& value) { SetRemediation(std::move(value)); return *this;}
    inline CisScanResultDetails& WithRemediation(const char* value) { SetRemediation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan result details' scan ARN.</p>
     */
    inline const Aws::String& GetScanArn() const{ return m_scanArn; }
    inline bool ScanArnHasBeenSet() const { return m_scanArnHasBeenSet; }
    inline void SetScanArn(const Aws::String& value) { m_scanArnHasBeenSet = true; m_scanArn = value; }
    inline void SetScanArn(Aws::String&& value) { m_scanArnHasBeenSet = true; m_scanArn = std::move(value); }
    inline void SetScanArn(const char* value) { m_scanArnHasBeenSet = true; m_scanArn.assign(value); }
    inline CisScanResultDetails& WithScanArn(const Aws::String& value) { SetScanArn(value); return *this;}
    inline CisScanResultDetails& WithScanArn(Aws::String&& value) { SetScanArn(std::move(value)); return *this;}
    inline CisScanResultDetails& WithScanArn(const char* value) { SetScanArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan result details' status.</p>
     */
    inline const CisFindingStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const CisFindingStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(CisFindingStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CisScanResultDetails& WithStatus(const CisFindingStatus& value) { SetStatus(value); return *this;}
    inline CisScanResultDetails& WithStatus(CisFindingStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan result details' status reason.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline CisScanResultDetails& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline CisScanResultDetails& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline CisScanResultDetails& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan result details' target resource ID.</p>
     */
    inline const Aws::String& GetTargetResourceId() const{ return m_targetResourceId; }
    inline bool TargetResourceIdHasBeenSet() const { return m_targetResourceIdHasBeenSet; }
    inline void SetTargetResourceId(const Aws::String& value) { m_targetResourceIdHasBeenSet = true; m_targetResourceId = value; }
    inline void SetTargetResourceId(Aws::String&& value) { m_targetResourceIdHasBeenSet = true; m_targetResourceId = std::move(value); }
    inline void SetTargetResourceId(const char* value) { m_targetResourceIdHasBeenSet = true; m_targetResourceId.assign(value); }
    inline CisScanResultDetails& WithTargetResourceId(const Aws::String& value) { SetTargetResourceId(value); return *this;}
    inline CisScanResultDetails& WithTargetResourceId(Aws::String&& value) { SetTargetResourceId(std::move(value)); return *this;}
    inline CisScanResultDetails& WithTargetResourceId(const char* value) { SetTargetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan result details' title.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline CisScanResultDetails& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline CisScanResultDetails& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline CisScanResultDetails& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_checkDescription;
    bool m_checkDescriptionHasBeenSet = false;

    Aws::String m_checkId;
    bool m_checkIdHasBeenSet = false;

    Aws::String m_findingArn;
    bool m_findingArnHasBeenSet = false;

    CisSecurityLevel m_level;
    bool m_levelHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_remediation;
    bool m_remediationHasBeenSet = false;

    Aws::String m_scanArn;
    bool m_scanArnHasBeenSet = false;

    CisFindingStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_targetResourceId;
    bool m_targetResourceIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
