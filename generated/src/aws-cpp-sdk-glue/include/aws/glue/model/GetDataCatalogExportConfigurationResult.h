/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/AssetsExportResult.h>
#include <aws/glue/model/S3TablesConfigurationResult.h>

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
  /**
   * <p>The S3 Tables configuration for the export, including the table bucket that
   * holds the exported catalog metadata and its encryption configuration.</p>
   */
  inline const S3TablesConfigurationResult& GetS3TablesConfiguration() const { return m_s3TablesConfiguration; }
  template <typename S3TablesConfigurationT = S3TablesConfigurationResult>
  void SetS3TablesConfiguration(S3TablesConfigurationT&& value) {
    m_s3TablesConfigurationHasBeenSet = true;
    m_s3TablesConfiguration = std::forward<S3TablesConfigurationT>(value);
  }
  template <typename S3TablesConfigurationT = S3TablesConfigurationResult>
  GetDataCatalogExportConfigurationResult& WithS3TablesConfiguration(S3TablesConfigurationT&& value) {
    SetS3TablesConfiguration(std::forward<S3TablesConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The export setting and current export state for asset metadata.</p>
   */
  inline const AssetsExportResult& GetAssets() const { return m_assets; }
  template <typename AssetsT = AssetsExportResult>
  void SetAssets(AssetsT&& value) {
    m_assetsHasBeenSet = true;
    m_assets = std::forward<AssetsT>(value);
  }
  template <typename AssetsT = AssetsExportResult>
  GetDataCatalogExportConfigurationResult& WithAssets(AssetsT&& value) {
    SetAssets(std::forward<AssetsT>(value));
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
  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  S3TablesConfigurationResult m_s3TablesConfiguration;

  AssetsExportResult m_assets;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_s3TablesConfigurationHasBeenSet = false;
  bool m_assetsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
