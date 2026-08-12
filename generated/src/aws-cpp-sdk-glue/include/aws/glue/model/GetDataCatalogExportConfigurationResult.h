/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ExportEncryptionConfiguration.h>
#include <aws/glue/model/ExportSetting.h>
#include <aws/glue/model/ExportStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {
/**
 * <p>The export configuration returned by the
 * <code>GetDataCatalogExportConfiguration</code> operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDataCatalogExportConfigurationOutput">AWS
 * API Reference</a></p>
 */
class GetDataCatalogExportConfigurationResult {
 public:
  AWS_GLUE_API GetDataCatalogExportConfigurationResult() = default;
  AWS_GLUE_API GetDataCatalogExportConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GLUE_API GetDataCatalogExportConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The export setting for the data catalog. Valid values are
   * <code>ENABLED</code> and <code>DISABLED</code>.</p>
   */
  inline ExportSetting GetExportSetting() const { return m_exportSetting; }
  inline void SetExportSetting(ExportSetting value) {
    m_exportSettingHasBeenSet = true;
    m_exportSetting = value;
  }
  inline GetDataCatalogExportConfigurationResult& WithExportSetting(ExportSetting value) {
    SetExportSetting(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the export. Valid values are <code>ENABLING</code>,
   * <code>ENABLED</code>, <code>DISABLING</code>, <code>DISABLED</code>, and
   * <code>FAILED</code>.</p>
   */
  inline ExportStatus GetStatus() const { return m_status; }
  inline void SetStatus(ExportStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetDataCatalogExportConfigurationResult& WithStatus(ExportStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encryption configuration for the exported data.</p>
   */
  inline const ExportEncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  template <typename EncryptionConfigurationT = ExportEncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = ExportEncryptionConfiguration>
  GetDataCatalogExportConfigurationResult& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the S3 Tables bucket where catalog metadata is exported.</p>
   */
  inline const Aws::String& GetS3TableBucketArn() const { return m_s3TableBucketArn; }
  template <typename S3TableBucketArnT = Aws::String>
  void SetS3TableBucketArn(S3TableBucketArnT&& value) {
    m_s3TableBucketArnHasBeenSet = true;
    m_s3TableBucketArn = std::forward<S3TableBucketArnT>(value);
  }
  template <typename S3TableBucketArnT = Aws::String>
  GetDataCatalogExportConfigurationResult& WithS3TableBucketArn(S3TableBucketArnT&& value) {
    SetS3TableBucketArn(std::forward<S3TableBucketArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp at which the export configuration was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetDataCatalogExportConfigurationResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp at which the export configuration was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetDataCatalogExportConfigurationResult& WithUpdatedAt(UpdatedAtT&& value) {
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
  GetDataCatalogExportConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ExportSetting m_exportSetting{ExportSetting::NOT_SET};

  ExportStatus m_status{ExportStatus::NOT_SET};

  ExportEncryptionConfiguration m_encryptionConfiguration;

  Aws::String m_s3TableBucketArn;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_exportSettingHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_s3TableBucketArnHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
