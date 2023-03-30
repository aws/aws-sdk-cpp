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
    AWS_GUARDDUTY_API CoverageResource();
    AWS_GUARDDUTY_API CoverageResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API CoverageResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The unique ID of the resource.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The unique ID of the resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The unique ID of the resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The unique ID of the resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The unique ID of the resource.</p>
     */
    inline CoverageResource& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The unique ID of the resource.</p>
     */
    inline CoverageResource& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the resource.</p>
     */
    inline CoverageResource& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The unique ID of the GuardDuty detector associated with the resource.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The unique ID of the GuardDuty detector associated with the resource.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The unique ID of the GuardDuty detector associated with the resource.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The unique ID of the GuardDuty detector associated with the resource.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The unique ID of the GuardDuty detector associated with the resource.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The unique ID of the GuardDuty detector associated with the resource.</p>
     */
    inline CoverageResource& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The unique ID of the GuardDuty detector associated with the resource.</p>
     */
    inline CoverageResource& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the GuardDuty detector associated with the resource.</p>
     */
    inline CoverageResource& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The unique ID of the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The unique ID of the Amazon Web Services account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The unique ID of the Amazon Web Services account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The unique ID of the Amazon Web Services account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The unique ID of the Amazon Web Services account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The unique ID of the Amazon Web Services account.</p>
     */
    inline CoverageResource& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The unique ID of the Amazon Web Services account.</p>
     */
    inline CoverageResource& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the Amazon Web Services account.</p>
     */
    inline CoverageResource& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>Information about the resource for which the coverage statistics are
     * retrieved.</p>
     */
    inline const CoverageResourceDetails& GetResourceDetails() const{ return m_resourceDetails; }

    /**
     * <p>Information about the resource for which the coverage statistics are
     * retrieved.</p>
     */
    inline bool ResourceDetailsHasBeenSet() const { return m_resourceDetailsHasBeenSet; }

    /**
     * <p>Information about the resource for which the coverage statistics are
     * retrieved.</p>
     */
    inline void SetResourceDetails(const CoverageResourceDetails& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails = value; }

    /**
     * <p>Information about the resource for which the coverage statistics are
     * retrieved.</p>
     */
    inline void SetResourceDetails(CoverageResourceDetails&& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails = std::move(value); }

    /**
     * <p>Information about the resource for which the coverage statistics are
     * retrieved.</p>
     */
    inline CoverageResource& WithResourceDetails(const CoverageResourceDetails& value) { SetResourceDetails(value); return *this;}

    /**
     * <p>Information about the resource for which the coverage statistics are
     * retrieved.</p>
     */
    inline CoverageResource& WithResourceDetails(CoverageResourceDetails&& value) { SetResourceDetails(std::move(value)); return *this;}


    /**
     * <p>Represents the status of the EKS cluster coverage.</p>
     */
    inline const CoverageStatus& GetCoverageStatus() const{ return m_coverageStatus; }

    /**
     * <p>Represents the status of the EKS cluster coverage.</p>
     */
    inline bool CoverageStatusHasBeenSet() const { return m_coverageStatusHasBeenSet; }

    /**
     * <p>Represents the status of the EKS cluster coverage.</p>
     */
    inline void SetCoverageStatus(const CoverageStatus& value) { m_coverageStatusHasBeenSet = true; m_coverageStatus = value; }

    /**
     * <p>Represents the status of the EKS cluster coverage.</p>
     */
    inline void SetCoverageStatus(CoverageStatus&& value) { m_coverageStatusHasBeenSet = true; m_coverageStatus = std::move(value); }

    /**
     * <p>Represents the status of the EKS cluster coverage.</p>
     */
    inline CoverageResource& WithCoverageStatus(const CoverageStatus& value) { SetCoverageStatus(value); return *this;}

    /**
     * <p>Represents the status of the EKS cluster coverage.</p>
     */
    inline CoverageResource& WithCoverageStatus(CoverageStatus&& value) { SetCoverageStatus(std::move(value)); return *this;}


    /**
     * <p>Represents the reason why a coverage status was <code>UNHEALTHY</code> for
     * the EKS cluster.</p>
     */
    inline const Aws::String& GetIssue() const{ return m_issue; }

    /**
     * <p>Represents the reason why a coverage status was <code>UNHEALTHY</code> for
     * the EKS cluster.</p>
     */
    inline bool IssueHasBeenSet() const { return m_issueHasBeenSet; }

    /**
     * <p>Represents the reason why a coverage status was <code>UNHEALTHY</code> for
     * the EKS cluster.</p>
     */
    inline void SetIssue(const Aws::String& value) { m_issueHasBeenSet = true; m_issue = value; }

    /**
     * <p>Represents the reason why a coverage status was <code>UNHEALTHY</code> for
     * the EKS cluster.</p>
     */
    inline void SetIssue(Aws::String&& value) { m_issueHasBeenSet = true; m_issue = std::move(value); }

    /**
     * <p>Represents the reason why a coverage status was <code>UNHEALTHY</code> for
     * the EKS cluster.</p>
     */
    inline void SetIssue(const char* value) { m_issueHasBeenSet = true; m_issue.assign(value); }

    /**
     * <p>Represents the reason why a coverage status was <code>UNHEALTHY</code> for
     * the EKS cluster.</p>
     */
    inline CoverageResource& WithIssue(const Aws::String& value) { SetIssue(value); return *this;}

    /**
     * <p>Represents the reason why a coverage status was <code>UNHEALTHY</code> for
     * the EKS cluster.</p>
     */
    inline CoverageResource& WithIssue(Aws::String&& value) { SetIssue(std::move(value)); return *this;}

    /**
     * <p>Represents the reason why a coverage status was <code>UNHEALTHY</code> for
     * the EKS cluster.</p>
     */
    inline CoverageResource& WithIssue(const char* value) { SetIssue(value); return *this;}


    /**
     * <p>The timestamp at which the coverage details for the resource were last
     * updated. This is in UTC format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp at which the coverage details for the resource were last
     * updated. This is in UTC format.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp at which the coverage details for the resource were last
     * updated. This is in UTC format.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp at which the coverage details for the resource were last
     * updated. This is in UTC format.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp at which the coverage details for the resource were last
     * updated. This is in UTC format.</p>
     */
    inline CoverageResource& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp at which the coverage details for the resource were last
     * updated. This is in UTC format.</p>
     */
    inline CoverageResource& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    CoverageResourceDetails m_resourceDetails;
    bool m_resourceDetailsHasBeenSet = false;

    CoverageStatus m_coverageStatus;
    bool m_coverageStatusHasBeenSet = false;

    Aws::String m_issue;
    bool m_issueHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
