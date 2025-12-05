/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/MalwareScanner.h>
#include <aws/backup/model/ScanMode.h>

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
 * <p>Defines a scanning action that specifies the malware scanner and scan mode to
 * use.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ScanAction">AWS
 * API Reference</a></p>
 */
class ScanAction {
 public:
  AWS_BACKUP_API ScanAction() = default;
  AWS_BACKUP_API ScanAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API ScanAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The malware scanner to use for the scan action. Currently only
   * <code>GUARDDUTY</code> is supported.</p>
   */
  inline MalwareScanner GetMalwareScanner() const { return m_malwareScanner; }
  inline bool MalwareScannerHasBeenSet() const { return m_malwareScannerHasBeenSet; }
  inline void SetMalwareScanner(MalwareScanner value) {
    m_malwareScannerHasBeenSet = true;
    m_malwareScanner = value;
  }
  inline ScanAction& WithMalwareScanner(MalwareScanner value) {
    SetMalwareScanner(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scanning mode to use for the scan action.</p> <p>Valid values:
   * <code>FULL_SCAN</code> | <code>INCREMENTAL_SCAN</code>.</p>
   */
  inline ScanMode GetScanMode() const { return m_scanMode; }
  inline bool ScanModeHasBeenSet() const { return m_scanModeHasBeenSet; }
  inline void SetScanMode(ScanMode value) {
    m_scanModeHasBeenSet = true;
    m_scanMode = value;
  }
  inline ScanAction& WithScanMode(ScanMode value) {
    SetScanMode(value);
    return *this;
  }
  ///@}
 private:
  MalwareScanner m_malwareScanner{MalwareScanner::NOT_SET};

  ScanMode m_scanMode{ScanMode::NOT_SET};
  bool m_malwareScannerHasBeenSet = false;
  bool m_scanModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
