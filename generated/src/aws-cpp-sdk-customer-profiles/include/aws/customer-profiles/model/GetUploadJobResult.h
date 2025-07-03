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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/customer-profiles/model/ResultsSummary.h>
#include <aws/customer-profiles/model/ObjectTypeField.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CustomerProfiles
{
namespace Model
{
  class GetUploadJobResult
  {
  public:
    AWS_CUSTOMERPROFILES_API GetUploadJobResult() = default;
    AWS_CUSTOMERPROFILES_API GetUploadJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetUploadJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the upload job. </p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    GetUploadJobResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the upload job. Could be a file name to identify the
     * upload job. </p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    GetUploadJobResult& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status describing the status for the upload job. The following are Valid
     * Values: </p> <ul> <li> <p> <b>CREATED</b>: The upload job has been created, but
     * has not started processing yet. </p> </li> <li> <p> <b>IN_PROGRESS</b>: The
     * upload job is currently in progress, ingesting and processing the profile data.
     * </p> </li> <li> <p> <b>PARTIALLY_SUCCEEDED</b>: The upload job has successfully
     * completed the ingestion and processing of all profile data. </p> </li> <li> <p>
     * <b>SUCCEEDED</b>: The upload job has successfully completed the ingestion and
     * processing of all profile data. </p> </li> <li> <p> <b>FAILED</b>: The upload
     * job has failed to complete. </p> </li> <li> <p> <b>STOPPED</b>: The upload job
     * has been manually stopped or terminated before completion. </p> </li> </ul>
     */
    inline UploadJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(UploadJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetUploadJobResult& WithStatus(UploadJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the current status of the upload job. Possible reasons: </p>
     * <ul> <li> <p> <b>VALIDATION_FAILURE</b>: The upload job has encountered an error
     * or issue and was unable to complete the profile data ingestion. </p> </li> <li>
     * <p> <b>INTERNAL_FAILURE</b>: Failure caused from service side </p> </li> </ul>
     */
    inline StatusReason GetStatusReason() const { return m_statusReason; }
    inline void SetStatusReason(StatusReason value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline GetUploadJobResult& WithStatusReason(StatusReason value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the upload job was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetUploadJobResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the upload job was completed. </p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
    template<typename CompletedAtT = Aws::Utils::DateTime>
    void SetCompletedAt(CompletedAtT&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::forward<CompletedAtT>(value); }
    template<typename CompletedAtT = Aws::Utils::DateTime>
    GetUploadJobResult& WithCompletedAt(CompletedAtT&& value) { SetCompletedAt(std::forward<CompletedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mapping between CSV Columns and Profile Object attributes for the upload
     * job. </p>
     */
    inline const Aws::Map<Aws::String, ObjectTypeField>& GetFields() const { return m_fields; }
    template<typename FieldsT = Aws::Map<Aws::String, ObjectTypeField>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Map<Aws::String, ObjectTypeField>>
    GetUploadJobResult& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsKeyT = Aws::String, typename FieldsValueT = ObjectTypeField>
    GetUploadJobResult& AddFields(FieldsKeyT&& key, FieldsValueT&& value) {
      m_fieldsHasBeenSet = true; m_fields.emplace(std::forward<FieldsKeyT>(key), std::forward<FieldsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The unique key columns used for de-duping the keys in the upload job. </p>
     */
    inline const Aws::String& GetUniqueKey() const { return m_uniqueKey; }
    template<typename UniqueKeyT = Aws::String>
    void SetUniqueKey(UniqueKeyT&& value) { m_uniqueKeyHasBeenSet = true; m_uniqueKey = std::forward<UniqueKeyT>(value); }
    template<typename UniqueKeyT = Aws::String>
    GetUploadJobResult& WithUniqueKey(UniqueKeyT&& value) { SetUniqueKey(std::forward<UniqueKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary of results for the upload job, including the number of updated,
     * created, and failed records. </p>
     */
    inline const ResultsSummary& GetResultsSummary() const { return m_resultsSummary; }
    template<typename ResultsSummaryT = ResultsSummary>
    void SetResultsSummary(ResultsSummaryT&& value) { m_resultsSummaryHasBeenSet = true; m_resultsSummary = std::forward<ResultsSummaryT>(value); }
    template<typename ResultsSummaryT = ResultsSummary>
    GetUploadJobResult& WithResultsSummary(ResultsSummaryT&& value) { SetResultsSummary(std::forward<ResultsSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiry duration for the profiles ingested with the upload job. </p>
     */
    inline int GetDataExpiry() const { return m_dataExpiry; }
    inline void SetDataExpiry(int value) { m_dataExpiryHasBeenSet = true; m_dataExpiry = value; }
    inline GetUploadJobResult& WithDataExpiry(int value) { SetDataExpiry(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetUploadJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::Map<Aws::String, ObjectTypeField> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::String m_uniqueKey;
    bool m_uniqueKeyHasBeenSet = false;

    ResultsSummary m_resultsSummary;
    bool m_resultsSummaryHasBeenSet = false;

    int m_dataExpiry{0};
    bool m_dataExpiryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
