/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/BackupRequest.h>
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Backup {
namespace Model {

/**
 */
class DescribeScanJobRequest : public BackupRequest {
 public:
  AWS_BACKUP_API DescribeScanJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeScanJob"; }

  AWS_BACKUP_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Uniquely identifies a request to Backup to scan a resource.</p>
   */
  inline const Aws::String& GetScanJobId() const { return m_scanJobId; }
  inline bool ScanJobIdHasBeenSet() const { return m_scanJobIdHasBeenSet; }
  template <typename ScanJobIdT = Aws::String>
  void SetScanJobId(ScanJobIdT&& value) {
    m_scanJobIdHasBeenSet = true;
    m_scanJobId = std::forward<ScanJobIdT>(value);
  }
  template <typename ScanJobIdT = Aws::String>
  DescribeScanJobRequest& WithScanJobId(ScanJobIdT&& value) {
    SetScanJobId(std::forward<ScanJobIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_scanJobId;
  bool m_scanJobIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
