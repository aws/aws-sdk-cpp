/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/DatasetSchemaType.h>
#include <aws/bedrock-agentcore-control/model/DatasetStatus.h>
#include <aws/bedrock-agentcore-control/model/DraftStatus.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {
class GetDatasetResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API GetDatasetResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API GetDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API GetDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the dataset. </p>
   */
  inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
  template <typename DatasetArnT = Aws::String>
  void SetDatasetArn(DatasetArnT&& value) {
    m_datasetArnHasBeenSet = true;
    m_datasetArn = std::forward<DatasetArnT>(value);
  }
  template <typename DatasetArnT = Aws::String>
  GetDatasetResult& WithDatasetArn(DatasetArnT&& value) {
    SetDatasetArn(std::forward<DatasetArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The unique identifier of the dataset. </p>
   */
  inline const Aws::String& GetDatasetId() const { return m_datasetId; }
  template <typename DatasetIdT = Aws::String>
  void SetDatasetId(DatasetIdT&& value) {
    m_datasetIdHasBeenSet = true;
    m_datasetId = std::forward<DatasetIdT>(value);
  }
  template <typename DatasetIdT = Aws::String>
  GetDatasetResult& WithDatasetId(DatasetIdT&& value) {
    SetDatasetId(std::forward<DatasetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The resolved version: "DRAFT" (default) or the requested version number.
   * </p>
   */
  inline const Aws::String& GetDatasetVersion() const { return m_datasetVersion; }
  template <typename DatasetVersionT = Aws::String>
  void SetDatasetVersion(DatasetVersionT&& value) {
    m_datasetVersionHasBeenSet = true;
    m_datasetVersion = std::forward<DatasetVersionT>(value);
  }
  template <typename DatasetVersionT = Aws::String>
  GetDatasetResult& WithDatasetVersion(DatasetVersionT&& value) {
    SetDatasetVersion(std::forward<DatasetVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The name of the dataset. </p>
   */
  inline const Aws::String& GetDatasetName() const { return m_datasetName; }
  template <typename DatasetNameT = Aws::String>
  void SetDatasetName(DatasetNameT&& value) {
    m_datasetNameHasBeenSet = true;
    m_datasetName = std::forward<DatasetNameT>(value);
  }
  template <typename DatasetNameT = Aws::String>
  GetDatasetResult& WithDatasetName(DatasetNameT&& value) {
    SetDatasetName(std::forward<DatasetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The description of the dataset. </p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetDatasetResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The current status of the dataset. </p>
   */
  inline DatasetStatus GetStatus() const { return m_status; }
  inline void SetStatus(DatasetStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetDatasetResult& WithStatus(DatasetStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Publish synchronization state. Only authoritative when status is ACTIVE.
   * MODIFIED indicates DRAFT has unpublished changes. UNMODIFIED indicates DRAFT
   * matches the latest published version. </p>
   */
  inline DraftStatus GetDraftStatus() const { return m_draftStatus; }
  inline void SetDraftStatus(DraftStatus value) {
    m_draftStatusHasBeenSet = true;
    m_draftStatus = value;
  }
  inline GetDatasetResult& WithDraftStatus(DraftStatus value) {
    SetDraftStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Populated when status is CREATE_FAILED, UPDATE_FAILED, or DELETE_FAILED.
   * Describes the reason for the failure. </p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  GetDatasetResult& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The schema type declared at create time. Immutable after creation. </p>
   */
  inline DatasetSchemaType GetSchemaType() const { return m_schemaType; }
  inline void SetSchemaType(DatasetSchemaType value) {
    m_schemaTypeHasBeenSet = true;
    m_schemaType = value;
  }
  inline GetDatasetResult& WithSchemaType(DatasetSchemaType value) {
    SetSchemaType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> KMS key ARN used for server-side encryption on service Amazon S3 writes, if
   * configured. </p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  GetDatasetResult& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The number of examples in the DRAFT. </p>
   */
  inline long long GetExampleCount() const { return m_exampleCount; }
  inline void SetExampleCount(long long value) {
    m_exampleCountHasBeenSet = true;
    m_exampleCount = value;
  }
  inline GetDatasetResult& WithExampleCount(long long value) {
    SetExampleCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Presigned Amazon S3 URL to download the consolidated dataset file for the
   * resolved version. Expires after 5 minutes. Omitted if the file does not yet
   * exist. </p>
   */
  inline const Aws::String& GetDownloadUrl() const { return m_downloadUrl; }
  template <typename DownloadUrlT = Aws::String>
  void SetDownloadUrl(DownloadUrlT&& value) {
    m_downloadUrlHasBeenSet = true;
    m_downloadUrl = std::forward<DownloadUrlT>(value);
  }
  template <typename DownloadUrlT = Aws::String>
  GetDatasetResult& WithDownloadUrl(DownloadUrlT&& value) {
    SetDownloadUrl(std::forward<DownloadUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Expiry timestamp for the download URL. </p>
   */
  inline const Aws::Utils::DateTime& GetDownloadUrlExpiresAt() const { return m_downloadUrlExpiresAt; }
  template <typename DownloadUrlExpiresAtT = Aws::Utils::DateTime>
  void SetDownloadUrlExpiresAt(DownloadUrlExpiresAtT&& value) {
    m_downloadUrlExpiresAtHasBeenSet = true;
    m_downloadUrlExpiresAt = std::forward<DownloadUrlExpiresAtT>(value);
  }
  template <typename DownloadUrlExpiresAtT = Aws::Utils::DateTime>
  GetDatasetResult& WithDownloadUrlExpiresAt(DownloadUrlExpiresAtT&& value) {
    SetDownloadUrlExpiresAt(std::forward<DownloadUrlExpiresAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timestamp when the dataset was created. </p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetDatasetResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timestamp when the dataset was last updated. </p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetDatasetResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The tags associated with the dataset. </p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  GetDatasetResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  GetDatasetResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetDatasetResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_datasetArn;

  Aws::String m_datasetId;

  Aws::String m_datasetVersion;

  Aws::String m_datasetName;

  Aws::String m_description;

  DatasetStatus m_status{DatasetStatus::NOT_SET};

  DraftStatus m_draftStatus{DraftStatus::NOT_SET};

  Aws::String m_failureReason;

  DatasetSchemaType m_schemaType{DatasetSchemaType::NOT_SET};

  Aws::String m_kmsKeyArn;

  long long m_exampleCount{0};

  Aws::String m_downloadUrl;

  Aws::Utils::DateTime m_downloadUrlExpiresAt{};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_datasetArnHasBeenSet = false;
  bool m_datasetIdHasBeenSet = false;
  bool m_datasetVersionHasBeenSet = false;
  bool m_datasetNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_draftStatusHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_schemaTypeHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
  bool m_exampleCountHasBeenSet = false;
  bool m_downloadUrlHasBeenSet = false;
  bool m_downloadUrlExpiresAtHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
