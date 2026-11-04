/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>
#include <aws/connect-contact-lens/model/TagComparisonType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>A tag condition that consists of a tag key, a tag value, and a comparison
 * operator.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-contact-lens-2020-08-21/TagCondition">AWS
 * API Reference</a></p>
 */
class TagCondition {
 public:
  AWS_CONNECTCONTACTLENS_API TagCondition() = default;
  AWS_CONNECTCONTACTLENS_API TagCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCONTACTLENS_API TagCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCONTACTLENS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The tag key in the tag condition.</p>
   */
  inline const Aws::String& GetTagKey() const { return m_tagKey; }
  inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }
  template <typename TagKeyT = Aws::String>
  void SetTagKey(TagKeyT&& value) {
    m_tagKeyHasBeenSet = true;
    m_tagKey = std::forward<TagKeyT>(value);
  }
  template <typename TagKeyT = Aws::String>
  TagCondition& WithTagKey(TagKeyT&& value) {
    SetTagKey(std::forward<TagKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tag value in the tag condition.</p>
   */
  inline const Aws::String& GetTagValue() const { return m_tagValue; }
  inline bool TagValueHasBeenSet() const { return m_tagValueHasBeenSet; }
  template <typename TagValueT = Aws::String>
  void SetTagValue(TagValueT&& value) {
    m_tagValueHasBeenSet = true;
    m_tagValue = std::forward<TagValueT>(value);
  }
  template <typename TagValueT = Aws::String>
  TagCondition& WithTagValue(TagValueT&& value) {
    SetTagValue(std::forward<TagValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The comparison operator for the tag condition. Valid values:
   * <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p>
   */
  inline TagComparisonType GetComparisonType() const { return m_comparisonType; }
  inline bool ComparisonTypeHasBeenSet() const { return m_comparisonTypeHasBeenSet; }
  inline void SetComparisonType(TagComparisonType value) {
    m_comparisonTypeHasBeenSet = true;
    m_comparisonType = value;
  }
  inline TagCondition& WithComparisonType(TagComparisonType value) {
    SetComparisonType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_tagKey;

  Aws::String m_tagValue;

  TagComparisonType m_comparisonType{TagComparisonType::NOT_SET};
  bool m_tagKeyHasBeenSet = false;
  bool m_tagValueHasBeenSet = false;
  bool m_comparisonTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectContactLens
}  // namespace Aws
