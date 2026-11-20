/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ExportSetting.h>

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
 * <p>The export setting for asset metadata.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/AssetsExport">AWS
 * API Reference</a></p>
 */
class AssetsExport {
 public:
  AWS_GLUE_API AssetsExport() = default;
  AWS_GLUE_API AssetsExport(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API AssetsExport& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  inline AssetsExport& WithS3TablesExport(ExportSetting value) {
    SetS3TablesExport(value);
    return *this;
  }
  ///@}
 private:
  ExportSetting m_s3TablesExport{ExportSetting::NOT_SET};
  bool m_s3TablesExportHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
