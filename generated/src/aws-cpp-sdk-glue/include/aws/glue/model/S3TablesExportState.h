/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ExportStatus.h>

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
 * <p>The state of an export to S3 Tables. Glue sets this state.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/S3TablesExportState">AWS
 * API Reference</a></p>
 */
class S3TablesExportState {
 public:
  AWS_GLUE_API S3TablesExportState() = default;
  AWS_GLUE_API S3TablesExportState(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API S3TablesExportState& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current status of the export. Valid values are <code>ENABLING</code>,
   * <code>ENABLED</code>, <code>DISABLING</code>, <code>DISABLED</code>, and
   * <code>FAILED</code>.</p>
   */
  inline ExportStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ExportStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline S3TablesExportState& WithStatus(ExportStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  ExportStatus m_status{ExportStatus::NOT_SET};
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
