/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ExportEncryptionConfiguration.h>
#include <aws/glue/model/ExportSetting.h>

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
   * <p>The export setting for the data catalog.</p>
   */
  inline ExportSetting GetExportSetting() const { return m_exportSetting; }
  inline void SetExportSetting(ExportSetting value) {
    m_exportSettingHasBeenSet = true;
    m_exportSetting = value;
  }
  inline PutDataCatalogExportConfigurationResult& WithExportSetting(ExportSetting value) {
    SetExportSetting(value);
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
  PutDataCatalogExportConfigurationResult& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
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
  ExportSetting m_exportSetting{ExportSetting::NOT_SET};

  ExportEncryptionConfiguration m_encryptionConfiguration;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_exportSettingHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
