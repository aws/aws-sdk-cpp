/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
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
 * <p>Contains raw content to use as the source when creating a data transformation
 * profile directly from a mapping.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ProfileMappingSource">AWS
 * API Reference</a></p>
 */
class ProfileMappingSource {
 public:
  AWS_HEALTHLAKE_API ProfileMappingSource() = default;
  AWS_HEALTHLAKE_API ProfileMappingSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API ProfileMappingSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The content as a map of file paths to profile strings.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetProfileMapping() const { return m_profileMapping; }
  inline bool ProfileMappingHasBeenSet() const { return m_profileMappingHasBeenSet; }
  template <typename ProfileMappingT = Aws::Map<Aws::String, Aws::String>>
  void SetProfileMapping(ProfileMappingT&& value) {
    m_profileMappingHasBeenSet = true;
    m_profileMapping = std::forward<ProfileMappingT>(value);
  }
  template <typename ProfileMappingT = Aws::Map<Aws::String, Aws::String>>
  ProfileMappingSource& WithProfileMapping(ProfileMappingT&& value) {
    SetProfileMapping(std::forward<ProfileMappingT>(value));
    return *this;
  }
  template <typename ProfileMappingKeyT = Aws::String, typename ProfileMappingValueT = Aws::String>
  ProfileMappingSource& AddProfileMapping(ProfileMappingKeyT&& key, ProfileMappingValueT&& value) {
    m_profileMappingHasBeenSet = true;
    m_profileMapping.emplace(std::forward<ProfileMappingKeyT>(key), std::forward<ProfileMappingValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_profileMapping;
  bool m_profileMappingHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
