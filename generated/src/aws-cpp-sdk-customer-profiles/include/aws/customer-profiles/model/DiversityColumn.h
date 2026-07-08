/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/DiversityCapType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {

/**
 * <p>Defines a diversity constraint for a single item column, specifying a cap
 * type and a target value or placeholder that controls how many recommended items
 * may share the same column value.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/DiversityColumn">AWS
 * API Reference</a></p>
 */
class DiversityColumn {
 public:
  AWS_CUSTOMERPROFILES_API DiversityColumn() = default;
  AWS_CUSTOMERPROFILES_API DiversityColumn(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API DiversityColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the item catalog column on which to apply the diversity cap. The
   * column must be defined in the recommender schema.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DiversityColumn& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of diversity cap to apply. Valid values are <code>PERCENTAGE</code>
   * (interpret <code>Target</code> as a percentage of returned items) and
   * <code>VALUE</code> (interpret <code>Target</code> as an absolute count).</p>
   */
  inline DiversityCapType GetCapType() const { return m_capType; }
  inline bool CapTypeHasBeenSet() const { return m_capTypeHasBeenSet; }
  inline void SetCapType(DiversityCapType value) {
    m_capTypeHasBeenSet = true;
    m_capType = value;
  }
  inline DiversityColumn& WithCapType(DiversityCapType value) {
    SetCapType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The diversity cap target. Either an integer literal (for example,
   * <code>"25"</code>) or a placeholder expression of the form <code>$name</code>
   * whose value is supplied at inference time through
   * <code>GetProfileRecommendations</code>.</p>
   */
  inline const Aws::String& GetTarget() const { return m_target; }
  inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
  template <typename TargetT = Aws::String>
  void SetTarget(TargetT&& value) {
    m_targetHasBeenSet = true;
    m_target = std::forward<TargetT>(value);
  }
  template <typename TargetT = Aws::String>
  DiversityColumn& WithTarget(TargetT&& value) {
    SetTarget(std::forward<TargetT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  DiversityCapType m_capType{DiversityCapType::NOT_SET};

  Aws::String m_target;
  bool m_nameHasBeenSet = false;
  bool m_capTypeHasBeenSet = false;
  bool m_targetHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
