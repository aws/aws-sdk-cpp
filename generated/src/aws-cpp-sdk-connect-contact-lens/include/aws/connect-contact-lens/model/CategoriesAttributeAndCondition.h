/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>
#include <aws/connect-contact-lens/model/TagCondition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectContactLens {
namespace Model {

/**
 * <p>A list of tag conditions that the filter evaluates together using AND logic.
 * A category segment matches only when the tags on its rule satisfy every tag
 * condition in the list.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-contact-lens-2020-08-21/CategoriesAttributeAndCondition">AWS
 * API Reference</a></p>
 */
class CategoriesAttributeAndCondition {
 public:
  AWS_CONNECTCONTACTLENS_API CategoriesAttributeAndCondition() = default;
  AWS_CONNECTCONTACTLENS_API CategoriesAttributeAndCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCONTACTLENS_API CategoriesAttributeAndCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCONTACTLENS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of tag conditions. All of the tag conditions must be met for the
   * condition to match.</p>
   */
  inline const Aws::Vector<TagCondition>& GetTagConditions() const { return m_tagConditions; }
  inline bool TagConditionsHasBeenSet() const { return m_tagConditionsHasBeenSet; }
  template <typename TagConditionsT = Aws::Vector<TagCondition>>
  void SetTagConditions(TagConditionsT&& value) {
    m_tagConditionsHasBeenSet = true;
    m_tagConditions = std::forward<TagConditionsT>(value);
  }
  template <typename TagConditionsT = Aws::Vector<TagCondition>>
  CategoriesAttributeAndCondition& WithTagConditions(TagConditionsT&& value) {
    SetTagConditions(std::forward<TagConditionsT>(value));
    return *this;
  }
  template <typename TagConditionsT = TagCondition>
  CategoriesAttributeAndCondition& AddTagConditions(TagConditionsT&& value) {
    m_tagConditionsHasBeenSet = true;
    m_tagConditions.emplace_back(std::forward<TagConditionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TagCondition> m_tagConditions;
  bool m_tagConditionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectContactLens
}  // namespace Aws
