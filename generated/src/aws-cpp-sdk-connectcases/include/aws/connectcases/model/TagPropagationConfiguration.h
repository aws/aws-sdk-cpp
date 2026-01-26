/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/TagPropagationResourceType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectCases {
namespace Model {

/**
 * <p>Defines tag propagation configuration for resources created within a domain.
 * Tags specified here will be automatically applied to resources being created for
 * the specified resource type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/TagPropagationConfiguration">AWS
 * API Reference</a></p>
 */
class TagPropagationConfiguration {
 public:
  AWS_CONNECTCASES_API TagPropagationConfiguration() = default;
  AWS_CONNECTCASES_API TagPropagationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API TagPropagationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Supported resource types for tag propagation. Determines which resources will
   * receive automatically propagated tags.</p>
   */
  inline TagPropagationResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(TagPropagationResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline TagPropagationConfiguration& WithResourceType(TagPropagationResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags that will be applied to the created resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTagMap() const { return m_tagMap; }
  inline bool TagMapHasBeenSet() const { return m_tagMapHasBeenSet; }
  template <typename TagMapT = Aws::Map<Aws::String, Aws::String>>
  void SetTagMap(TagMapT&& value) {
    m_tagMapHasBeenSet = true;
    m_tagMap = std::forward<TagMapT>(value);
  }
  template <typename TagMapT = Aws::Map<Aws::String, Aws::String>>
  TagPropagationConfiguration& WithTagMap(TagMapT&& value) {
    SetTagMap(std::forward<TagMapT>(value));
    return *this;
  }
  template <typename TagMapKeyT = Aws::String, typename TagMapValueT = Aws::String>
  TagPropagationConfiguration& AddTagMap(TagMapKeyT&& key, TagMapValueT&& value) {
    m_tagMapHasBeenSet = true;
    m_tagMap.emplace(std::forward<TagMapKeyT>(key), std::forward<TagMapValueT>(value));
    return *this;
  }
  ///@}
 private:
  TagPropagationResourceType m_resourceType{TagPropagationResourceType::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_tagMap;
  bool m_resourceTypeHasBeenSet = false;
  bool m_tagMapHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
