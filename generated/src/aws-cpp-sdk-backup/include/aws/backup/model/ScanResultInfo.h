/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/ScanResultStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Backup {
namespace Model {

/**
 * <p>Contains information about the results of a scan job.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ScanResultInfo">AWS
 * API Reference</a></p>
 */
class ScanResultInfo {
 public:
  AWS_BACKUP_API ScanResultInfo() = default;
  AWS_BACKUP_API ScanResultInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API ScanResultInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status of the scan results.</p> <p>Valid values:
   * <code>THREATS_FOUND</code> | <code>NO_THREATS_FOUND</code>.</p>
   */
  inline ScanResultStatus GetScanResultStatus() const { return m_scanResultStatus; }
  inline bool ScanResultStatusHasBeenSet() const { return m_scanResultStatusHasBeenSet; }
  inline void SetScanResultStatus(ScanResultStatus value) {
    m_scanResultStatusHasBeenSet = true;
    m_scanResultStatus = value;
  }
  inline ScanResultInfo& WithScanResultStatus(ScanResultStatus value) {
    SetScanResultStatus(value);
    return *this;
  }
  ///@}
 private:
  ScanResultStatus m_scanResultStatus{ScanResultStatus::NOT_SET};
  bool m_scanResultStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
