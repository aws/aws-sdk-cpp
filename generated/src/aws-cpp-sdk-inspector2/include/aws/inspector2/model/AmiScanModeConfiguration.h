/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/AmiScanMode.h>
#include <aws/inspector2/model/AmiTagFilter.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>The scan mode configuration that determines which Amazon Machine Images
 * (AMIs) are scanned.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AmiScanModeConfiguration">AWS
 * API Reference</a></p>
 */
class AmiScanModeConfiguration {
 public:
  AWS_INSPECTOR2_API AmiScanModeConfiguration() = default;
  AWS_INSPECTOR2_API AmiScanModeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API AmiScanModeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The scan mode that determines whether all AMIs are scanned or only those
   * matching the specified tags.</p>
   */
  inline AmiScanMode GetScanMode() const { return m_scanMode; }
  inline bool ScanModeHasBeenSet() const { return m_scanModeHasBeenSet; }
  inline void SetScanMode(AmiScanMode value) {
    m_scanModeHasBeenSet = true;
    m_scanMode = value;
  }
  inline AmiScanModeConfiguration& WithScanMode(AmiScanMode value) {
    SetScanMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tag filters used to select which AMIs are scanned when using targeted
   * scanning.</p>
   */
  inline const Aws::Vector<AmiTagFilter>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<AmiTagFilter>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<AmiTagFilter>>
  AmiScanModeConfiguration& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = AmiTagFilter>
  AmiScanModeConfiguration& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to exclude AMIs that are copies of other AMIs from scanning.</p>
   */
  inline bool GetExcludeCopiedAmis() const { return m_excludeCopiedAmis; }
  inline bool ExcludeCopiedAmisHasBeenSet() const { return m_excludeCopiedAmisHasBeenSet; }
  inline void SetExcludeCopiedAmis(bool value) {
    m_excludeCopiedAmisHasBeenSet = true;
    m_excludeCopiedAmis = value;
  }
  inline AmiScanModeConfiguration& WithExcludeCopiedAmis(bool value) {
    SetExcludeCopiedAmis(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to exclude AMIs created by Amazon Data Lifecycle Manager (DLM)
   * backups from scanning.</p>
   */
  inline bool GetExcludeBackupDlmAmis() const { return m_excludeBackupDlmAmis; }
  inline bool ExcludeBackupDlmAmisHasBeenSet() const { return m_excludeBackupDlmAmisHasBeenSet; }
  inline void SetExcludeBackupDlmAmis(bool value) {
    m_excludeBackupDlmAmisHasBeenSet = true;
    m_excludeBackupDlmAmis = value;
  }
  inline AmiScanModeConfiguration& WithExcludeBackupDlmAmis(bool value) {
    SetExcludeBackupDlmAmis(value);
    return *this;
  }
  ///@}
 private:
  AmiScanMode m_scanMode{AmiScanMode::NOT_SET};

  Aws::Vector<AmiTagFilter> m_tags;

  bool m_excludeCopiedAmis{false};

  bool m_excludeBackupDlmAmis{false};
  bool m_scanModeHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_excludeCopiedAmisHasBeenSet = false;
  bool m_excludeBackupDlmAmisHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
