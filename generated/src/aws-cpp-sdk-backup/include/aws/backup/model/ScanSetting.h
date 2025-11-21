/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/MalwareScanner.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Contains configuration settings for malware scanning, including the scanner
 * type, target resource types, and scanner role.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ScanSetting">AWS
 * API Reference</a></p>
 */
class ScanSetting {
 public:
  AWS_BACKUP_API ScanSetting() = default;
  AWS_BACKUP_API ScanSetting(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API ScanSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The malware scanner to use for scanning. Currently only
   * <code>GUARDDUTY</code> is supported.</p>
   */
  inline MalwareScanner GetMalwareScanner() const { return m_malwareScanner; }
  inline bool MalwareScannerHasBeenSet() const { return m_malwareScannerHasBeenSet; }
  inline void SetMalwareScanner(MalwareScanner value) {
    m_malwareScannerHasBeenSet = true;
    m_malwareScanner = value;
  }
  inline ScanSetting& WithMalwareScanner(MalwareScanner value) {
    SetMalwareScanner(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of resource types to be scanned for malware.</p>
   */
  inline const Aws::Vector<Aws::String>& GetResourceTypes() const { return m_resourceTypes; }
  inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
  template <typename ResourceTypesT = Aws::Vector<Aws::String>>
  void SetResourceTypes(ResourceTypesT&& value) {
    m_resourceTypesHasBeenSet = true;
    m_resourceTypes = std::forward<ResourceTypesT>(value);
  }
  template <typename ResourceTypesT = Aws::Vector<Aws::String>>
  ScanSetting& WithResourceTypes(ResourceTypesT&& value) {
    SetResourceTypes(std::forward<ResourceTypesT>(value));
    return *this;
  }
  template <typename ResourceTypesT = Aws::String>
  ScanSetting& AddResourceTypes(ResourceTypesT&& value) {
    m_resourceTypesHasBeenSet = true;
    m_resourceTypes.emplace_back(std::forward<ResourceTypesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that the scanner uses to
   * access resources; for example,
   * <code>arn:aws:iam::123456789012:role/ScannerRole</code>.</p>
   */
  inline const Aws::String& GetScannerRoleArn() const { return m_scannerRoleArn; }
  inline bool ScannerRoleArnHasBeenSet() const { return m_scannerRoleArnHasBeenSet; }
  template <typename ScannerRoleArnT = Aws::String>
  void SetScannerRoleArn(ScannerRoleArnT&& value) {
    m_scannerRoleArnHasBeenSet = true;
    m_scannerRoleArn = std::forward<ScannerRoleArnT>(value);
  }
  template <typename ScannerRoleArnT = Aws::String>
  ScanSetting& WithScannerRoleArn(ScannerRoleArnT&& value) {
    SetScannerRoleArn(std::forward<ScannerRoleArnT>(value));
    return *this;
  }
  ///@}
 private:
  MalwareScanner m_malwareScanner{MalwareScanner::NOT_SET};
  bool m_malwareScannerHasBeenSet = false;

  Aws::Vector<Aws::String> m_resourceTypes;
  bool m_resourceTypesHasBeenSet = false;

  Aws::String m_scannerRoleArn;
  bool m_scannerRoleArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
