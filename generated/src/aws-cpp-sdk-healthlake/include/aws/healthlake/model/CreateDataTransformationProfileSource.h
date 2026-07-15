/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/ExistingVersionedProfileSource.h>
#include <aws/healthlake/model/ProfileMappingSource.h>
#include <aws/healthlake/model/SampleDataSource.h>
#include <aws/healthlake/model/StarterProfileSource.h>

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
 * <p>The source for initial content when creating a data transformation profile.
 * Specify exactly one variant: a built-in starter profile, an existing profile
 * version to clone, raw profile content, or a sample data file.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/CreateDataTransformationProfileSource">AWS
 * API Reference</a></p>
 */
class CreateDataTransformationProfileSource {
 public:
  AWS_HEALTHLAKE_API CreateDataTransformationProfileSource() = default;
  AWS_HEALTHLAKE_API CreateDataTransformationProfileSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API CreateDataTransformationProfileSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Creates the profile from a built-in starter profile. Valid only when the
   * source format is Consolidated Clinical Document Architecture (C-CDA).</p>
   */
  inline const StarterProfileSource& GetStarterProfile() const { return m_starterProfile; }
  inline bool StarterProfileHasBeenSet() const { return m_starterProfileHasBeenSet; }
  template <typename StarterProfileT = StarterProfileSource>
  void SetStarterProfile(StarterProfileT&& value) {
    m_starterProfileHasBeenSet = true;
    m_starterProfile = std::forward<StarterProfileT>(value);
  }
  template <typename StarterProfileT = StarterProfileSource>
  CreateDataTransformationProfileSource& WithStarterProfile(StarterProfileT&& value) {
    SetStarterProfile(std::forward<StarterProfileT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Creates the profile by cloning an existing profile at a specific version.</p>
   */
  inline const ExistingVersionedProfileSource& GetExistingVersionedProfileId() const { return m_existingVersionedProfileId; }
  inline bool ExistingVersionedProfileIdHasBeenSet() const { return m_existingVersionedProfileIdHasBeenSet; }
  template <typename ExistingVersionedProfileIdT = ExistingVersionedProfileSource>
  void SetExistingVersionedProfileId(ExistingVersionedProfileIdT&& value) {
    m_existingVersionedProfileIdHasBeenSet = true;
    m_existingVersionedProfileId = std::forward<ExistingVersionedProfileIdT>(value);
  }
  template <typename ExistingVersionedProfileIdT = ExistingVersionedProfileSource>
  CreateDataTransformationProfileSource& WithExistingVersionedProfileId(ExistingVersionedProfileIdT&& value) {
    SetExistingVersionedProfileId(std::forward<ExistingVersionedProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Creates the profile from raw profile content that you provide directly. Use
   * this variant for continuous integration and continuous delivery (CI/CD)
   * workflows.</p>
   */
  inline const ProfileMappingSource& GetProfileMapping() const { return m_profileMapping; }
  inline bool ProfileMappingHasBeenSet() const { return m_profileMappingHasBeenSet; }
  template <typename ProfileMappingT = ProfileMappingSource>
  void SetProfileMapping(ProfileMappingT&& value) {
    m_profileMappingHasBeenSet = true;
    m_profileMapping = std::forward<ProfileMappingT>(value);
  }
  template <typename ProfileMappingT = ProfileMappingSource>
  CreateDataTransformationProfileSource& WithProfileMapping(ProfileMappingT&& value) {
    SetProfileMapping(std::forward<ProfileMappingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Creates the profile from a sample data file stored in Amazon S3. Valid only
   * when the source format is Comma-separated values (CSV).</p>
   */
  inline const SampleDataSource& GetSampleData() const { return m_sampleData; }
  inline bool SampleDataHasBeenSet() const { return m_sampleDataHasBeenSet; }
  template <typename SampleDataT = SampleDataSource>
  void SetSampleData(SampleDataT&& value) {
    m_sampleDataHasBeenSet = true;
    m_sampleData = std::forward<SampleDataT>(value);
  }
  template <typename SampleDataT = SampleDataSource>
  CreateDataTransformationProfileSource& WithSampleData(SampleDataT&& value) {
    SetSampleData(std::forward<SampleDataT>(value));
    return *this;
  }
  ///@}
 private:
  StarterProfileSource m_starterProfile;

  ExistingVersionedProfileSource m_existingVersionedProfileId;

  ProfileMappingSource m_profileMapping;

  SampleDataSource m_sampleData;
  bool m_starterProfileHasBeenSet = false;
  bool m_existingVersionedProfileIdHasBeenSet = false;
  bool m_profileMappingHasBeenSet = false;
  bool m_sampleDataHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
