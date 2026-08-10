/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {

/**
 * <p>Contains information about one competitor in a fixture. It is used in the
 * FixtureSummary that is in the SearchFixtures response. </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/Competitor">AWS
 * API Reference</a></p>
 */
class Competitor {
 public:
  AWS_ELEMENTALINFERENCE_API Competitor() = default;
  AWS_ELEMENTALINFERENCE_API Competitor(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Competitor& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the competitor, as provided by the data source.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Competitor& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether this competitor is the home side in the fixture. If true,
   * this competitor is the home side. If false, this competitor is the away side.
   * </p>
   */
  inline bool GetIsHome() const { return m_isHome; }
  inline bool IsHomeHasBeenSet() const { return m_isHomeHasBeenSet; }
  inline void SetIsHome(bool value) {
    m_isHomeHasBeenSet = true;
    m_isHome = value;
  }
  inline Competitor& WithIsHome(bool value) {
    SetIsHome(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  bool m_isHome{false};
  bool m_nameHasBeenSet = false;
  bool m_isHomeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
