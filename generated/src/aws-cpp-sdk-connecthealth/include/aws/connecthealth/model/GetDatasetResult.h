/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/DatasetArtifacts.h>
#include <aws/connecthealth/model/DatasetConfig.h>
#include <aws/connecthealth/model/DatasetStatus.h>
#include <aws/connecthealth/model/DatasetType.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
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
namespace ConnectHealth {
namespace Model {
class GetDatasetResult {
 public:
  AWS_CONNECTHEALTH_API GetDatasetResult() = default;
  AWS_CONNECTHEALTH_API GetDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECTHEALTH_API GetDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the dataset.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetDatasetResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the dataset.</p>
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
   * <p>The name of the dataset.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetDatasetResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the dataset.</p>
   */
  inline DatasetType GetType() const { return m_type; }
  inline void SetType(DatasetType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline GetDatasetResult& WithType(DatasetType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that you provided when you created the dataset.</p>
   */
  inline const DatasetConfig& GetConfig() const { return m_config; }
  template <typename ConfigT = DatasetConfig>
  void SetConfig(ConfigT&& value) {
    m_configHasBeenSet = true;
    m_config = std::forward<ConfigT>(value);
  }
  template <typename ConfigT = DatasetConfig>
  GetDatasetResult& WithConfig(ConfigT&& value) {
    SetConfig(std::forward<ConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the dataset.</p>
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
   * <p>Details about the status of the dataset, such as the reason that it failed to
   * build or delete.</p>
   */
  inline const Aws::String& GetStatusDetails() const { return m_statusDetails; }
  template <typename StatusDetailsT = Aws::String>
  void SetStatusDetails(StatusDetailsT&& value) {
    m_statusDetailsHasBeenSet = true;
    m_statusDetails = std::forward<StatusDetailsT>(value);
  }
  template <typename StatusDetailsT = Aws::String>
  GetDatasetResult& WithStatusDetails(StatusDetailsT&& value) {
    SetStatusDetails(std::forward<StatusDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The results of building the dataset, such as medical coding evaluation
   * scores. Available after Amazon Connect Health builds the dataset.</p>
   */
  inline const DatasetArtifacts& GetArtifacts() const { return m_artifacts; }
  template <typename ArtifactsT = DatasetArtifacts>
  void SetArtifacts(ArtifactsT&& value) {
    m_artifactsHasBeenSet = true;
    m_artifacts = std::forward<ArtifactsT>(value);
  }
  template <typename ArtifactsT = DatasetArtifacts>
  GetDatasetResult& WithArtifacts(ArtifactsT&& value) {
    SetArtifacts(std::forward<ArtifactsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the dataset was created.</p>
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
   * <p>The date and time that the dataset was last updated.</p>
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
  Aws::String m_arn;

  Aws::String m_datasetId;

  Aws::String m_name;

  DatasetType m_type{DatasetType::NOT_SET};

  DatasetConfig m_config;

  DatasetStatus m_status{DatasetStatus::NOT_SET};

  Aws::String m_statusDetails;

  DatasetArtifacts m_artifacts;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_arnHasBeenSet = false;
  bool m_datasetIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_configHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusDetailsHasBeenSet = false;
  bool m_artifactsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
