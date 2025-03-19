/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/CoverageResourceDetails.h>
#include <aws/guardduty/model/CoverageStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Information about the resource of the GuardDuty account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CoverageResource">AWS
   * API Reference</a></p>
   */
  class CoverageResource
  {
  public:
    AWS_GUARDDUTY_API CoverageResource() = default;
    AWS_GUARDDUTY_API CoverageResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API CoverageResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    CoverageResource& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the GuardDuty detector associated with the resource.</p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    CoverageResource& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    CoverageResource& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the resource for which the coverage statistics are
     * retrieved.</p>
     */
    inline const CoverageResourceDetails& GetResourceDetails() const { return m_resourceDetails; }
    inline bool ResourceDetailsHasBeenSet() const { return m_resourceDetailsHasBeenSet; }
    template<typename ResourceDetailsT = CoverageResourceDetails>
    void SetResourceDetails(ResourceDetailsT&& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails = std::forward<ResourceDetailsT>(value); }
    template<typename ResourceDetailsT = CoverageResourceDetails>
    CoverageResource& WithResourceDetails(ResourceDetailsT&& value) { SetResourceDetails(std::forward<ResourceDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the status of the EKS cluster coverage.</p>
     */
    inline CoverageStatus GetCoverageStatus() const { return m_coverageStatus; }
    inline bool CoverageStatusHasBeenSet() const { return m_coverageStatusHasBeenSet; }
    inline void SetCoverageStatus(CoverageStatus value) { m_coverageStatusHasBeenSet = true; m_coverageStatus = value; }
    inline CoverageResource& WithCoverageStatus(CoverageStatus value) { SetCoverageStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the reason why a coverage status was <code>UNHEALTHY</code> for
     * the EKS cluster.</p>
     */
    inline const Aws::String& GetIssue() const { return m_issue; }
    inline bool IssueHasBeenSet() const { return m_issueHasBeenSet; }
    template<typename IssueT = Aws::String>
    void SetIssue(IssueT&& value) { m_issueHasBeenSet = true; m_issue = std::forward<IssueT>(value); }
    template<typename IssueT = Aws::String>
    CoverageResource& WithIssue(IssueT&& value) { SetIssue(std::forward<IssueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the coverage details for the resource were last
     * updated. This is in UTC format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    CoverageResource& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    CoverageResourceDetails m_resourceDetails;
    bool m_resourceDetailsHasBeenSet = false;

    CoverageStatus m_coverageStatus{CoverageStatus::NOT_SET};
    bool m_coverageStatusHasBeenSet = false;

    Aws::String m_issue;
    bool m_issueHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
