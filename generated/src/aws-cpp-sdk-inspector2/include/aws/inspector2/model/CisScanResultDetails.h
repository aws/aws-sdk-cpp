/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CisFindingStatus.h>
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
   * <p>The CIS scan result details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CisScanResultDetails">AWS
   * API Reference</a></p>
   */
  class CisScanResultDetails
  {
  public:
    AWS_INSPECTOR2_API CisScanResultDetails() = default;
    AWS_INSPECTOR2_API CisScanResultDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisScanResultDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CIS scan result details' scan ARN.</p>
     */
    inline const Aws::String& GetScanArn() const { return m_scanArn; }
    inline bool ScanArnHasBeenSet() const { return m_scanArnHasBeenSet; }
    template<typename ScanArnT = Aws::String>
    void SetScanArn(ScanArnT&& value) { m_scanArnHasBeenSet = true; m_scanArn = std::forward<ScanArnT>(value); }
    template<typename ScanArnT = Aws::String>
    CisScanResultDetails& WithScanArn(ScanArnT&& value) { SetScanArn(std::forward<ScanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan result details' account ID.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    CisScanResultDetails& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan result details' target resource ID.</p>
     */
    inline const Aws::String& GetTargetResourceId() const { return m_targetResourceId; }
    inline bool TargetResourceIdHasBeenSet() const { return m_targetResourceIdHasBeenSet; }
    template<typename TargetResourceIdT = Aws::String>
    void SetTargetResourceId(TargetResourceIdT&& value) { m_targetResourceIdHasBeenSet = true; m_targetResourceId = std::forward<TargetResourceIdT>(value); }
    template<typename TargetResourceIdT = Aws::String>
    CisScanResultDetails& WithTargetResourceId(TargetResourceIdT&& value) { SetTargetResourceId(std::forward<TargetResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan result details' platform.</p>
     */
    inline const Aws::String& GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    template<typename PlatformT = Aws::String>
    void SetPlatform(PlatformT&& value) { m_platformHasBeenSet = true; m_platform = std::forward<PlatformT>(value); }
    template<typename PlatformT = Aws::String>
    CisScanResultDetails& WithPlatform(PlatformT&& value) { SetPlatform(std::forward<PlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan result details' status.</p>
     */
    inline CisFindingStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CisFindingStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CisScanResultDetails& WithStatus(CisFindingStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan result details' status reason.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    CisScanResultDetails& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan result details' check ID.</p>
     */
    inline const Aws::String& GetCheckId() const { return m_checkId; }
    inline bool CheckIdHasBeenSet() const { return m_checkIdHasBeenSet; }
    template<typename CheckIdT = Aws::String>
    void SetCheckId(CheckIdT&& value) { m_checkIdHasBeenSet = true; m_checkId = std::forward<CheckIdT>(value); }
    template<typename CheckIdT = Aws::String>
    CisScanResultDetails& WithCheckId(CheckIdT&& value) { SetCheckId(std::forward<CheckIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan result details' title.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    CisScanResultDetails& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID that's associated with the CIS scan result details.</p>
     */
    inline const Aws::String& GetCheckDescription() const { return m_checkDescription; }
    inline bool CheckDescriptionHasBeenSet() const { return m_checkDescriptionHasBeenSet; }
    template<typename CheckDescriptionT = Aws::String>
    void SetCheckDescription(CheckDescriptionT&& value) { m_checkDescriptionHasBeenSet = true; m_checkDescription = std::forward<CheckDescriptionT>(value); }
    template<typename CheckDescriptionT = Aws::String>
    CisScanResultDetails& WithCheckDescription(CheckDescriptionT&& value) { SetCheckDescription(std::forward<CheckDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan result details' remediation.</p>
     */
    inline const Aws::String& GetRemediation() const { return m_remediation; }
    inline bool RemediationHasBeenSet() const { return m_remediationHasBeenSet; }
    template<typename RemediationT = Aws::String>
    void SetRemediation(RemediationT&& value) { m_remediationHasBeenSet = true; m_remediation = std::forward<RemediationT>(value); }
    template<typename RemediationT = Aws::String>
    CisScanResultDetails& WithRemediation(RemediationT&& value) { SetRemediation(std::forward<RemediationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan result details' level.</p>
     */
    inline CisSecurityLevel GetLevel() const { return m_level; }
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
    inline void SetLevel(CisSecurityLevel value) { m_levelHasBeenSet = true; m_level = value; }
    inline CisScanResultDetails& WithLevel(CisSecurityLevel value) { SetLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS scan result details' finding ARN.</p>
     */
    inline const Aws::String& GetFindingArn() const { return m_findingArn; }
    inline bool FindingArnHasBeenSet() const { return m_findingArnHasBeenSet; }
    template<typename FindingArnT = Aws::String>
    void SetFindingArn(FindingArnT&& value) { m_findingArnHasBeenSet = true; m_findingArn = std::forward<FindingArnT>(value); }
    template<typename FindingArnT = Aws::String>
    CisScanResultDetails& WithFindingArn(FindingArnT&& value) { SetFindingArn(std::forward<FindingArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scanArn;
    bool m_scanArnHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_targetResourceId;
    bool m_targetResourceIdHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    CisFindingStatus m_status{CisFindingStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_checkId;
    bool m_checkIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_checkDescription;
    bool m_checkDescriptionHasBeenSet = false;

    Aws::String m_remediation;
    bool m_remediationHasBeenSet = false;

    CisSecurityLevel m_level{CisSecurityLevel::NOT_SET};
    bool m_levelHasBeenSet = false;

    Aws::String m_findingArn;
    bool m_findingArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
