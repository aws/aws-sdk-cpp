/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConfigService {
namespace Model {

/**
 * <p>Defines which resources trigger an evaluation for the Config rules in a
 * conformance pack. The scope is a tag key, or a combination of a tag key and
 * value, that is applied to every rule in the conformance pack. Specify a scope to
 * constrain which resources trigger an evaluation for the rules. Otherwise,
 * evaluations of rules in the conformance pack are triggered when any resource in
 * your recording group changes in configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConformancePackScope">AWS
 * API Reference</a></p>
 */
class ConformancePackScope {
 public:
  AWS_CONFIGSERVICE_API ConformancePackScope() = default;
  AWS_CONFIGSERVICE_API ConformancePackScope(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONFIGSERVICE_API ConformancePackScope& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The tag key that applies to only those Amazon Web Services resources that you
   * want to trigger an evaluation for the rules in the conformance pack. Defines the
   * <a>Scope$TagKey</a> of all Config rules in the conformance pack. </p>
   */
  inline const Aws::String& GetTagKey() const { return m_tagKey; }
  inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }
  template <typename TagKeyT = Aws::String>
  void SetTagKey(TagKeyT&& value) {
    m_tagKeyHasBeenSet = true;
    m_tagKey = std::forward<TagKeyT>(value);
  }
  template <typename TagKeyT = Aws::String>
  ConformancePackScope& WithTagKey(TagKeyT&& value) {
    SetTagKey(std::forward<TagKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tag value that applies to only those Amazon Web Services resources that
   * you want to trigger an evaluation for the rules in the conformance pack. If you
   * do not specify a value for <code>TagValue</code>, resources that have the tag
   * key <code>TagKey</code> trigger an evaluation, regardless of the tag value.
   * Defines the <a>Scope$TagValue</a> of all Config rules in the conformance pack.
   * </p>
   */
  inline const Aws::String& GetTagValue() const { return m_tagValue; }
  inline bool TagValueHasBeenSet() const { return m_tagValueHasBeenSet; }
  template <typename TagValueT = Aws::String>
  void SetTagValue(TagValueT&& value) {
    m_tagValueHasBeenSet = true;
    m_tagValue = std::forward<TagValueT>(value);
  }
  template <typename TagValueT = Aws::String>
  ConformancePackScope& WithTagValue(TagValueT&& value) {
    SetTagValue(std::forward<TagValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tagKey;

  Aws::String m_tagValue;
  bool m_tagKeyHasBeenSet = false;
  bool m_tagValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
