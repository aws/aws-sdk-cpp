/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/SourceFormat.h>
#include <aws/healthlake/model/TargetFormat.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace HealthLake {
namespace Model {

/**
 * <p>Contains summary information about a specific version of a data
 * transformation profile. To retrieve profile content, call
 * <code>GetDataTransformationProfile</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DataTransformationProfileVersionSummary">AWS
 * API Reference</a></p>
 */
class DataTransformationProfileVersionSummary {
 public:
  AWS_HEALTHLAKE_API DataTransformationProfileVersionSummary() = default;
  AWS_HEALTHLAKE_API DataTransformationProfileVersionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API DataTransformationProfileVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the profile.</p>
   */
  inline const Aws::String& GetProfileId() const { return m_profileId; }
  inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
  template <typename ProfileIdT = Aws::String>
  void SetProfileId(ProfileIdT&& value) {
    m_profileIdHasBeenSet = true;
    m_profileId = std::forward<ProfileIdT>(value);
  }
  template <typename ProfileIdT = Aws::String>
  DataTransformationProfileVersionSummary& WithProfileId(ProfileIdT&& value) {
    SetProfileId(std::forward<ProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version number.</p>
   */
  inline int GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  inline void SetVersion(int value) {
    m_versionHasBeenSet = true;
    m_version = value;
  }
  inline DataTransformationProfileVersionSummary& WithVersion(int value) {
    SetVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source data format that this profile converts from.</p>
   */
  inline SourceFormat GetSourceFormat() const { return m_sourceFormat; }
  inline bool SourceFormatHasBeenSet() const { return m_sourceFormatHasBeenSet; }
  inline void SetSourceFormat(SourceFormat value) {
    m_sourceFormatHasBeenSet = true;
    m_sourceFormat = value;
  }
  inline DataTransformationProfileVersionSummary& WithSourceFormat(SourceFormat value) {
    SetSourceFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target output format of the profile.</p>
   */
  inline TargetFormat GetTargetFormat() const { return m_targetFormat; }
  inline bool TargetFormatHasBeenSet() const { return m_targetFormatHasBeenSet; }
  inline void SetTargetFormat(TargetFormat value) {
    m_targetFormatHasBeenSet = true;
    m_targetFormat = value;
  }
  inline DataTransformationProfileVersionSummary& WithTargetFormat(TargetFormat value) {
    SetTargetFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the profile.</p>
   */
  inline const Aws::String& GetProfileName() const { return m_profileName; }
  inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
  template <typename ProfileNameT = Aws::String>
  void SetProfileName(ProfileNameT&& value) {
    m_profileNameHasBeenSet = true;
    m_profileName = std::forward<ProfileNameT>(value);
  }
  template <typename ProfileNameT = Aws::String>
  DataTransformationProfileVersionSummary& WithProfileName(ProfileNameT&& value) {
    SetProfileName(std::forward<ProfileNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of what changed in this version.</p>
   */
  inline const Aws::String& GetChangeDescription() const { return m_changeDescription; }
  inline bool ChangeDescriptionHasBeenSet() const { return m_changeDescriptionHasBeenSet; }
  template <typename ChangeDescriptionT = Aws::String>
  void SetChangeDescription(ChangeDescriptionT&& value) {
    m_changeDescriptionHasBeenSet = true;
    m_changeDescription = std::forward<ChangeDescriptionT>(value);
  }
  template <typename ChangeDescriptionT = Aws::String>
  DataTransformationProfileVersionSummary& WithChangeDescription(ChangeDescriptionT&& value) {
    SetChangeDescription(std::forward<ChangeDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when this version was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  DataTransformationProfileVersionSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_profileId;

  int m_version{0};

  SourceFormat m_sourceFormat{SourceFormat::NOT_SET};

  TargetFormat m_targetFormat{TargetFormat::NOT_SET};

  Aws::String m_profileName;

  Aws::String m_changeDescription;

  Aws::Utils::DateTime m_lastUpdatedAt{};
  bool m_profileIdHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_sourceFormatHasBeenSet = false;
  bool m_targetFormatHasBeenSet = false;
  bool m_profileNameHasBeenSet = false;
  bool m_changeDescriptionHasBeenSet = false;
  bool m_lastUpdatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
