/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ExportSetting.h>
#include <aws/glue/model/S3TablesExportState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>The export setting and current export state for asset metadata.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/AssetsExportResult">AWS
 * API Reference</a></p>
 */
class AssetsExportResult {
 public:
  AWS_GLUE_API AssetsExportResult() = default;
  AWS_GLUE_API AssetsExportResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API AssetsExportResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether asset metadata is exported to S3 Tables. Valid values are
   * <code>ENABLED</code> and <code>DISABLED</code>.</p>
   */
  inline ExportSetting GetS3TablesExport() const { return m_s3TablesExport; }
  inline bool S3TablesExportHasBeenSet() const { return m_s3TablesExportHasBeenSet; }
  inline void SetS3TablesExport(ExportSetting value) {
    m_s3TablesExportHasBeenSet = true;
    m_s3TablesExport = value;
  }
  inline AssetsExportResult& WithS3TablesExport(ExportSetting value) {
    SetS3TablesExport(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the asset metadata export to S3 Tables.</p>
   */
  inline const S3TablesExportState& GetS3TablesExportState() const { return m_s3TablesExportState; }
  inline bool S3TablesExportStateHasBeenSet() const { return m_s3TablesExportStateHasBeenSet; }
  template <typename S3TablesExportStateT = S3TablesExportState>
  void SetS3TablesExportState(S3TablesExportStateT&& value) {
    m_s3TablesExportStateHasBeenSet = true;
    m_s3TablesExportState = std::forward<S3TablesExportStateT>(value);
  }
  template <typename S3TablesExportStateT = S3TablesExportState>
  AssetsExportResult& WithS3TablesExportState(S3TablesExportStateT&& value) {
    SetS3TablesExportState(std::forward<S3TablesExportStateT>(value));
    return *this;
  }
  ///@}
 private:
  ExportSetting m_s3TablesExport{ExportSetting::NOT_SET};

  S3TablesExportState m_s3TablesExportState;
  bool m_s3TablesExportHasBeenSet = false;
  bool m_s3TablesExportStateHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
