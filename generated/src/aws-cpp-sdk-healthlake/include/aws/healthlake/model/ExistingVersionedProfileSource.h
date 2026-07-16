/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>

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
 * <p>Identifies an existing data transformation profile and version to clone when
 * creating a new profile.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ExistingVersionedProfileSource">AWS
 * API Reference</a></p>
 */
class ExistingVersionedProfileSource {
 public:
  AWS_HEALTHLAKE_API ExistingVersionedProfileSource() = default;
  AWS_HEALTHLAKE_API ExistingVersionedProfileSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API ExistingVersionedProfileSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the existing profile to clone from.</p>
   */
  inline const Aws::String& GetProfileId() const { return m_profileId; }
  inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
  template <typename ProfileIdT = Aws::String>
  void SetProfileId(ProfileIdT&& value) {
    m_profileIdHasBeenSet = true;
    m_profileId = std::forward<ProfileIdT>(value);
  }
  template <typename ProfileIdT = Aws::String>
  ExistingVersionedProfileSource& WithProfileId(ProfileIdT&& value) {
    SetProfileId(std::forward<ProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version number of the existing profile to clone from.</p>
   */
  inline int GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  inline void SetVersion(int value) {
    m_versionHasBeenSet = true;
    m_version = value;
  }
  inline ExistingVersionedProfileSource& WithVersion(int value) {
    SetVersion(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_profileId;

  int m_version{0};
  bool m_profileIdHasBeenSet = false;
  bool m_versionHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
