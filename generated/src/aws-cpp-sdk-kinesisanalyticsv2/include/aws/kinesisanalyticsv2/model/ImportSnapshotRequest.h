/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Request.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/ImportSourceConfiguration.h>
#include <aws/kinesisanalyticsv2/model/SnapshotEncryptionConfiguration.h>
#include <aws/kinesisanalyticsv2/model/SnapshotFormat.h>
#include <aws/kinesisanalyticsv2/model/Tag.h>

#include <utility>

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {

/**
 */
class ImportSnapshotRequest : public KinesisAnalyticsV2Request {
 public:
  AWS_KINESISANALYTICSV2_API ImportSnapshotRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ImportSnapshot"; }

  AWS_KINESISANALYTICSV2_API Aws::String SerializePayload() const override;

  AWS_KINESISANALYTICSV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the enhanced snapshot. The name must be unique among the
   * snapshots in your account and Region. You can't reuse the name of an existing
   * snapshot, including a snapshot in the <code>FAILED</code> status, until you
   * delete that snapshot. Names that begin with <code>SYSTEMSNAPSHOT</code> are
   * reserved.</p>
   */
  inline const Aws::String& GetSnapshotName() const { return m_snapshotName; }
  inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }
  template <typename SnapshotNameT = Aws::String>
  void SetSnapshotName(SnapshotNameT&& value) {
    m_snapshotNameHasBeenSet = true;
    m_snapshotName = std::forward<SnapshotNameT>(value);
  }
  template <typename SnapshotNameT = Aws::String>
  ImportSnapshotRequest& WithSnapshotName(SnapshotNameT&& value) {
    SetSnapshotName(std::forward<SnapshotNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes the location, IAM role, and encryption configuration of the
   * savepoint data to import.</p>
   */
  inline const ImportSourceConfiguration& GetImportSourceConfiguration() const { return m_importSourceConfiguration; }
  inline bool ImportSourceConfigurationHasBeenSet() const { return m_importSourceConfigurationHasBeenSet; }
  template <typename ImportSourceConfigurationT = ImportSourceConfiguration>
  void SetImportSourceConfiguration(ImportSourceConfigurationT&& value) {
    m_importSourceConfigurationHasBeenSet = true;
    m_importSourceConfiguration = std::forward<ImportSourceConfigurationT>(value);
  }
  template <typename ImportSourceConfigurationT = ImportSourceConfiguration>
  ImportSnapshotRequest& WithImportSourceConfiguration(ImportSourceConfigurationT&& value) {
    SetImportSourceConfiguration(std::forward<ImportSourceConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encryption configuration of the imported snapshot. If you don't specify
   * this parameter, the snapshot is encrypted using a key of type
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
  ImportSnapshotRequest& WithDestinationEncryptionConfiguration(DestinationEncryptionConfigurationT&& value) {
    SetDestinationEncryptionConfiguration(std::forward<DestinationEncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary description of the snapshot.</p>
   */
  inline const Aws::String& GetSnapshotDescription() const { return m_snapshotDescription; }
  inline bool SnapshotDescriptionHasBeenSet() const { return m_snapshotDescriptionHasBeenSet; }
  template <typename SnapshotDescriptionT = Aws::String>
  void SetSnapshotDescription(SnapshotDescriptionT&& value) {
    m_snapshotDescriptionHasBeenSet = true;
    m_snapshotDescription = std::forward<SnapshotDescriptionT>(value);
  }
  template <typename SnapshotDescriptionT = Aws::String>
  ImportSnapshotRequest& WithSnapshotDescription(SnapshotDescriptionT&& value) {
    SetSnapshotDescription(std::forward<SnapshotDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The format of the snapshot being imported.</p>
   */
  inline SnapshotFormat GetSnapshotFormat() const { return m_snapshotFormat; }
  inline bool SnapshotFormatHasBeenSet() const { return m_snapshotFormatHasBeenSet; }
  inline void SetSnapshotFormat(SnapshotFormat value) {
    m_snapshotFormatHasBeenSet = true;
    m_snapshotFormat = value;
  }
  inline ImportSnapshotRequest& WithSnapshotFormat(SnapshotFormat value) {
    SetSnapshotFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of one or more tags to assign to the snapshot. A tag is a key-value
   * pair that identifies a snapshot. For more information, see <a
   * href="https://docs.aws.amazon.com/kinesisanalytics/latest/java/how-tagging.html">Using
   * Tagging</a>.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  ImportSnapshotRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  ImportSnapshotRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_snapshotName;

  ImportSourceConfiguration m_importSourceConfiguration;

  SnapshotEncryptionConfiguration m_destinationEncryptionConfiguration;

  Aws::String m_snapshotDescription;

  SnapshotFormat m_snapshotFormat{SnapshotFormat::NOT_SET};

  Aws::Vector<Tag> m_tags;
  bool m_snapshotNameHasBeenSet = false;
  bool m_importSourceConfigurationHasBeenSet = false;
  bool m_destinationEncryptionConfigurationHasBeenSet = false;
  bool m_snapshotDescriptionHasBeenSet = false;
  bool m_snapshotFormatHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
