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
 * <p>Describes the destination of the exported snapshot data.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ExportDestinationConfiguration">AWS
 * API Reference</a></p>
 */
class ExportDestinationConfiguration {
 public:
  AWS_KINESISANALYTICSV2_API ExportDestinationConfiguration() = default;
  AWS_KINESISANALYTICSV2_API ExportDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API ExportDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the destination location. The only supported value is
   * <code>S3</code>.</p>
   */
  inline StorageLocationType GetDestinationType() const { return m_destinationType; }
  inline bool DestinationTypeHasBeenSet() const { return m_destinationTypeHasBeenSet; }
  inline void SetDestinationType(StorageLocationType value) {
    m_destinationTypeHasBeenSet = true;
    m_destinationType = value;
  }
  inline ExportDestinationConfiguration& WithDestinationType(StorageLocationType value) {
    SetDestinationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role that Managed Service for Apache Flink assumes to
   * write the snapshot data to the destination location. For information about the
   * permissions that this role requires, see <a
   * href="https://docs.aws.amazon.com/managed-flink/latest/java/snapshots-import-export.html">Import
   * and export</a>.</p>
   */
  inline const Aws::String& GetExportRoleArn() const { return m_exportRoleArn; }
  inline bool ExportRoleArnHasBeenSet() const { return m_exportRoleArnHasBeenSet; }
  template <typename ExportRoleArnT = Aws::String>
  void SetExportRoleArn(ExportRoleArnT&& value) {
    m_exportRoleArnHasBeenSet = true;
    m_exportRoleArn = std::forward<ExportRoleArnT>(value);
  }
  template <typename ExportRoleArnT = Aws::String>
  ExportDestinationConfiguration& WithExportRoleArn(ExportRoleArnT&& value) {
    SetExportRoleArn(std::forward<ExportRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encryption configuration of the exported snapshot data. If you don't
   * specify this parameter, Managed Service for Apache Flink uses a key of type
   * <code>AWS_OWNED_KEY</code>. If you specify a KMS key, you must specify the key
   * ARN.</p>
   */
  inline const SnapshotEncryptionConfiguration& GetDestinationEncryptionConfiguration() const {
    return m_destinationEncryptionConfiguration;
  }
  inline bool DestinationEncryptionConfigurationHasBeenSet() const { return m_destinationEncryptionConfigurationHasBeenSet; }
  template <typename DestinationEncryptionConfigurationT = SnapshotEncryptionConfiguration>
  void SetDestinationEncryptionConfiguration(DestinationEncryptionConfigurationT&& value) {
    m_destinationEncryptionConfigurationHasBeenSet = true;
    m_destinationEncryptionConfiguration = std::forward<DestinationEncryptionConfigurationT>(value);
  }
  template <typename DestinationEncryptionConfigurationT = SnapshotEncryptionConfiguration>
  ExportDestinationConfiguration& WithDestinationEncryptionConfiguration(DestinationEncryptionConfigurationT&& value) {
    SetDestinationEncryptionConfiguration(std::forward<DestinationEncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 bucket and key prefix to export the snapshot data to. Managed
   * Service for Apache Flink writes the data under a unique prefix that it appends
   * to the key prefix that you specify. After the export completes, use
   * <code>DescribeSnapshotOperation</code> to get the full prefix. The bucket must
   * be owned by your account and must be in the same Region as the request.</p>
   */
  inline const S3PrefixLocation& GetDestinationS3PrefixLocation() const { return m_destinationS3PrefixLocation; }
  inline bool DestinationS3PrefixLocationHasBeenSet() const { return m_destinationS3PrefixLocationHasBeenSet; }
  template <typename DestinationS3PrefixLocationT = S3PrefixLocation>
  void SetDestinationS3PrefixLocation(DestinationS3PrefixLocationT&& value) {
    m_destinationS3PrefixLocationHasBeenSet = true;
    m_destinationS3PrefixLocation = std::forward<DestinationS3PrefixLocationT>(value);
  }
  template <typename DestinationS3PrefixLocationT = S3PrefixLocation>
  ExportDestinationConfiguration& WithDestinationS3PrefixLocation(DestinationS3PrefixLocationT&& value) {
    SetDestinationS3PrefixLocation(std::forward<DestinationS3PrefixLocationT>(value));
    return *this;
  }
  ///@}
 private:
  StorageLocationType m_destinationType{StorageLocationType::NOT_SET};

  Aws::String m_exportRoleArn;

  SnapshotEncryptionConfiguration m_destinationEncryptionConfiguration;

  S3PrefixLocation m_destinationS3PrefixLocation;
  bool m_destinationTypeHasBeenSet = false;
  bool m_exportRoleArnHasBeenSet = false;
  bool m_destinationEncryptionConfigurationHasBeenSet = false;
  bool m_destinationS3PrefixLocationHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
