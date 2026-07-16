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
 * <p>Identifies a built-in starter profile to use as the source when creating a
 * data transformation profile. Valid only when the source format is Consolidated
 * Clinical Document Architecture (C-CDA).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/StarterProfileSource">AWS
 * API Reference</a></p>
 */
class StarterProfileSource {
 public:
  AWS_HEALTHLAKE_API StarterProfileSource() = default;
  AWS_HEALTHLAKE_API StarterProfileSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API StarterProfileSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the built-in starter profile.</p>
   */
  inline const Aws::String& GetStarterProfileName() const { return m_starterProfileName; }
  inline bool StarterProfileNameHasBeenSet() const { return m_starterProfileNameHasBeenSet; }
  template <typename StarterProfileNameT = Aws::String>
  void SetStarterProfileName(StarterProfileNameT&& value) {
    m_starterProfileNameHasBeenSet = true;
    m_starterProfileName = std::forward<StarterProfileNameT>(value);
  }
  template <typename StarterProfileNameT = Aws::String>
  StarterProfileSource& WithStarterProfileName(StarterProfileNameT&& value) {
    SetStarterProfileName(std::forward<StarterProfileNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_starterProfileName;
  bool m_starterProfileNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
