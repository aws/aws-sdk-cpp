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


    /**
     * <p>The CIS scan result details' account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The CIS scan result details' account ID.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The CIS scan result details' account ID.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The CIS scan result details' account ID.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The CIS scan result details' account ID.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The CIS scan result details' account ID.</p>
     */
    inline CisScanResultDetails& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The CIS scan result details' account ID.</p>
     */
    inline CisScanResultDetails& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The CIS scan result details' account ID.</p>
     */
    inline CisScanResultDetails& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The account ID that's associated with the CIS scan result details.</p>
     */
    inline const Aws::String& GetCheckDescription() const{ return m_checkDescription; }

    /**
     * <p>The account ID that's associated with the CIS scan result details.</p>
     */
    inline bool CheckDescriptionHasBeenSet() const { return m_checkDescriptionHasBeenSet; }

    /**
     * <p>The account ID that's associated with the CIS scan result details.</p>
     */
    inline void SetCheckDescription(const Aws::String& value) { m_checkDescriptionHasBeenSet = true; m_checkDescription = value; }

    /**
     * <p>The account ID that's associated with the CIS scan result details.</p>
     */
    inline void SetCheckDescription(Aws::String&& value) { m_checkDescriptionHasBeenSet = true; m_checkDescription = std::move(value); }

    /**
     * <p>The account ID that's associated with the CIS scan result details.</p>
     */
    inline void SetCheckDescription(const char* value) { m_checkDescriptionHasBeenSet = true; m_checkDescription.assign(value); }

    /**
     * <p>The account ID that's associated with the CIS scan result details.</p>
     */
    inline CisScanResultDetails& WithCheckDescription(const Aws::String& value) { SetCheckDescription(value); return *this;}

    /**
     * <p>The account ID that's associated with the CIS scan result details.</p>
     */
    inline CisScanResultDetails& WithCheckDescription(Aws::String&& value) { SetCheckDescription(std::move(value)); return *this;}

    /**
     * <p>The account ID that's associated with the CIS scan result details.</p>
     */
    inline CisScanResultDetails& WithCheckDescription(const char* value) { SetCheckDescription(value); return *this;}


    /**
     * <p>The CIS scan result details' check ID.</p>
     */
    inline const Aws::String& GetCheckId() const{ return m_checkId; }

    /**
     * <p>The CIS scan result details' check ID.</p>
     */
    inline bool CheckIdHasBeenSet() const { return m_checkIdHasBeenSet; }

    /**
     * <p>The CIS scan result details' check ID.</p>
     */
    inline void SetCheckId(const Aws::String& value) { m_checkIdHasBeenSet = true; m_checkId = value; }

    /**
     * <p>The CIS scan result details' check ID.</p>
     */
    inline void SetCheckId(Aws::String&& value) { m_checkIdHasBeenSet = true; m_checkId = std::move(value); }

    /**
     * <p>The CIS scan result details' check ID.</p>
     */
    inline void SetCheckId(const char* value) { m_checkIdHasBeenSet = true; m_checkId.assign(value); }

    /**
     * <p>The CIS scan result details' check ID.</p>
     */
    inline CisScanResultDetails& WithCheckId(const Aws::String& value) { SetCheckId(value); return *this;}

    /**
     * <p>The CIS scan result details' check ID.</p>
     */
    inline CisScanResultDetails& WithCheckId(Aws::String&& value) { SetCheckId(std::move(value)); return *this;}

    /**
     * <p>The CIS scan result details' check ID.</p>
     */
    inline CisScanResultDetails& WithCheckId(const char* value) { SetCheckId(value); return *this;}


    /**
     * <p>The CIS scan result details' finding ARN.</p>
     */
    inline const Aws::String& GetFindingArn() const{ return m_findingArn; }

    /**
     * <p>The CIS scan result details' finding ARN.</p>
     */
    inline bool FindingArnHasBeenSet() const { return m_findingArnHasBeenSet; }

    /**
     * <p>The CIS scan result details' finding ARN.</p>
     */
    inline void SetFindingArn(const Aws::String& value) { m_findingArnHasBeenSet = true; m_findingArn = value; }

    /**
     * <p>The CIS scan result details' finding ARN.</p>
     */
    inline void SetFindingArn(Aws::String&& value) { m_findingArnHasBeenSet = true; m_findingArn = std::move(value); }

    /**
     * <p>The CIS scan result details' finding ARN.</p>
     */
    inline void SetFindingArn(const char* value) { m_findingArnHasBeenSet = true; m_findingArn.assign(value); }

    /**
     * <p>The CIS scan result details' finding ARN.</p>
     */
    inline CisScanResultDetails& WithFindingArn(const Aws::String& value) { SetFindingArn(value); return *this;}

    /**
     * <p>The CIS scan result details' finding ARN.</p>
     */
    inline CisScanResultDetails& WithFindingArn(Aws::String&& value) { SetFindingArn(std::move(value)); return *this;}

    /**
     * <p>The CIS scan result details' finding ARN.</p>
     */
    inline CisScanResultDetails& WithFindingArn(const char* value) { SetFindingArn(value); return *this;}


    /**
     * <p>The CIS scan result details' level.</p>
     */
    inline const CisSecurityLevel& GetLevel() const{ return m_level; }

    /**
     * <p>The CIS scan result details' level.</p>
     */
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }

    /**
     * <p>The CIS scan result details' level.</p>
     */
    inline void SetLevel(const CisSecurityLevel& value) { m_levelHasBeenSet = true; m_level = value; }

    /**
     * <p>The CIS scan result details' level.</p>
     */
    inline void SetLevel(CisSecurityLevel&& value) { m_levelHasBeenSet = true; m_level = std::move(value); }

    /**
     * <p>The CIS scan result details' level.</p>
     */
    inline CisScanResultDetails& WithLevel(const CisSecurityLevel& value) { SetLevel(value); return *this;}

    /**
     * <p>The CIS scan result details' level.</p>
     */
    inline CisScanResultDetails& WithLevel(CisSecurityLevel&& value) { SetLevel(std::move(value)); return *this;}


    /**
     * <p>The CIS scan result details' platform.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * <p>The CIS scan result details' platform.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The CIS scan result details' platform.</p>
     */
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The CIS scan result details' platform.</p>
     */
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The CIS scan result details' platform.</p>
     */
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }

    /**
     * <p>The CIS scan result details' platform.</p>
     */
    inline CisScanResultDetails& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * <p>The CIS scan result details' platform.</p>
     */
    inline CisScanResultDetails& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * <p>The CIS scan result details' platform.</p>
     */
    inline CisScanResultDetails& WithPlatform(const char* value) { SetPlatform(value); return *this;}


    /**
     * <p>The CIS scan result details' remediation.</p>
     */
    inline const Aws::String& GetRemediation() const{ return m_remediation; }

    /**
     * <p>The CIS scan result details' remediation.</p>
     */
    inline bool RemediationHasBeenSet() const { return m_remediationHasBeenSet; }

    /**
     * <p>The CIS scan result details' remediation.</p>
     */
    inline void SetRemediation(const Aws::String& value) { m_remediationHasBeenSet = true; m_remediation = value; }

    /**
     * <p>The CIS scan result details' remediation.</p>
     */
    inline void SetRemediation(Aws::String&& value) { m_remediationHasBeenSet = true; m_remediation = std::move(value); }

    /**
     * <p>The CIS scan result details' remediation.</p>
     */
    inline void SetRemediation(const char* value) { m_remediationHasBeenSet = true; m_remediation.assign(value); }

    /**
     * <p>The CIS scan result details' remediation.</p>
     */
    inline CisScanResultDetails& WithRemediation(const Aws::String& value) { SetRemediation(value); return *this;}

    /**
     * <p>The CIS scan result details' remediation.</p>
     */
    inline CisScanResultDetails& WithRemediation(Aws::String&& value) { SetRemediation(std::move(value)); return *this;}

    /**
     * <p>The CIS scan result details' remediation.</p>
     */
    inline CisScanResultDetails& WithRemediation(const char* value) { SetRemediation(value); return *this;}


    /**
     * <p>The CIS scan result details' scan ARN.</p>
     */
    inline const Aws::String& GetScanArn() const{ return m_scanArn; }

    /**
     * <p>The CIS scan result details' scan ARN.</p>
     */
    inline bool ScanArnHasBeenSet() const { return m_scanArnHasBeenSet; }

    /**
     * <p>The CIS scan result details' scan ARN.</p>
     */
    inline void SetScanArn(const Aws::String& value) { m_scanArnHasBeenSet = true; m_scanArn = value; }

    /**
     * <p>The CIS scan result details' scan ARN.</p>
     */
    inline void SetScanArn(Aws::String&& value) { m_scanArnHasBeenSet = true; m_scanArn = std::move(value); }

    /**
     * <p>The CIS scan result details' scan ARN.</p>
     */
    inline void SetScanArn(const char* value) { m_scanArnHasBeenSet = true; m_scanArn.assign(value); }

    /**
     * <p>The CIS scan result details' scan ARN.</p>
     */
    inline CisScanResultDetails& WithScanArn(const Aws::String& value) { SetScanArn(value); return *this;}

    /**
     * <p>The CIS scan result details' scan ARN.</p>
     */
    inline CisScanResultDetails& WithScanArn(Aws::String&& value) { SetScanArn(std::move(value)); return *this;}

    /**
     * <p>The CIS scan result details' scan ARN.</p>
     */
    inline CisScanResultDetails& WithScanArn(const char* value) { SetScanArn(value); return *this;}


    /**
     * <p>The CIS scan result details' status.</p>
     */
    inline const CisFindingStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The CIS scan result details' status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The CIS scan result details' status.</p>
     */
    inline void SetStatus(const CisFindingStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The CIS scan result details' status.</p>
     */
    inline void SetStatus(CisFindingStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The CIS scan result details' status.</p>
     */
    inline CisScanResultDetails& WithStatus(const CisFindingStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The CIS scan result details' status.</p>
     */
    inline CisScanResultDetails& WithStatus(CisFindingStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The CIS scan result details' status reason.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The CIS scan result details' status reason.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>The CIS scan result details' status reason.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The CIS scan result details' status reason.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The CIS scan result details' status reason.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>The CIS scan result details' status reason.</p>
     */
    inline CisScanResultDetails& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The CIS scan result details' status reason.</p>
     */
    inline CisScanResultDetails& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The CIS scan result details' status reason.</p>
     */
    inline CisScanResultDetails& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The CIS scan result details' target resource ID.</p>
     */
    inline const Aws::String& GetTargetResourceId() const{ return m_targetResourceId; }

    /**
     * <p>The CIS scan result details' target resource ID.</p>
     */
    inline bool TargetResourceIdHasBeenSet() const { return m_targetResourceIdHasBeenSet; }

    /**
     * <p>The CIS scan result details' target resource ID.</p>
     */
    inline void SetTargetResourceId(const Aws::String& value) { m_targetResourceIdHasBeenSet = true; m_targetResourceId = value; }

    /**
     * <p>The CIS scan result details' target resource ID.</p>
     */
    inline void SetTargetResourceId(Aws::String&& value) { m_targetResourceIdHasBeenSet = true; m_targetResourceId = std::move(value); }

    /**
     * <p>The CIS scan result details' target resource ID.</p>
     */
    inline void SetTargetResourceId(const char* value) { m_targetResourceIdHasBeenSet = true; m_targetResourceId.assign(value); }

    /**
     * <p>The CIS scan result details' target resource ID.</p>
     */
    inline CisScanResultDetails& WithTargetResourceId(const Aws::String& value) { SetTargetResourceId(value); return *this;}

    /**
     * <p>The CIS scan result details' target resource ID.</p>
     */
    inline CisScanResultDetails& WithTargetResourceId(Aws::String&& value) { SetTargetResourceId(std::move(value)); return *this;}

    /**
     * <p>The CIS scan result details' target resource ID.</p>
     */
    inline CisScanResultDetails& WithTargetResourceId(const char* value) { SetTargetResourceId(value); return *this;}


    /**
     * <p>The CIS scan result details' title.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The CIS scan result details' title.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The CIS scan result details' title.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The CIS scan result details' title.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The CIS scan result details' title.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The CIS scan result details' title.</p>
     */
    inline CisScanResultDetails& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The CIS scan result details' title.</p>
     */
    inline CisScanResultDetails& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The CIS scan result details' title.</p>
     */
    inline CisScanResultDetails& WithTitle(const char* value) { SetTitle(value); return *this;}

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
