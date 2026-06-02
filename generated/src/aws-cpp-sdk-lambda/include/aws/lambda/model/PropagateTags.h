/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/PropagateTagsMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {

/**
 * <p>Configuration for tag propagation to managed resources launched by the
 * capacity provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PropagateTags">AWS
 * API Reference</a></p>
 */
class PropagateTags {
 public:
  AWS_LAMBDA_API PropagateTags() = default;
  AWS_LAMBDA_API PropagateTags(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API PropagateTags& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The tag propagation mode. Set to <code>Explicit</code> to propagate the tags
   * specified in <code>ExplicitTags</code> to managed resources. Set to
   * <code>None</code> to disable tag propagation.</p>
   */
  inline PropagateTagsMode GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  inline void SetMode(PropagateTagsMode value) {
    m_modeHasBeenSet = true;
    m_mode = value;
  }
  inline PropagateTags& WithMode(PropagateTagsMode value) {
    SetMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of tags to apply to managed resources when <code>Mode</code> is set to
   * <code>Explicit</code>. You can specify up to 40 tags.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetExplicitTags() const { return m_explicitTags; }
  inline bool ExplicitTagsHasBeenSet() const { return m_explicitTagsHasBeenSet; }
  template <typename ExplicitTagsT = Aws::Map<Aws::String, Aws::String>>
  void SetExplicitTags(ExplicitTagsT&& value) {
    m_explicitTagsHasBeenSet = true;
    m_explicitTags = std::forward<ExplicitTagsT>(value);
  }
  template <typename ExplicitTagsT = Aws::Map<Aws::String, Aws::String>>
  PropagateTags& WithExplicitTags(ExplicitTagsT&& value) {
    SetExplicitTags(std::forward<ExplicitTagsT>(value));
    return *this;
  }
  template <typename ExplicitTagsKeyT = Aws::String, typename ExplicitTagsValueT = Aws::String>
  PropagateTags& AddExplicitTags(ExplicitTagsKeyT&& key, ExplicitTagsValueT&& value) {
    m_explicitTagsHasBeenSet = true;
    m_explicitTags.emplace(std::forward<ExplicitTagsKeyT>(key), std::forward<ExplicitTagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  PropagateTagsMode m_mode{PropagateTagsMode::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_explicitTags;
  bool m_modeHasBeenSet = false;
  bool m_explicitTagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
