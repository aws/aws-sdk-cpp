/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Request.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/Tag.h>

#include <utility>

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {

/**
 */
class CreateSnapshotRequest : public KinesisAnalyticsV2Request {
 public:
  AWS_KINESISANALYTICSV2_API CreateSnapshotRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateSnapshot"; }

  AWS_KINESISANALYTICSV2_API Aws::String SerializePayload() const override;

  AWS_KINESISANALYTICSV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline const Aws::String& GetApplicationName() const { return m_applicationName; }
  inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
  template <typename ApplicationNameT = Aws::String>
  void SetApplicationName(ApplicationNameT&& value) {
    m_applicationNameHasBeenSet = true;
    m_applicationName = std::forward<ApplicationNameT>(value);
  }
  template <typename ApplicationNameT = Aws::String>
  CreateSnapshotRequest& WithApplicationName(ApplicationNameT&& value) {
    SetApplicationName(std::forward<ApplicationNameT>(value));
    return *this;
  }
  ///@}

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
  CreateSnapshotRequest& WithSnapshotName(SnapshotNameT&& value) {
    SetSnapshotName(std::forward<SnapshotNameT>(value));
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
  CreateSnapshotRequest& WithSnapshotDescription(SnapshotDescriptionT&& value) {
    SetSnapshotDescription(std::forward<SnapshotDescriptionT>(value));
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
  CreateSnapshotRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateSnapshotRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationName;

  Aws::String m_snapshotName;

  Aws::String m_snapshotDescription;

  Aws::Vector<Tag> m_tags;
  bool m_applicationNameHasBeenSet = false;
  bool m_snapshotNameHasBeenSet = false;
  bool m_snapshotDescriptionHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
