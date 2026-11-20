/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/AssetsExport.h>
#include <aws/glue/model/S3TablesConfiguration.h>

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

  ///@{
  /**
   * <p>The S3 Tables configuration for the export. The encryption configuration
   * applies only when Glue creates the table bucket that holds the exported catalog
   * metadata. If not specified, the default encryption settings are used.</p>
   */
  inline const S3TablesConfiguration& GetS3TablesConfiguration() const { return m_s3TablesConfiguration; }
  inline bool S3TablesConfigurationHasBeenSet() const { return m_s3TablesConfigurationHasBeenSet; }
  template <typename S3TablesConfigurationT = S3TablesConfiguration>
  void SetS3TablesConfiguration(S3TablesConfigurationT&& value) {
    m_s3TablesConfigurationHasBeenSet = true;
    m_s3TablesConfiguration = std::forward<S3TablesConfigurationT>(value);
  }
  template <typename S3TablesConfigurationT = S3TablesConfiguration>
  PutDataCatalogExportConfigurationRequest& WithS3TablesConfiguration(S3TablesConfigurationT&& value) {
    SetS3TablesConfiguration(std::forward<S3TablesConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The export setting for asset metadata. Set <code>S3TablesExport</code> to
   * <code>ENABLED</code> to start exporting asset metadata to S3 Tables, or to
   * <code>DISABLED</code> to stop exporting.</p>
   */
  inline const AssetsExport& GetAssets() const { return m_assets; }
  inline bool AssetsHasBeenSet() const { return m_assetsHasBeenSet; }
  template <typename AssetsT = AssetsExport>
  void SetAssets(AssetsT&& value) {
    m_assetsHasBeenSet = true;
    m_assets = std::forward<AssetsT>(value);
  }
  template <typename AssetsT = AssetsExport>
  PutDataCatalogExportConfigurationRequest& WithAssets(AssetsT&& value) {
    SetAssets(std::forward<AssetsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  S3TablesConfiguration m_s3TablesConfiguration;

  AssetsExport m_assets;
  bool m_clientTokenHasBeenSet = true;
  bool m_s3TablesConfigurationHasBeenSet = false;
  bool m_assetsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
