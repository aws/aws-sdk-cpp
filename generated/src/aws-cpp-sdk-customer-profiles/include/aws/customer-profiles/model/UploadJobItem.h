/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/UploadJobStatus.h>
#include <aws/customer-profiles/model/StatusReason.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>The summary information for an individual upload job. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/UploadJobItem">AWS
   * API Reference</a></p>
   */
  class UploadJobItem
  {
  public:
    AWS_CUSTOMERPROFILES_API UploadJobItem() = default;
    AWS_CUSTOMERPROFILES_API UploadJobItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API UploadJobItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the upload job. </p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    UploadJobItem& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the upload job. </p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    UploadJobItem& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the upload job. </p>
     */
    inline UploadJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(UploadJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UploadJobItem& WithStatus(UploadJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the current status of the upload job. </p>
     */
    inline StatusReason GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(StatusReason value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline UploadJobItem& WithStatusReason(StatusReason value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the upload job was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    UploadJobItem& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the upload job was completed. </p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
    inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
    template<typename CompletedAtT = Aws::Utils::DateTime>
    void SetCompletedAt(CompletedAtT&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::forward<CompletedAtT>(value); }
    template<typename CompletedAtT = Aws::Utils::DateTime>
    UploadJobItem& WithCompletedAt(CompletedAtT&& value) { SetCompletedAt(std::forward<CompletedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiry duration for the profiles ingested with the upload job. </p>
     */
    inline int GetDataExpiry() const { return m_dataExpiry; }
    inline bool DataExpiryHasBeenSet() const { return m_dataExpiryHasBeenSet; }
    inline void SetDataExpiry(int value) { m_dataExpiryHasBeenSet = true; m_dataExpiry = value; }
    inline UploadJobItem& WithDataExpiry(int value) { SetDataExpiry(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    UploadJobStatus m_status{UploadJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    StatusReason m_statusReason{StatusReason::NOT_SET};
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_completedAt{};
    bool m_completedAtHasBeenSet = false;

    int m_dataExpiry{0};
    bool m_dataExpiryHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
