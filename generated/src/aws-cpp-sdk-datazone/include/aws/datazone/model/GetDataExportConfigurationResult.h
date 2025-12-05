/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/ConfigurationStatus.h>
#include <aws/datazone/model/EncryptionConfiguration.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {
class GetDataExportConfigurationResult {
 public:
  AWS_DATAZONE_API GetDataExportConfigurationResult() = default;
  AWS_DATAZONE_API GetDataExportConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DATAZONE_API GetDataExportConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The timestamp at which the data export configuration report was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetDataExportConfigurationResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encryption configuration as part of the data export configuration
   * details.</p>
   */
  inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  GetDataExportConfigurationResult& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the export is enabled.</p>
   */
  inline bool GetIsExportEnabled() const { return m_isExportEnabled; }
  inline void SetIsExportEnabled(bool value) {
    m_isExportEnabledHasBeenSet = true;
    m_isExportEnabled = value;
  }
  inline GetDataExportConfigurationResult& WithIsExportEnabled(bool value) {
    SetIsExportEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 table bucket ARN as part of the data export configuration
   * details.</p>
   */
  inline const Aws::String& GetS3TableBucketArn() const { return m_s3TableBucketArn; }
  template <typename S3TableBucketArnT = Aws::String>
  void SetS3TableBucketArn(S3TableBucketArnT&& value) {
    m_s3TableBucketArnHasBeenSet = true;
    m_s3TableBucketArn = std::forward<S3TableBucketArnT>(value);
  }
  template <typename S3TableBucketArnT = Aws::String>
  GetDataExportConfigurationResult& WithS3TableBucketArn(S3TableBucketArnT&& value) {
    SetS3TableBucketArn(std::forward<S3TableBucketArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the data export configuration.</p>
   */
  inline ConfigurationStatus GetStatus() const { return m_status; }
  inline void SetStatus(ConfigurationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetDataExportConfigurationResult& WithStatus(ConfigurationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp at which the data export configuration report was updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetDataExportConfigurationResult& WithUpdatedAt(UpdatedAtT&& value) {
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
  GetDataExportConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_createdAt{};

  EncryptionConfiguration m_encryptionConfiguration;

  bool m_isExportEnabled{false};

  Aws::String m_s3TableBucketArn;

  ConfigurationStatus m_status{ConfigurationStatus::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  bool m_createdAtHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_isExportEnabledHasBeenSet = false;
  bool m_s3TableBucketArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
