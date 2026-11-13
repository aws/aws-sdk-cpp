/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/S3PrefixLocation.h>
#include <aws/kinesisanalyticsv2/model/SnapshotEncryptionConfiguration.h>
#include <aws/kinesisanalyticsv2/model/StorageLocationType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace KinesisAnalyticsV2 {
namespace Model {

/**
 * <p>Describes the source of the savepoint data to import.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ImportSourceConfiguration">AWS
 * API Reference</a></p>
 */
class ImportSourceConfiguration {
 public:
  AWS_KINESISANALYTICSV2_API ImportSourceConfiguration() = default;
  AWS_KINESISANALYTICSV2_API ImportSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API ImportSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the source location. The only supported value is
   * <code>S3</code>.</p>
   */
  inline StorageLocationType GetSourceType() const { return m_sourceType; }
  inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
  inline void SetSourceType(StorageLocationType value) {
    m_sourceTypeHasBeenSet = true;
    m_sourceType = value;
  }
  inline ImportSourceConfiguration& WithSourceType(StorageLocationType value) {
    SetSourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role that Managed Service for Apache Flink assumes to read
   * the savepoint data from the source location. For information about the
   * permissions that this role requires, see <a
   * href="https://docs.aws.amazon.com/managed-flink/latest/java/snapshots-import-export.html">Import
   * and export</a>.</p>
   */
  inline const Aws::String& GetImportRoleArn() const { return m_importRoleArn; }
  inline bool ImportRoleArnHasBeenSet() const { return m_importRoleArnHasBeenSet; }
  template <typename ImportRoleArnT = Aws::String>
  void SetImportRoleArn(ImportRoleArnT&& value) {
    m_importRoleArnHasBeenSet = true;
    m_importRoleArn = std::forward<ImportRoleArnT>(value);
  }
  template <typename ImportRoleArnT = Aws::String>
  ImportSourceConfiguration& WithImportRoleArn(ImportRoleArnT&& value) {
    SetImportRoleArn(std::forward<ImportRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encryption configuration of the savepoint data at the source location. If
   * you don't specify this parameter, Managed Service for Apache Flink uses a key of
   * type <code>AWS_OWNED_KEY</code>. If you specify a KMS key, you must specify the
   * key ARN.</p>
   */
  inline const SnapshotEncryptionConfiguration& GetSourceEncryptionConfiguration() const { return m_sourceEncryptionConfiguration; }
  inline bool SourceEncryptionConfigurationHasBeenSet() const { return m_sourceEncryptionConfigurationHasBeenSet; }
  template <typename SourceEncryptionConfigurationT = SnapshotEncryptionConfiguration>
  void SetSourceEncryptionConfiguration(SourceEncryptionConfigurationT&& value) {
    m_sourceEncryptionConfigurationHasBeenSet = true;
    m_sourceEncryptionConfiguration = std::forward<SourceEncryptionConfigurationT>(value);
  }
  template <typename SourceEncryptionConfigurationT = SnapshotEncryptionConfiguration>
  ImportSourceConfiguration& WithSourceEncryptionConfiguration(SourceEncryptionConfigurationT&& value) {
    SetSourceEncryptionConfiguration(std::forward<SourceEncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 bucket and key prefix that contain the savepoint data to
   * import. The bucket must be owned by your account and must be in the same Region
   * as the request.</p>
   */
  inline const S3PrefixLocation& GetSourceS3PrefixLocation() const { return m_sourceS3PrefixLocation; }
  inline bool SourceS3PrefixLocationHasBeenSet() const { return m_sourceS3PrefixLocationHasBeenSet; }
  template <typename SourceS3PrefixLocationT = S3PrefixLocation>
  void SetSourceS3PrefixLocation(SourceS3PrefixLocationT&& value) {
    m_sourceS3PrefixLocationHasBeenSet = true;
    m_sourceS3PrefixLocation = std::forward<SourceS3PrefixLocationT>(value);
  }
  template <typename SourceS3PrefixLocationT = S3PrefixLocation>
  ImportSourceConfiguration& WithSourceS3PrefixLocation(SourceS3PrefixLocationT&& value) {
    SetSourceS3PrefixLocation(std::forward<SourceS3PrefixLocationT>(value));
    return *this;
  }
  ///@}
 private:
  StorageLocationType m_sourceType{StorageLocationType::NOT_SET};

  Aws::String m_importRoleArn;

  SnapshotEncryptionConfiguration m_sourceEncryptionConfiguration;

  S3PrefixLocation m_sourceS3PrefixLocation;
  bool m_sourceTypeHasBeenSet = false;
  bool m_importRoleArnHasBeenSet = false;
  bool m_sourceEncryptionConfigurationHasBeenSet = false;
  bool m_sourceS3PrefixLocationHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
