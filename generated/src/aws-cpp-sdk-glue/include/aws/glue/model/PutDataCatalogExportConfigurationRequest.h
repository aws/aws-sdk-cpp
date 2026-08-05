/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ExportEncryptionConfiguration.h>
#include <aws/glue/model/ExportSetting.h>

#include <utility>

namespace Aws {
namespace Glue {
namespace Model {

/**
 */
class PutDataCatalogExportConfigurationRequest : public GlueRequest {
 public:
  AWS_GLUE_API PutDataCatalogExportConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutDataCatalogExportConfiguration"; }

  AWS_GLUE_API Aws::String SerializePayload() const override;

  AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The export setting for the data catalog. Specify <code>ENABLED</code> to
   * start exporting catalog metadata to S3 Tables, or <code>DISABLED</code> to stop
   * exporting. This field is required.</p>
   */
  inline ExportSetting GetExportSetting() const { return m_exportSetting; }
  inline bool ExportSettingHasBeenSet() const { return m_exportSettingHasBeenSet; }
  inline void SetExportSetting(ExportSetting value) {
    m_exportSettingHasBeenSet = true;
    m_exportSetting = value;
  }
  inline PutDataCatalogExportConfigurationRequest& WithExportSetting(ExportSetting value) {
    SetExportSetting(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encryption configuration for the exported data. If not specified, the
   * default encryption settings are used.</p>
   */
  inline const ExportEncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = ExportEncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = ExportEncryptionConfiguration>
  PutDataCatalogExportConfigurationRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  PutDataCatalogExportConfigurationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  ExportSetting m_exportSetting{ExportSetting::NOT_SET};

  ExportEncryptionConfiguration m_encryptionConfiguration;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_exportSettingHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
