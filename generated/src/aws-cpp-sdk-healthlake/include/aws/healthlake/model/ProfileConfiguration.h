/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>The profile configuration for a data store.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ProfileConfiguration">AWS
 * API Reference</a></p>
 */
class ProfileConfiguration {
 public:
  AWS_HEALTHLAKE_API ProfileConfiguration() = default;
  AWS_HEALTHLAKE_API ProfileConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API ProfileConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of default profiles for the data store.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDefaultProfiles() const { return m_defaultProfiles; }
  inline bool DefaultProfilesHasBeenSet() const { return m_defaultProfilesHasBeenSet; }
  template <typename DefaultProfilesT = Aws::Vector<Aws::String>>
  void SetDefaultProfiles(DefaultProfilesT&& value) {
    m_defaultProfilesHasBeenSet = true;
    m_defaultProfiles = std::forward<DefaultProfilesT>(value);
  }
  template <typename DefaultProfilesT = Aws::Vector<Aws::String>>
  ProfileConfiguration& WithDefaultProfiles(DefaultProfilesT&& value) {
    SetDefaultProfiles(std::forward<DefaultProfilesT>(value));
    return *this;
  }
  template <typename DefaultProfilesT = Aws::String>
  ProfileConfiguration& AddDefaultProfiles(DefaultProfilesT&& value) {
    m_defaultProfilesHasBeenSet = true;
    m_defaultProfiles.emplace_back(std::forward<DefaultProfilesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_defaultProfiles;
  bool m_defaultProfilesHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
