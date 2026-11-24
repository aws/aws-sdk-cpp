/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/AssetsExport.h>
#include <aws/glue/model/S3TablesConfiguration.h>

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
 * <code>PutDataCatalogExportConfiguration</code> operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PutDataCatalogExportConfigurationOutput">AWS
 * API Reference</a></p>
 */
class PutDataCatalogExportConfigurationResult {
 public:
  AWS_GLUE_API PutDataCatalogExportConfigurationResult() = default;
  AWS_GLUE_API PutDataCatalogExportConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GLUE_API PutDataCatalogExportConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The S3 Tables configuration for the export.</p>
   */
  inline const S3TablesConfiguration& GetS3TablesConfiguration() const { return m_s3TablesConfiguration; }
  template <typename S3TablesConfigurationT = S3TablesConfiguration>
  void SetS3TablesConfiguration(S3TablesConfigurationT&& value) {
    m_s3TablesConfigurationHasBeenSet = true;
    m_s3TablesConfiguration = std::forward<S3TablesConfigurationT>(value);
  }
  template <typename S3TablesConfigurationT = S3TablesConfiguration>
  PutDataCatalogExportConfigurationResult& WithS3TablesConfiguration(S3TablesConfigurationT&& value) {
    SetS3TablesConfiguration(std::forward<S3TablesConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The export setting for asset metadata.</p>
   */
  inline const AssetsExport& GetAssets() const { return m_assets; }
  template <typename AssetsT = AssetsExport>
  void SetAssets(AssetsT&& value) {
    m_assetsHasBeenSet = true;
    m_assets = std::forward<AssetsT>(value);
  }
  template <typename AssetsT = AssetsExport>
  PutDataCatalogExportConfigurationResult& WithAssets(AssetsT&& value) {
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
  PutDataCatalogExportConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  S3TablesConfiguration m_s3TablesConfiguration;

  AssetsExport m_assets;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_s3TablesConfigurationHasBeenSet = false;
  bool m_assetsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
